#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "util.h"
#include "item.h"
#include "random.h"
#include "battle_ai_script_commands.h"
#include "battle_setup.h"
#include "data.h"
#include "event_data.h"
#include "item.h"
#include "pokemon.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_move_effects.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/species.h"

#include "data/probable_moves.h"

#define __DEBUG_AI__ 1
#if __DEBUG_AI__
    #include "string_util.h"
    #include "menu.h"
#endif

#define AI_ACTION_DONE          0x0001
#define AI_ACTION_FLEE          0x0002
#define AI_ACTION_WATCH         0x0004
#define AI_ACTION_DO_NOT_ATTACK 0x0008
#define AI_ACTION_UNK5          0x0010
#define AI_ACTION_UNK6          0x0020
#define AI_ACTION_UNK7          0x0040
#define AI_ACTION_UNK8          0x0080

#define AI_THINKING_STRUCT ((struct AI_ThinkingStruct *)(gBattleResources->ai))
#define BATTLE_HISTORY ((struct BattleHistory *)(gBattleResources->battleHistory))
#define HISTORY_INDEX(opponentId) ((GetBattlerSide(opponentId) == B_SIDE_PLAYER ? 0 : PARTY_SIZE) + gBattlerPartyIndexes[opponentId])
#define FOES_MOVE_HISTORY(opponentId) (BATTLE_HISTORY->_usedMoves[HISTORY_INDEX(opponentId)].moves)
#define FOES_OBSERVED_ABILITY(opponentId) (BATTLE_HISTORY->_abilities[HISTORY_INDEX(opponentId)])
#define FOES_OBSERVED_ITEM_EFFECT(opponentId) (BATTLE_HISTORY->_itemEffects[HISTORY_INDEX(opponentId)])
#define AI_CAN_ESTIMATE_DAMAGE(move) (gBattleMoves[move].power > 1 || (gBattleMoves[move].power == 1 && gBattleMoves[move].effect != EFFECT_OHKO && move != MOVE_COUNTER && move != MOVE_MIRROR_COAT && move != MOVE_BIDE))

// AI states
enum
{
    AIState_SettingUp,
    AIState_Processing,
    AIState_FinishedProcessing,
    AIState_DoNotProcess
};

/*
sAIScriptPtr is a pointer to the next battle AI cmd command to read.
when a command finishes processing, sAIScriptPtr is incremented by
the number of bytes that the current command had reserved for arguments
in order to read the next command correctly. refer to battle_ai_scripts.s for the
AI scripts.
*/

static EWRAM_DATA const u8 *sAIScriptPtr = NULL;
extern u8 *gBattleAI_ScriptsTable[];

static void Cmd_if_random_less_than(void);
static void Cmd_if_random_greater_than(void);
static void Cmd_if_random_equal(void);
static void Cmd_if_random_not_equal(void);
static void Cmd_score(void);
static void Cmd_if_hp_less_than(void);
static void Cmd_if_hp_more_than(void);
static void Cmd_if_hp_equal(void);
static void Cmd_if_hp_not_equal(void);
static void Cmd_if_status(void);
static void Cmd_if_not_status(void);
static void Cmd_if_status2(void);
static void Cmd_if_not_status2(void);
static void Cmd_if_status3(void);
static void Cmd_if_not_status3(void);
static void Cmd_if_side_affecting(void);
static void Cmd_if_not_side_affecting(void);
static void Cmd_if_less_than(void);
static void Cmd_if_more_than(void);
static void Cmd_if_equal(void);
static void Cmd_if_not_equal(void);
static void Cmd_if_less_than_ptr(void);
static void Cmd_if_more_than_ptr(void);
static void Cmd_if_equal_ptr(void);
static void Cmd_if_not_equal_ptr(void);
static void Cmd_if_move(void);
static void Cmd_if_not_move(void);
static void Cmd_if_in_bytes(void);
static void Cmd_if_not_in_bytes(void);
static void Cmd_if_in_hwords(void);
static void Cmd_if_not_in_hwords(void);
static void Cmd_if_user_has_attacking_move(void);
static void Cmd_if_user_has_no_attacking_moves(void);
static void Cmd_get_turn_count(void);
static void Cmd_get_type(void);
static void Cmd_get_considered_move_power(void);
static void Cmd_get_how_powerful_move_is(void);
static void Cmd_get_last_used_battler_move(void);
static void Cmd_if_equal_(void);
static void Cmd_if_not_equal_(void);
static void Cmd_if_would_go_first(void);
static void Cmd_if_would_not_go_first(void);
static void Cmd_nullsub_2A(void);
static void Cmd_nullsub_2B(void);
static void Cmd_count_alive_pokemon(void);
static void Cmd_get_considered_move(void);
static void Cmd_get_considered_move_effect(void);
static void Cmd_get_ability(void);
static void Cmd_get_highest_type_effectiveness(void);
static void Cmd_if_type_effectiveness(void);
static void Cmd_nullsub_32(void);
static void Cmd_nullsub_33(void);
static void Cmd_if_status_in_party(void);
static void Cmd_if_status_not_in_party(void);
static void Cmd_get_weather(void);
static void Cmd_if_effect(void);
static void Cmd_if_not_effect(void);
static void Cmd_if_stat_level_less_than(void);
static void Cmd_if_stat_level_more_than(void);
static void Cmd_if_stat_level_equal(void);
static void Cmd_if_stat_level_not_equal(void);
static void Cmd_if_can_faint(void);
static void Cmd_if_cant_faint(void);
static void Cmd_if_has_move(void);
static void Cmd_if_doesnt_have_move(void);
static void Cmd_if_has_move_with_effect(void);
static void Cmd_if_doesnt_have_move_with_effect(void);
static void Cmd_if_any_move_disabled_or_encored(void);
static void Cmd_if_curr_move_disabled_or_encored(void);
static void Cmd_flee(void);
static void Cmd_if_random_safari_flee(void);
static void Cmd_watch(void);
static void Cmd_get_hold_effect(void);
static void Cmd_get_gender(void);
static void Cmd_is_first_turn_for(void);
static void Cmd_get_stockpile_count(void);
static void Cmd_is_double_battle(void);
static void Cmd_get_used_held_item(void);
static void Cmd_get_move_type_from_result(void);
static void Cmd_get_move_power_from_result(void);
static void Cmd_get_move_effect_from_result(void);
static void Cmd_get_protect_count(void);
static void Cmd_nullsub_52(void);
static void Cmd_nullsub_53(void);
static void Cmd_nullsub_54(void);
static void Cmd_nullsub_55(void);
static void Cmd_nullsub_56(void);
static void Cmd_nullsub_57(void);
static void Cmd_call(void);
static void Cmd_goto(void);
static void Cmd_end(void);
static void Cmd_if_level_cond(void);
static void Cmd_if_target_taunted(void);
static void Cmd_if_target_not_taunted(void);
// NEW AIs
static void Cmd_check_ability(void); // IMPLEMENTED, NEED TESTS
static void Cmd_is_of_type(void);  // IMPLEMENTED, NEED TESTS
static void Cmd_if_target_is_ally(void);   // IMPLEMENTED, NEED TESTS
static void Cmd_if_flash_fired(void);   // IMPLEMENTED, NEED TESTS
static void Cmd_if_holds_item(void); // IMPLEMENTED, NEED TESTS
static void Cmd_get_hazards_count(void); // IMPLEMENTED, NEED TESTS
static void Cmd_get_curr_dmg_hp_percent(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_hp_condition(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_accuracy_less_than(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_not_expected_to_sleep(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_receiving_wish(void);  // IMPLEMENTED, NEED TESTS
static void Cmd_if_target_wont_attack_due_to_truant(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_trick_fails_in_this_type_of_battle(void); // NOT IMPLEMENTED
static void Cmd_calculate_nhko(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_next_turn_target_might_use_move_with_effect(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_battler_absent(void); // IMPLEMENTED, NEED TESTS
static void Cmd_get_possible_categories_of_foes_attacks(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_perish_song_not_about_to_trigger(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_high_change_to_break_sub_and_keep_hitting(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_user_has_revealed_move(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_has_non_ineffective_move_with_effect(void); // IMPLEMENTED, NEED TESTS
static void Cmd_if_doesnt_have_non_ineffective_move_with_effect(void); // IMPLEMENTED, NEED TESTS

static u8 ChooseMoveOrAction_Singles(void);
static u8 ChooseMoveOrAction_Doubles(void);
static void BattleAI_DoAIProcessing(void);
static void AIStackPushVar(const u8 *ptr);
static bool8 AIStackPop(void);

typedef void (*BattleAICmdFunc)(void);

static const BattleAICmdFunc sBattleAICmdTable[] =
{
    Cmd_if_random_less_than,              // 0x0
    Cmd_if_random_greater_than,           // 0x1
    Cmd_if_random_equal,                  // 0x2
    Cmd_if_random_not_equal,              // 0x3
    Cmd_score,                            // 0x4
    Cmd_if_hp_less_than,                  // 0x5
    Cmd_if_hp_more_than,                  // 0x6
    Cmd_if_hp_equal,                      // 0x7
    Cmd_if_hp_not_equal,                  // 0x8
    Cmd_if_status,                        // 0x9
    Cmd_if_not_status,                    // 0xA
    Cmd_if_status2,                       // 0xB
    Cmd_if_not_status2,                   // 0xC
    Cmd_if_status3,                       // 0xD
    Cmd_if_not_status3,                   // 0xE
    Cmd_if_side_affecting,                // 0xF
    Cmd_if_not_side_affecting,            // 0x10
    Cmd_if_less_than,                     // 0x11
    Cmd_if_more_than,                     // 0x12
    Cmd_if_equal,                         // 0x13
    Cmd_if_not_equal,                     // 0x14
    Cmd_if_less_than_ptr,                 // 0x15
    Cmd_if_more_than_ptr,                 // 0x16
    Cmd_if_equal_ptr,                     // 0x17
    Cmd_if_not_equal_ptr,                 // 0x18
    Cmd_if_move,                          // 0x19
    Cmd_if_not_move,                      // 0x1A
    Cmd_if_in_bytes,                      // 0x1B
    Cmd_if_not_in_bytes,                  // 0x1C
    Cmd_if_in_hwords,                     // 0x1D
    Cmd_if_not_in_hwords,                 // 0x1E
    Cmd_if_user_has_attacking_move,       // 0x1F
    Cmd_if_user_has_no_attacking_moves,   // 0x20
    Cmd_get_turn_count,                   // 0x21
    Cmd_get_type,                         // 0x22
    Cmd_get_considered_move_power,        // 0x23
    Cmd_get_how_powerful_move_is,         // 0x24
    Cmd_get_last_used_battler_move,       // 0x25
    Cmd_if_equal_,                        // 0x26
    Cmd_if_not_equal_,                    // 0x27
    Cmd_if_would_go_first,                // 0x28
    Cmd_if_would_not_go_first,            // 0x29
    Cmd_nullsub_2A,                       // 0x2A
    Cmd_nullsub_2B,                       // 0x2B
    Cmd_count_alive_pokemon,              // 0x2C
    Cmd_get_considered_move,              // 0x2D
    Cmd_get_considered_move_effect,       // 0x2E
    Cmd_get_ability,                      // 0x2F
    Cmd_get_highest_type_effectiveness,   // 0x30
    Cmd_if_type_effectiveness,            // 0x31
    Cmd_nullsub_32,                       // 0x32
    Cmd_nullsub_33,                       // 0x33
    Cmd_if_status_in_party,               // 0x34
    Cmd_if_status_not_in_party,           // 0x35
    Cmd_get_weather,                      // 0x36
    Cmd_if_effect,                        // 0x37
    Cmd_if_not_effect,                    // 0x38
    Cmd_if_stat_level_less_than,          // 0x39
    Cmd_if_stat_level_more_than,          // 0x3A
    Cmd_if_stat_level_equal,              // 0x3B
    Cmd_if_stat_level_not_equal,          // 0x3C
    Cmd_if_can_faint,                     // 0x3D
    Cmd_if_cant_faint,                    // 0x3E
    Cmd_if_has_move,                      // 0x3F
    Cmd_if_doesnt_have_move,              // 0x40
    Cmd_if_has_move_with_effect,          // 0x41
    Cmd_if_doesnt_have_move_with_effect,  // 0x42
    Cmd_if_any_move_disabled_or_encored,  // 0x43
    Cmd_if_curr_move_disabled_or_encored, // 0x44
    Cmd_flee,                             // 0x45
    Cmd_if_random_safari_flee,            // 0x46
    Cmd_watch,                            // 0x47
    Cmd_get_hold_effect,                  // 0x48
    Cmd_get_gender,                       // 0x49
    Cmd_is_first_turn_for,                // 0x4A
    Cmd_get_stockpile_count,              // 0x4B
    Cmd_is_double_battle,                 // 0x4C
    Cmd_get_used_held_item,               // 0x4D
    Cmd_get_move_type_from_result,        // 0x4E
    Cmd_get_move_power_from_result,       // 0x4F
    Cmd_get_move_effect_from_result,      // 0x50
    Cmd_get_protect_count,                // 0x51
    Cmd_nullsub_52,                       // 0x52
    Cmd_nullsub_53,                       // 0x53
    Cmd_nullsub_54,                       // 0x54
    Cmd_nullsub_55,                       // 0x55
    Cmd_nullsub_56,                       // 0x56
    Cmd_nullsub_57,                       // 0x57
    Cmd_call,                             // 0x58
    Cmd_goto,                             // 0x59
    Cmd_end,                              // 0x5A
    Cmd_if_level_cond,                 // 0x5B
    Cmd_if_target_taunted,                // 0x5C
    Cmd_if_target_not_taunted,            // 0x5D
    Cmd_if_target_is_ally,                // 0x5E
    Cmd_is_of_type,                                 // 0x5F
    Cmd_check_ability,                              // 0x60
    Cmd_if_flash_fired,                             // 0x61
    Cmd_if_holds_item,                              // 0x62
    Cmd_get_hazards_count,                          // 0x63
    Cmd_get_curr_dmg_hp_percent,                    // 0x64
    Cmd_if_hp_condition,                            // 0x65
    Cmd_if_accuracy_less_than,                      // 0x66
    Cmd_if_not_expected_to_sleep,                   // 0x67
    Cmd_if_receiving_wish,                          // 0x68
    Cmd_if_target_wont_attack_due_to_truant,                // 0x69
    Cmd_if_trick_fails_in_this_type_of_battle,              // 0x6A
    Cmd_calculate_nhko,                                     // 0x6B
    Cmd_if_next_turn_target_might_use_move_with_effect,     // 0x6C
    Cmd_if_battler_absent,                                  // 0x6D
    Cmd_get_possible_categories_of_foes_attacks,            // 0x6E
    Cmd_if_perish_song_not_about_to_trigger,                // 0x6F
    Cmd_if_high_change_to_break_sub_and_keep_hitting,       // 0x70
    Cmd_if_user_has_revealed_move,                          // 0x71
    Cmd_if_has_non_ineffective_move_with_effect,            // 0x72
    Cmd_if_doesnt_have_non_ineffective_move_with_effect,    // 0x73	
};

static const u16 sDiscouragedPowerfulMoveEffects[] =
{
    EFFECT_EXPLOSION,
    EFFECT_DREAM_EATER,
    EFFECT_RAZOR_WIND,
    EFFECT_SKY_ATTACK,
    EFFECT_RECHARGE,
    EFFECT_SKULL_BASH,
    EFFECT_SOLARBEAM,
    EFFECT_SPIT_UP,
    EFFECT_SUPERPOWER,
    EFFECT_PRESENT,
    EFFECT_OVERHEAT,
    0xFFFF
};

static const u16 sDamagingMovesMostlyUnaffectedByStatDrops[] =
{
    MOVE_BIND,
	MOVE_WRAP,
	MOVE_WHIRLPOOL, 
	MOVE_FIRE_SPIN, 
	MOVE_CLAMP, 
	MOVE_ENDEAVOR, 
	MOVE_GUILLOTINE, 
	MOVE_FISSURE, 
	MOVE_SHEER_COLD, 
	MOVE_HORN_DRILL, 
	MOVE_COUNTER, 
	MOVE_MIRROR_COAT, 
	MOVE_SEISMIC_TOSS, 
	MOVE_NIGHT_SHADE, 
	MOVE_RAPID_SPIN, 
	MOVE_SONIC_BOOM, 
	MOVE_DRAGON_RAGE, 
	MOVE_BIDE,
	MOVE_PSYWAVE,
	MOVE_SUPER_FANG,
    0xFFFF
};

void BattleAI_HandleItemUseBeforeAISetup(void)
{
    s32 i;
    u8 *data = (u8 *)BATTLE_HISTORY;

    for (i = 0; i < sizeof(struct BattleHistory); i++)
        data[i] = 0;

    // Items are allowed to use in ONLY trainer battles.
    if ((gBattleTypeFlags & BATTLE_TYPE_TRAINER)
        && (gTrainerBattleOpponent_A != SECRET_BASE_OPPONENT)
        && !(gBattleTypeFlags & (BATTLE_TYPE_TRAINER_TOWER | BATTLE_TYPE_EREADER_TRAINER | BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_SAFARI | BATTLE_TYPE_LINK))
        )
    {
        for (i = 0; i < MAX_TRAINER_ITEMS; i++)
        {
            if (gTrainers[gTrainerBattleOpponent_A].items[i] != 0)
            {
                BATTLE_HISTORY->trainerItems[BATTLE_HISTORY->itemsNo] = gTrainers[gTrainerBattleOpponent_A].items[i];
                BATTLE_HISTORY->itemsNo++;
            }
        }
    }

    BattleAI_SetupAIData();
}

void BattleAI_SetupAIData(void)
{
    s32 i;
    u8 *data = (u8 *)AI_THINKING_STRUCT;
    u8 moveLimitations;

    // Clear AI data.
    for (i = 0; i < sizeof(struct AI_ThinkingStruct); i++)
        data[i] = 0;

    for (i = 0; i < MAX_MON_MOVES; i++)
        AI_THINKING_STRUCT->score[i] = 100;

    moveLimitations = CheckMoveLimitations(gActiveBattler, 0, 0xFF);

    // Ignore moves that aren't possible to use.
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (gBitTable[i] & moveLimitations)
            AI_THINKING_STRUCT->score[i] = 0;

        AI_THINKING_STRUCT->simulatedRNG[i] = 100 - (Random() % 16);
    }

    gBattleResources->AI_ScriptsStack->size = 0;
    gBattlerAttacker = gActiveBattler;

    // Decide a random target battlerId in doubles.
    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        gBattlerTarget = (Random() & BIT_FLANK);

        if (gAbsentBattlerFlags & gBitTable[gBattlerTarget])
            gBattlerTarget ^= BIT_FLANK;
    }
    // There's only one choice in single battles.
    else
    {
        gBattlerTarget = gBattlerAttacker ^ BIT_SIDE;
    }

    // Choose proper trainer ai scripts.
    // Fire Red, why all the returns?!?
    if (gBattleTypeFlags & BATTLE_TYPE_SAFARI)
    {
        AI_THINKING_STRUCT->aiFlags = AI_SCRIPT_SAFARI;
        return;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_ROAMER)
    {
        AI_THINKING_STRUCT->aiFlags = AI_SCRIPT_ROAMING;
        return;
    }
    else if (!(gBattleTypeFlags & (BATTLE_TYPE_TRAINER_TOWER | BATTLE_TYPE_EREADER_TRAINER | BATTLE_TYPE_BATTLE_TOWER)) && (gTrainerBattleOpponent_A != SECRET_BASE_OPPONENT))
    {
        if (gBattleTypeFlags & BATTLE_TYPE_WILD_SCRIPTED)
        {
            AI_THINKING_STRUCT->aiFlags = AI_SCRIPT_CHECK_BAD_MOVE;
            return;
        }
        else if (gBattleTypeFlags & BATTLE_TYPE_LEGENDARY_FRLG)
        {
            AI_THINKING_STRUCT->aiFlags = (AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY);
            return;
        }
    }
    else
    {
        AI_THINKING_STRUCT->aiFlags = (AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY);
        return;
    }
    AI_THINKING_STRUCT->aiFlags = gTrainers[gTrainerBattleOpponent_A].aiFlags;
}

// Chapuza, BattleAI iguales pero con otro nombre de ()

void BattleAI_HandleItemUseBeforeAISetupNuevo(u8 defaultScoreMoves)
{
    s32 i;
    u8 *data = (u8 *)BATTLE_HISTORY;

    for (i = 0; i < sizeof(struct BattleHistory); i++)
        data[i] = 0;

    // Items are allowed to use in ONLY trainer battles.
    if ((gBattleTypeFlags & BATTLE_TYPE_TRAINER)
        && (gTrainerBattleOpponent_A != SECRET_BASE_OPPONENT)
        && !(gBattleTypeFlags & (BATTLE_TYPE_TRAINER_TOWER | BATTLE_TYPE_EREADER_TRAINER | BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_SAFARI | BATTLE_TYPE_LINK))
        )
    {
        for (i = 0; i < MAX_TRAINER_ITEMS; i++)
        {
            if (gTrainers[gTrainerBattleOpponent_A].items[i] != 0)
            {
                BATTLE_HISTORY->trainerItems[BATTLE_HISTORY->itemsNo] = gTrainers[gTrainerBattleOpponent_A].items[i];
                BATTLE_HISTORY->itemsNo++;
            }
        }
    }

    BattleAI_SetupAIDataNuevo(defaultScoreMoves);
}

void BattleAI_SetupAIDataNuevo(u8 defaultScoreMoves)
{
    s32 i;
    u8 *data = (u8 *)AI_THINKING_STRUCT;
    u8 moveLimitations;

    // Clear AI data.
    for (i = 0; i < sizeof(struct AI_ThinkingStruct); i++)
        data[i] = 0;

    for (i = 0; i < MAX_MON_MOVES; i++)
        AI_THINKING_STRUCT->score[i] = 100;

    moveLimitations = CheckMoveLimitations(gActiveBattler, 0, 0xFF);

    // Ignore moves that aren't possible to use.
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (gBitTable[i] & moveLimitations)
            AI_THINKING_STRUCT->score[i] = 0;

        AI_THINKING_STRUCT->simulatedRNG[i] = 100 - (Random() % 16);
    }

    gBattleResources->AI_ScriptsStack->size = 0;
    gBattlerAttacker = gActiveBattler;

    // Decide a random target battlerId in doubles.
    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        gBattlerTarget = (Random() & BIT_FLANK);

        if (gAbsentBattlerFlags & gBitTable[gBattlerTarget])
            gBattlerTarget ^= BIT_FLANK;
    }
    // There's only one choice in single battles.
    else
    {
        gBattlerTarget = gBattlerAttacker ^ BIT_SIDE;
    }

    // Choose proper trainer ai scripts.
    // Fire Red, why all the returns?!?
    if (gBattleTypeFlags & BATTLE_TYPE_SAFARI)
    {
        AI_THINKING_STRUCT->aiFlags = AI_SCRIPT_SAFARI;
        return;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_ROAMER)
    {
        AI_THINKING_STRUCT->aiFlags = AI_SCRIPT_ROAMING;
        return;
    }
    else if (!(gBattleTypeFlags & (BATTLE_TYPE_TRAINER_TOWER | BATTLE_TYPE_EREADER_TRAINER | BATTLE_TYPE_BATTLE_TOWER)) && (gTrainerBattleOpponent_A != SECRET_BASE_OPPONENT))
    {
        if (gBattleTypeFlags & BATTLE_TYPE_WILD_SCRIPTED)
        {
            AI_THINKING_STRUCT->aiFlags = AI_SCRIPT_CHECK_BAD_MOVE;
            return;
        }
        else if (gBattleTypeFlags & BATTLE_TYPE_LEGENDARY_FRLG)
        {
            AI_THINKING_STRUCT->aiFlags = (AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY);
            return;
        }
    }
    else
    {
        AI_THINKING_STRUCT->aiFlags = (AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY);
        return;
    }
    AI_THINKING_STRUCT->aiFlags = gTrainers[gTrainerBattleOpponent_A].aiFlags;
}

// Mas BattleAI, etc.

u8 BattleAI_ChooseMoveOrAction(void)
{
    u16 savedCurrentMove = gCurrentMove;
    u8 ret;

    if (!(gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
        ret = ChooseMoveOrAction_Singles();
    else
        ret = ChooseMoveOrAction_Doubles();

    gCurrentMove = savedCurrentMove;
    return ret;
}

bool32 IsTruantMonVulnerable(u32 battlerAI, u32 opposingBattler)
{
    s32 i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        u32 move = FOES_MOVE_HISTORY(opposingBattler)[i];
        if (gBattleMoves[move].effect == EFFECT_PROTECT)
            return TRUE;
		if (gBattleMoves[move].effect == EFFECT_SUBSTITUTE
			&& gBattleMons[opposingBattler].hp > gBattleMons[opposingBattler].maxHP / 4) // tiene PS para meter sub
            return TRUE;
		 if (gBattleMoves[move].effect == EFFECT_SEMI_INVULNERABLE && GetWhoStrikesFirst(battlerAI, opposingBattler, TRUE) == 1)
            return TRUE;
    }
    return FALSE;
}

// Determina si un cierto ataque se está viendo afectado por bajadas de stats ofensivos
bool8 IsMoveSignificantlyAffectedByStatDrops(u16 move)
{
    s32 i;
    u8 type = gBattleMoves[move].type;
    u8 power = gBattleMoves[move].power;

    if (move == MOVE_HIDDEN_POWER || move == MOVE_MONADO_POWER)
    {
        struct Pokemon *monAttacker;
        if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
            monAttacker = &gPlayerParty[gBattlerPartyIndexes[gActiveBattler]];
        else
            monAttacker = &gEnemyParty[gBattlerPartyIndexes[gActiveBattler]];

        type = monAttacker->box.hpType;
    }
    else if (move == MOVE_WEATHER_BALL && WEATHER_HAS_EFFECT)
    {
        if (gBattleWeather & WEATHER_RAIN_ANY)
            type = TYPE_WATER;
        else if (gBattleWeather & WEATHER_SANDSTORM_ANY)
            type = TYPE_ROCK;
        else if (gBattleWeather & WEATHER_SUN_ANY)
            type = TYPE_FIRE;
        else if (gBattleWeather & WEATHER_HAIL_ANY)
            type = TYPE_ICE;
    }
    if (power == 0)
        return FALSE; // Mov de estado; en general no se ve afectado (hay excepciones como Nature Power, Metronome, Mirror Move...)
    for (i = 0; sDamagingMovesMostlyUnaffectedByStatDrops[i] != 0xFFFF; i++)
    {
        if (move == sDamagingMovesMostlyUnaffectedByStatDrops[i])
            return FALSE; // Aunque sea un mov de daño, no está entre los que se ven muy afectados
    }
    // Devuelve TRUE si tiene bajado el stat en la categoría del ataque
    return AreAttackingStatsLowered(IS_TYPE_PHYSICAL(gBattleMoves[move]) ? 0 : 1);
}


// Determina si un cierto ataque se está viendo afectado por bajadas de Precisión
bool8 IsMoveSignificantlyAffectedByAccuracyDrops(u16 move)
{
    if (gBattleMoves[move].accuracy == 0 && move != MOVE_MIRROR_MOVE && move != MOVE_METRONOME && move != MOVE_SLEEP_TALK && move != MOVE_ASSIST)
        return FALSE;  // no le afecta la posible bajada en Precisión
    // Lock-On, Mind Reader
    if (gStatuses3[gBattlerTarget] & STATUS3_ALWAYS_HITS && gDisableStructs[gBattlerTarget].battlerWithSureHit == gBattlerAttacker)
        return FALSE;
    // No Guard
    if (gBattleMons[gBattlerTarget].ability == ABILITY_NO_GUARD || gBattleMons[gBattlerAttacker].ability == ABILITY_NO_GUARD)
        return FALSE;
    return IsAccuracyLowered(-3); // se considera bajada a partir de -3
}

bool8 sBattler_AIisLosingHPDueToWeather(bool8 ignoreLeftoversAndIngrain)
{
    return (WEATHER_HAS_EFFECT
            && gBattleMons[gBattlerAttacker].ability != ABILITY_OVERCOAT
            && (ignoreLeftoversAndIngrain || (
                      gBattleMons[gBattlerAttacker].item != ITEM_LEFTOVERS // Restos compensa el clima
                  && !(gStatuses3[gBattlerAttacker] & STATUS3_ROOTED)      // Arraigo ídem
                ))
            && (
                ( // la IA pierde PS por arena
                 (gBattleWeather & WEATHER_SANDSTORM_ANY)
                 && !IS_BATTLER_OF_TYPE(gBattlerAttacker, TYPE_GROUND)
                 && !IS_BATTLER_OF_TYPE(gBattlerAttacker, TYPE_ROCK)
                 && !IS_BATTLER_OF_TYPE(gBattlerAttacker, TYPE_STEEL)
                 && gBattleMons[gBattlerAttacker].ability != ABILITY_SAND_VEIL
                 && gBattleMons[gBattlerAttacker].ability != ABILITY_SAND_RUSH
                 && gBattleMons[gBattlerAttacker].ability != ABILITY_SAND_FORCE
                )
              ||
                ( // la IA pierde PS por granizo
                 (gBattleWeather & WEATHER_HAIL_ANY)
                 && !IS_BATTLER_OF_TYPE(gBattlerAttacker, TYPE_ICE)
                 && gBattleMons[gBattlerAttacker].ability != ABILITY_SNOW_CLOAK
                 && gBattleMons[gBattlerAttacker].ability != ABILITY_ICE_BODY
                 && gBattleMons[gBattlerAttacker].ability != ABILITY_SLUSH_RUSH
                )
               )
           );
}

void CalculategBattleMoveDamageFromgCurrentMove(u8 attackerId, u8 targetId, u8 simulatedRng)
{
    gDynamicBasePower = 0;
    gBattleStruct->dynamicMoveType = 0;
    gBattleScripting.dmgMultiplier = 1;
    gMoveResultFlags = 0;
    gCritMultiplier = 1;
    AI_CalcDmg(attackerId, targetId);

	if (gBattleMoveDamage != 0 && simulatedRng)
    {
        gBattleMoveDamage = gBattleMoveDamage * simulatedRng / 100;
        if (gBattleMoveDamage == 0)
            gBattleMoveDamage = 1; // Salvo inmunidad, el daño siempre es al menos 1
    }
}

s32 CalculateDamageFromMove(u8 attackerId, u8 targetId, u16 move, u8 simulatedRng)
{
    s32 savedgBattleMoveDamage = gBattleMoveDamage;
    u16 savedgCurrentMove = gCurrentMove;
    s32 damage;

    gCurrentMove = move;
    CalculategBattleMoveDamageFromgCurrentMove(attackerId, targetId, simulatedRng);
    damage = gBattleMoveDamage;

    gCurrentMove = savedgCurrentMove;
    gBattleMoveDamage = savedgBattleMoveDamage;

    return damage;
}

s32 CalculatenHKOFromgCurrentMove(u8 attackerId, u8 targetId, u8 simulatedRng, s32 best_nhko)
{
    s32 n;
    s32 divisor = 1, adder = 0;


    CalculategBattleMoveDamageFromgCurrentMove(attackerId, targetId, simulatedRng);

    // Multiplica por 2 si es un mov de dos turnos, y resta un turno si está ejecutándose
    switch (gBattleMoves[gCurrentMove].effect) {
        case EFFECT_SOLARBEAM:
            if (WEATHER_HAS_EFFECT && (gBattleWeather & WEATHER_SUN_ANY)) break;
        case EFFECT_RAZOR_WIND:
        case EFFECT_SKY_ATTACK:
        case EFFECT_SKULL_BASH:
        case EFFECT_SEMI_INVULNERABLE:
            divisor = 2;
            if ((gBattleMons[attackerId].status2 & STATUS2_MULTIPLETURNS) && gCurrentMove == gLastMoves[attackerId])
                adder = 1;
    }
	
    for (n = 1; n < best_nhko; n++)
		if (gBattleMons[targetId].hp <= ((n+adder)/divisor) * gBattleMoveDamage)
            return n;

    return best_nhko;
}

// Asume que el poke de la IA es un Shedinja
bool32 OurShedinjaIsVulnerable(u32 battlerAI, u32 opposingBattler, u16 consideredMove)
{
    s32 i, j, known_moves = 0;
    u8 moveLimitations = CheckMoveLimitations(opposingBattler, 0, MOVE_LIMITATION_CHOICE-1);

    // Si Shedinja elige protegerse, no hace falta huir
    if (gBattleMoves[consideredMove].effect == EFFECT_PROTECT && gDisableStructs[battlerAI].protectUses == 0)
        return FALSE;

    // Si Shedinja es más rápido y hace KO con el ataque elegido, no hace falta huir
    if (GetWhoStrikesFirst(battlerAI, opposingBattler, TRUE) == 0)
    {
        gCurrentMove = consideredMove;
        if (CalculatenHKOFromgCurrentMove(battlerAI, opposingBattler, 85, 5) == 1)
            return FALSE;
    }

    // Si el oponente va a escoger Struggle, Shedinja tiene que huir, pues será dañado
    if (moveLimitations == 0xF)
        return TRUE;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        gCurrentMove = FOES_MOVE_HISTORY(opposingBattler)[i];

        if (!gCurrentMove)
            continue;

        known_moves += 1;

        // Comprueba que puede usar el movimiento
        for (j = 0; j < MAX_MON_MOVES; j++)
            if (gCurrentMove == gBattleMons[opposingBattler].moves[j] && !(gBitTable[j] & moveLimitations))
                break;
        if (j == MAX_MON_MOVES)
            continue; // No puede usar el movimiento por el momento; se ignora

		// Si le hace daño a Shedinja, hora de huir
        if (AI_CAN_ESTIMATE_DAMAGE(gCurrentMove))
        {
            CalculategBattleMoveDamageFromgCurrentMove(opposingBattler, battlerAI, 0);
            if (gBattleMoveDamage > 0)
                return TRUE;
        }
			
// Los siguientes movimientos también requieren huir
        switch (gBattleMoves[gCurrentMove].effect)
        {
            case EFFECT_TOXIC:
            case EFFECT_POISON:
			case EFFECT_CONFUSE:
			case EFFECT_TEETER_DANCE:
			case EFFECT_SWAGGER:
			case EFFECT_FLATTER:
		    case EFFECT_LEECH_SEED:
            case EFFECT_WILL_O_WISP:
            case EFFECT_SANDSTORM:
            case EFFECT_HAIL:
                return TRUE;
        }
    }

    if (known_moves < 4)
    {
        u8 opponent_types[2] = {gBattleMons[opposingBattler].type1, gBattleMons[opposingBattler].type2};
        if (gBattleMons[battlerAI].ability != ABILITY_WONDER_GUARD)
            return TRUE; // probablemente pueda atacar a Shedinja con cualquier cosa

        // Comprueba si alguno de los STAB del rival es muy eficaz. Asume que no le ha cambiado el tipo a Shedinja
        for (i = 0; i < 2; i++)
            switch (opponent_types[i])
            {
                case TYPE_FIRE:
                case TYPE_FLYING:
                case TYPE_ROCK:
                case TYPE_GHOST:
                case TYPE_DARK:
                    return TRUE;
            }
    }

    return FALSE;
}

bool8 AICanSwitchAssumingEnoughPokemon(void)
{
    return !(ABILITY_ON_OPPOSING_FIELD(gBattlerAttacker, ABILITY_SHADOW_TAG) && (gBattleMons[gBattlerAttacker].type1 != TYPE_GHOST && gBattleMons[gBattlerAttacker].type2 != TYPE_GHOST && gBattleMons[gBattlerAttacker].ability != ABILITY_SHADOW_TAG))
            && !(ABILITY_ON_OPPOSING_FIELD(gBattlerAttacker, ABILITY_ARENA_TRAP) && (gBattleMons[gBattlerAttacker].type1 != TYPE_FLYING && gBattleMons[gBattlerAttacker].type2 != TYPE_FLYING && gBattleMons[gBattlerAttacker].type1 != TYPE_GHOST && gBattleMons[gBattlerAttacker].type2 != TYPE_GHOST && gBattleMons[gBattlerAttacker].ability != ABILITY_LEVITATE))
            && !(ABILITY_ON_FIELD2(ABILITY_MAGNET_PULL) && (gBattleMons[gBattlerAttacker].type1 == TYPE_STEEL || gBattleMons[gBattlerAttacker].type2 == TYPE_STEEL))
            && !(gBattleMons[gBattlerAttacker].status2 & (STATUS2_WRAPPED | STATUS2_ESCAPE_PREVENTION) && (gBattleMons[gBattlerAttacker].type1 != TYPE_GHOST && gBattleMons[gBattlerAttacker].type2 != TYPE_GHOST))
            && !(gStatuses3[gBattlerAttacker] & STATUS3_ROOTED && (gBattleMons[gBattlerAttacker].type1 != TYPE_GHOST && gBattleMons[gBattlerAttacker].type2 != TYPE_GHOST))
            ;
			//&& !(gBattleTypeFlags & (BATTLE_TYPE_ARENA | BATTLE_TYPE_PALACE))
            //&& FlagGet(FLAG_RYU_RANDOMBATTLECCMETRO) != 1;
}

#define STORED_AI_MEMORY (BATTLE_HISTORY->switchMemory[gBattlerAttacker & BIT_SIDE])
static u8 ChooseMoveOrAction_Singles(void)
{
    u8 currentMoveArray[MAX_MON_MOVES];
    u8 consideredMoveArray[MAX_MON_MOVES];
    u8 numOfBestMoves;
    s32 i;
	u32 flags = AI_THINKING_STRUCT->aiFlags;

    struct AI_MemoryStruct memory = STORED_AI_MEMORY;
    ((u8*) &STORED_AI_MEMORY)[0] = 0; // se reinicia por si se decide cambiar

    RecordLastUsedMoveByTarget();

    while (flags != 0)
    {
        if (flags & 1)
        {
            AI_THINKING_STRUCT->aiState = AIState_SettingUp;
            BattleAI_DoAIProcessing();
        }
        flags >>= 1;
        AI_THINKING_STRUCT->aiLogicId++;
        AI_THINKING_STRUCT->movesetIndex = 0;
    }

    // Check special AI actions.
    if (AI_THINKING_STRUCT->aiAction & AI_ACTION_FLEE)
        return AI_CHOICE_FLEE;
    if (AI_THINKING_STRUCT->aiAction & AI_ACTION_WATCH)
        return AI_CHOICE_WATCH;
	
#if __DEBUG_AI__
    {
        int k;
        for (k = 0; k < 4; k++) {
            u8 numerico[6+4] = {EXT_CTRL_CODE_BEGIN, EXT_CTRL_CODE_COLOR, TEXT_COLOR_GREEN, EXT_CTRL_CODE_BEGIN, EXT_CTRL_CODE_SHADOW, TEXT_COLOR_LIGHT_GREEN};
            ConvertIntToDecimalStringN(numerico+6, AI_THINKING_STRUCT->score[k], STR_CONV_MODE_RIGHT_ALIGN, 3);
            AddTextPrinterParameterized(1, 0, numerico, 49 + 16*k, 18, 0, NULL);
        }
    }
#endif
// Consider switching if all moves are worthless to use.
    if (AI_THINKING_STRUCT->aiFlags & (AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_PREFER_BATON_PASS)
        && !(
             // no cambia si tiene Evasión a +6 o el rival no puede hacerle nada
             // y el rival está intoxicado o maldito
             ((gBattleMons[gBattlerTarget].status1 & STATUS1_TOXIC_POISON) || (gBattleMons[gBattlerTarget].status2 & STATUS2_CURSED))
          && (gBattleMons[gBattlerAttacker].statStages[STAT_EVASION] == 12 || CalculateNHKO(gBattlerTarget, gBattlerAttacker, FALSE, MOVE_NONE, TRUE, FALSE) >= 5)
            )
        && !(
             // Tampoco cambia si el rival está atrapado y afectado por Perish Song (y no está a punto de saltar)
             // o atrapado y puede agotar sus PP
             (((gStatuses3[gBattlerTarget] & STATUS3_PERISH_SONG)
                && gDisableStructs[gBattlerTarget].perishSongTimer != 0)
              || gBattleMons[gBattlerAttacker].item == ITEM_LEPPA_BERRY)
          && (gBattleMons[gBattlerTarget].status2 & (STATUS2_WRAPPED | STATUS2_ESCAPE_PREVENTION))
            )
		&& AICanSwitchAssumingEnoughPokemon())
    {
        s32 cap = AI_THINKING_STRUCT->aiFlags & (AI_SCRIPT_CHECK_VIABILITY) ? 95 : 93;
        s32 i_2;
        bool8 notChangingIsPossible = TRUE;
        bool8 notChangingIsAcceptable = TRUE;
	if (gBattleMons[gBattlerAttacker].hp < gBattleMons[gBattlerAttacker].maxHP / 2 && (Random() & 1))
           cap -= 3;
		for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (AI_THINKING_STRUCT->score[i] > cap && gBattleMons[gBattlerAttacker].moves[i] != MOVE_SLEEP_TALK)
                break;
        }
        for (i_2 = 0; i_2 < MAX_MON_MOVES; i_2++)
            if (AI_THINKING_STRUCT->score[i_2] > cap - 2 && gBattleMons[gBattlerAttacker].moves[i_2] != MOVE_SLEEP_TALK)
                break;

        if (i_2 == MAX_MON_MOVES)
            notChangingIsAcceptable = FALSE;

        gActiveBattler = gBattlerAttacker;
		if (i == MAX_MON_MOVES && GetMostSuitableMonToSwitchInto(notChangingIsPossible, notChangingIsAcceptable) != PARTY_SIZE)
        {
            AI_THINKING_STRUCT->switchMon = TRUE;
            return AI_CHOICE_SWITCH;
        }
    }
	
	   // Consider switching if your mon with truant is bodied by Protect spam.
        // Or is using a double turn semi invulnerable move(such as Fly) and is faster.
        // Or its ability is actually not Truant.
		if (gBattleMons[gBattlerAttacker].ability == ABILITY_TRUANT
            && (GetAbilityBySpecies(gBattleMons[gBattlerAttacker].species, gBattleMons[gBattlerAttacker].abilityNum) != ABILITY_TRUANT
            || IsTruantMonVulnerable(gBattlerAttacker, gBattlerTarget))
            && gDisableStructs[gBattlerAttacker].truantCounter
			&& AICanSwitchAssumingEnoughPokemon())
            if (GetMostSuitableMonToSwitchInto_NotChangingIsUnacceptable() != PARTY_SIZE)
            {
                AI_THINKING_STRUCT->switchMon = TRUE;
                return AI_CHOICE_SWITCH;
            }

    numOfBestMoves = 1;
    currentMoveArray[0] = AI_THINKING_STRUCT->score[0];
    consideredMoveArray[0] = 0;

    for (i = 1; i < MAX_MON_MOVES; i++)
    {
        if (gBattleMons[gBattlerAttacker].moves[i] != MOVE_NONE)
        {
            // In ruby, the order of these if statements is reversed.
            if (currentMoveArray[0] == AI_THINKING_STRUCT->score[i])
            {
                currentMoveArray[numOfBestMoves] = AI_THINKING_STRUCT->score[i];
                consideredMoveArray[numOfBestMoves++] = i;
            }
            if (currentMoveArray[0] < AI_THINKING_STRUCT->score[i])
            {
                numOfBestMoves = 1;
                currentMoveArray[0] = AI_THINKING_STRUCT->score[i];
                consideredMoveArray[0] = i;
            }
        }
    }
    {
        // Escoge cambiar si ha elegido un mov de daño directo de un stat bajado
        u8 chosenMovePos;
		u16 move;
        chosenMovePos = consideredMoveArray[Random() % numOfBestMoves];
        move = gBattleMons[gBattlerAttacker].moves[chosenMovePos];
        if (IsMoveSignificantlyAffectedByStatDrops(move)
			&& currentMoveArray[0] <= 101 // no cambia si el movimiento alcanza los 102 puntos (probable KO)
			&& AICanSwitchAssumingEnoughPokemon())
            if (GetMostSuitableMonToSwitchInto_NotChangingIsUnacceptable() != PARTY_SIZE)
            {
                AI_THINKING_STRUCT->switchMon = TRUE;
                return AI_CHOICE_SWITCH;
            }
		if (IsMoveSignificantlyAffectedByAccuracyDrops(move)
            && currentMoveArray[0] <= 101 // no cambia si el movimiento alcanza los 102 puntos (probable KO con precisión suficiente)
            && AICanSwitchAssumingEnoughPokemon())
            if (GetMostSuitableMonToSwitchInto_NotChangingIsUnacceptable() != PARTY_SIZE)
            {
                AI_THINKING_STRUCT->switchMon = TRUE;
                return AI_CHOICE_SWITCH;
            }
		// Si nuestro Shedinja es vulnerable, a salir por patas
        if (gBattleMons[gBattlerAttacker].species == SPECIES_SHEDINJA
            && OurShedinjaIsVulnerable(gBattlerAttacker, gBattlerTarget, move)
            && AICanSwitchAssumingEnoughPokemon())
            if (GetMostSuitableMonToSwitchInto_NotChangingIsUnacceptable() != PARTY_SIZE)
            {
                AI_THINKING_STRUCT->switchMon = TRUE;
                return AI_CHOICE_SWITCH;
            }
		// Considera cambiar si corre peligro ante el rival y hay opciones mejores por ahí
        if (!(
              // no cambia si tiene Evasión alta y el rival está intoxicado o maldito
              // o si tiene un sustituto o es FEAR,
              // o va a protegerse o usar Endure (y no tiene status que quite PS)
              gBattleMons[gBattlerAttacker].statStages[STAT_EVASION] >= 9 // +3 o más
           && ((gBattleMons[gBattlerTarget].status1 & STATUS1_TOXIC_POISON) || (gBattleMons[gBattlerTarget].status2 & STATUS2_CURSED))
             )
            && !(gBattleMons[gBattlerAttacker].status2 & STATUS2_SUBSTITUTE)
            && !(
                 (gBattleMoves[move].effect == EFFECT_PROTECT
                  || (gBattleMoves[move].effect == EFFECT_ENDURE && !(gBattleMons[gBattlerAttacker].status1 & (STATUS1_PSN_ANY | STATUS1_BURN)))
                 )
                 && gDisableStructs[gBattlerAttacker].protectUses == 0 // si ya lo usó el turno anterior, mejor pensar en cambiar
                 && !(gBattleMons[gBattlerAttacker].status1 & STATUS1_TOXIC_POISON)
                 && !(gBattleMons[gBattlerAttacker].status2 & STATUS2_CURSED)
                 && !(gStatuses3[gBattlerAttacker] & STATUS3_LEECHSEED)
                )
            && !(gBattleMons[gBattlerAttacker].level <= 2) // probable FEAR
            && AICanSwitchAssumingEnoughPokemon())
        {
            bool8 directDamageAttack = gBattleMoves[move].power > 0;
            bool8 ignoreFocusPunch = directDamageAttack && 
                   (gBattleMoves[move].accuracy == 0
                    || (gBattleMoves[move].accuracy >= 80 && ((gBattleMons[gBattlerAttacker].ability == ABILITY_KEEN_EYE 
					|| gBattleMons[gBattlerTarget].statStages[STAT_EVASION] < 9) && gBattleMons[gBattlerAttacker].statStages[STAT_ACC] > 4))
                    || (WEATHER_HAS_EFFECT && (((gBattleWeather & WEATHER_RAIN_ANY) && (gBattleMoves[move].effect == EFFECT_THUNDER || gBattleMoves[move].effect == EFFECT_HURRICANE)) || ((gBattleWeather & WEATHER_HAIL_ANY) && move == MOVE_BLIZZARD)))
                   );
            u8 nhko_taken = CalculateNHKO(gBattlerTarget, gBattlerAttacker, FALSE, MOVE_NONE, FALSE, ignoreFocusPunch);
            bool8 ai_is_faster = gBattleMoves[move].effect == EFFECT_QUICK_ATTACK || gBattleMoves[move].effect == EFFECT_FAKE_OUT || GetWhoStrikesFirst(gBattlerAttacker, gBattlerTarget, TRUE) == 0;
            u8 attacks_until_ko = nhko_taken - (ai_is_faster ? 0 : 1);

            // Si recibe OHKO y es más lento, considera cambiar
            // También cambia si escoge un ataque que hace poco daño o que tiene
            // pocos puntos y va a ser el último o penúltimo que le dé tiempo a ejecutar
            // (si es último, poco daño es peor que 2HKO y pocos puntos es menos de 99;
            // si es penúltimo, poco daño es peor que 4HKO y pocos puntos es menos de 97)
            if (
                ((nhko_taken == 1 && !ai_is_faster)
             || (attacks_until_ko < 2
                 && (
                     (directDamageAttack && gBattleMoves[move].effect != EFFECT_OHKO && gBattleMoves[move].effect != EFFECT_COUNTER && gBattleMoves[move].effect != EFFECT_MIRROR_COAT && CalculateNHKO(gBattlerAttacker, gBattlerTarget, TRUE, move, FALSE, FALSE) > 2*attacks_until_ko)
                      || currentMoveArray[0] <= 100 - 2*attacks_until_ko
                      || move == MOVE_SLEEP_TALK
                    )
               )) && GetMostSuitableMonToSwitchInto_NotChangingIsAcceptable() != PARTY_SIZE)
            {
                AI_THINKING_STRUCT->switchMon = TRUE;
                return AI_CHOICE_SWITCH;
            }
        }
        // El poke lleva muchos turnos intoxicado, mejor cambiar
        #define _AI_CURRENT_TOXIC_TURNS_ ((gBattleMons[gBattlerAttacker].status1 & 0xF00) >> 8)
        if (gBattleMons[gBattlerAttacker].status1 & STATUS1_TOXIC_POISON
            && (
                _AI_CURRENT_TOXIC_TURNS_ >= 4 // lleva al menos 4 turnos de daño y por tanto va a perder más de un 25% (al menos un 31,25%) de sus PS
                || (_AI_CURRENT_TOXIC_TURNS_ == 3 // 3 turnos de daño también es mucho en los siguientes supuestos
                    && (
                           (gBattleMons[gBattlerAttacker].status2 & STATUS2_CURSED) // estar maldito
                        || (gStatuses3[gBattlerAttacker] & STATUS3_LEECHSEED)       // tener Leech Seed
                        || sBattler_AIisLosingHPDueToWeather(FALSE)            // ser dañado por clima y no tener Restos
                        || ((gBattleMons[gBattlerAttacker].item != ITEM_LEFTOVERS || sBattler_AIisLosingHPDueToWeather(TRUE)) && (Random()%2)) // o, en caso de no tener Restos o ser dañado por clima pero sí tener Restos, un 50% de cambiar
                       )
                   )
               )
            && (currentMoveArray[0] <= 101 // y no escoge un movimiento que alcance los 102 puntos (probable KO)
             // Los siguientes movimientos casi nunca tiene sentido usarlos
             // estando intoxicado en un estado avanzado
             || gBattleMoves[move].effect == EFFECT_RESTORE_HP
             || gBattleMoves[move].effect == EFFECT_SOFTBOILED
             || gBattleMoves[move].effect == EFFECT_MOONLIGHT
             || gBattleMoves[move].effect == EFFECT_MORNING_SUN
             || gBattleMoves[move].effect == EFFECT_SYNTHESIS
             || gBattleMoves[move].effect == EFFECT_SHORE_UP
               )
			&& AICanSwitchAssumingEnoughPokemon())
			if (GetMostSuitableMonToSwitchInto_NotChangingIsUnacceptable() != PARTY_SIZE)
            {
                bool8 convenient_move = FALSE; // TRUE si en el mov hace que no sea relevante el estar intoxicado
                switch (gBattleMoves[move].effect) {
                    case EFFECT_REFRESH:
                    case EFFECT_HEAL_BELL:
                    case EFFECT_REST:
                    case EFFECT_EXPLOSION:
                    case EFFECT_DESTINY_BOND:
                    case EFFECT_GRUDGE:
                    case EFFECT_MEMENTO:
                    case EFFECT_BATON_PASS:
                        convenient_move = TRUE;
                }
             if (!convenient_move) {
                AI_THINKING_STRUCT->switchMon = TRUE;
                return AI_CHOICE_SWITCH;
               }
            }

        // La IA puede considerar repetir su último movimiento si observa que el rival está cambiando.
        // Para darse cuenta de ello, se mantiene cierta información en memoria
        if ((!memory.opponentChanged && memory.enoughPointsDifference) || gDisableStructs[gBattlerAttacker].isFirstTurn)
            ((u8*) &memory)[0] = 0;
        else if (gDisableStructs[gBattlerTarget].protectUses > 0)
        {
            u8 lastMoveAux = memory.lastMoveIndex;
            memory.lastMoveIndex = memory.secondLastMoveIndex;
            memory.secondLastMoveIndex = lastMoveAux;
            if (!memory.switchesDetected)
                memory.enoughPointsDifference = 0;
        }
        else if (!gDisableStructs[gBattlerTarget].isFirstTurn)
            ((u8*) &memory)[0] = 0;
        else
        {
            // Es posible que el oponente haya cambiado por Relevo y siendo el
            // segundo en atacar, en cuyo caso no habría que contarlo como cambio
            memory.opponentChanged = 1;
            if (memory.triedToPredictSwitches)
                memory.enoughPointsDifference = 0;
        }

        memory.triedToPredictSwitches = 0;

        if (memory.opponentChanged)
        {
            if (AI_THINKING_STRUCT->score[chosenMovePos]
                  - AI_THINKING_STRUCT->score[memory.lastMoveIndex]
                  >= 6) // el nuevo movimiento supera en al menos 6 puntos el anterior
            {
                bool8 previous_turn_had_switches_detected = memory.switchesDetected;
                memory.switchesDetected = memory.enoughPointsDifference && memory.secondLastMoveIndex == chosenMovePos;
                memory.secondLastMoveIndex = memory.lastMoveIndex;
                memory.lastMoveIndex = chosenMovePos;
                memory.enoughPointsDifference = 1;

                if (memory.switchesDetected && (Random()%2))
                {
                    // La IA ha detectado que el rival está cambiando y va a considerar
                    // repetir ataque si a la IA no le conviene perder el tiempo
                    // y el movimiento anterior puede ser ejecutado
                    u16 previous_move = gBattleMons[gBattlerAttacker].moves[memory.secondLastMoveIndex];
                    bool8 doNotRepeat = FALSE;

                    // Si el rival ya no puede cambiar, no hace falta repetir
                    // Podría descartar el cambio erróneamente en caso de Baton Pass de rival más rápido
                    if (!IS_BATTLER_OF_TYPE(gBattlerTarget, TYPE_GHOST) &&
                        (
                            (gBattleMons[gBattlerAttacker].ability == ABILITY_SHADOW_TAG && !ABILITY_ON_OPPOSING_FIELD(gBattlerAttacker, ABILITY_SHADOW_TAG))
                         || (gBattleMons[gBattlerAttacker].ability == ABILITY_ARENA_TRAP && !IS_BATTLER_OF_TYPE(gBattlerTarget, TYPE_FLYING) && gBattleMons[gBattlerTarget].ability != ABILITY_LEVITATE)
                         || (gBattleMons[gBattlerAttacker].ability == ABILITY_MAGNET_PULL && IS_BATTLER_OF_TYPE(gBattlerTarget, TYPE_STEEL))
                         || (gBattleMons[gBattlerTarget].status2 & (STATUS2_WRAPPED | STATUS2_ESCAPE_PREVENTION))
                        )
                       )
                        doNotRepeat = TRUE;
                    
                    if (!doNotRepeat)
                        switch(gBattleMoves[previous_move].target)
                        {
                            case MOVE_TARGET_DEPENDS:
                            case MOVE_TARGET_USER:
                            case MOVE_TARGET_OPPONENTS_FIELD:
                                doNotRepeat = TRUE;
                        }
                    
                    if (!doNotRepeat)
                        switch(gBattleMoves[previous_move].effect)
                        {
                            case EFFECT_DISABLE:
                            case EFFECT_ENCORE:
                            case EFFECT_SKILL_SWAP:
                            case EFFECT_HEAL_PULSE:
                                doNotRepeat = TRUE;
                        }

                    if (!doNotRepeat && AI_THINKING_STRUCT->score[memory.lastMoveIndex] > 40
                     && (
                         (previous_turn_had_switches_detected && (Random()%5)) // tiene un 10% de jugársela si lleva más de un turno seguido aunque no pase nada de lo siguiente
                      || (gBattleMons[gBattlerAttacker].status1 & (STATUS1_PSN_ANY | STATUS1_BURN))
                      || (gBattleMons[gBattlerAttacker].status2 & STATUS2_CURSED)
                      || (gStatuses3[gBattlerAttacker] & STATUS3_LEECHSEED)
                      || sBattler_AIisLosingHPDueToWeather(FALSE)
                      || gBattleMons[gBattlerAttacker].pp[chosenMovePos] < 8 // la IA empieza a tener pocos PP
                        )
                    )
                    {
                        // La IA va a probar a repetir movimiento
                        chosenMovePos = memory.secondLastMoveIndex;
                        memory.triedToPredictSwitches = 1;
                    }
                }
            }  
            else // esto incluye que lastMoveIndex == chosenMovePos
            {
                memory.lastMoveIndex = chosenMovePos;
                memory.enoughPointsDifference = 0;
                memory.opponentChanged = 0;
                memory.switchesDetected = 0;
            }
        }
        else
        {
            memory.lastMoveIndex = chosenMovePos;
            memory.switchesDetected = 0;
        }

        STORED_AI_MEMORY = memory;
        return chosenMovePos;
    }
}

static u8 ChooseMoveOrAction_Doubles(void)
{
    s32 i;
    s32 j;
    s32 scriptsToRun;
    s16 bestMovePointsForTarget[MAX_BATTLERS_COUNT];
    s8 mostViableTargetsArray[MAX_BATTLERS_COUNT];
    u8 actionOrMoveIndex[MAX_BATTLERS_COUNT];
    u8 mostViableMovesScores[MAX_MON_MOVES];
    u8 mostViableMovesIndices[MAX_MON_MOVES];
    s32 mostViableTargetsNo;
    s32 mostViableMovesNo;
    s16 mostMovePoints;

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        if (i == gBattlerAttacker || gBattleMons[i].hp == 0 || (gAbsentBattlerFlags & gBitTable[i]))
        {
            actionOrMoveIndex[i] = 0xFF;
            bestMovePointsForTarget[i] = -1;
        }
        else
        {
			
           /* if (gBattleTypeFlags & BATTLE_TYPE_PALACE)
                BattleAI_SetupAIData(gBattleStruct->field_92 >> 4); 
            else */  // No existe en firered, ¿esta bien asi?
                BattleAI_SetupAIDataNuevo(0xF);

            gBattlerTarget = i;

            if ((i & BIT_SIDE) != (gBattlerAttacker & BIT_SIDE))
                RecordLastUsedMoveByTarget();

            AI_THINKING_STRUCT->aiLogicId = 0;
            AI_THINKING_STRUCT->movesetIndex = 0;
            scriptsToRun = AI_THINKING_STRUCT->aiFlags;
            while (scriptsToRun != 0)
            {
                if (scriptsToRun & 1)
                {
                    AI_THINKING_STRUCT->aiState = AIState_SettingUp;
                    BattleAI_DoAIProcessing();
                }
                scriptsToRun >>= 1;
                AI_THINKING_STRUCT->aiLogicId++;
                AI_THINKING_STRUCT->movesetIndex = 0;
            }

            if (AI_THINKING_STRUCT->aiAction & AI_ACTION_FLEE)
            {
                actionOrMoveIndex[i] = AI_CHOICE_FLEE;
            }
            else if (AI_THINKING_STRUCT->aiAction & AI_ACTION_WATCH)
            {
                actionOrMoveIndex[i] = AI_CHOICE_WATCH;
            }
            else
            {
#if __DEBUG_AI__
                    int k;
                    if (i != (gBattlerAttacker ^ BIT_FLANK)) for (k = 0; k < 4; k++) {
                        u8 numerico[6+4] = {EXT_CTRL_CODE_BEGIN, EXT_CTRL_CODE_COLOR, TEXT_COLOR_GREEN, EXT_CTRL_CODE_BEGIN, EXT_CTRL_CODE_SHADOW, TEXT_COLOR_LIGHT_GREEN};
                        ConvertIntToDecimalStringN(numerico+6, AI_THINKING_STRUCT->score[k], STR_CONV_MODE_RIGHT_ALIGN, 3);
                        AddTextPrinterParameterized(1, 0, numerico, 48 + 16*k + i/2, 4 + 7*i, 0, NULL);
                    }
#endif
                mostViableMovesScores[0] = AI_THINKING_STRUCT->score[0];
                mostViableMovesIndices[0] = 0;
                mostViableMovesNo = 1;
                for (j = 1; j < MAX_MON_MOVES; j++)
                {
                    if (gBattleMons[gBattlerAttacker].moves[j] != 0)
                    {
                        if (mostViableMovesScores[0] == AI_THINKING_STRUCT->score[j])
                        {
                            mostViableMovesScores[mostViableMovesNo] = AI_THINKING_STRUCT->score[j];
                            mostViableMovesIndices[mostViableMovesNo] = j;
                            mostViableMovesNo++;
                        }
                        if (mostViableMovesScores[0] < AI_THINKING_STRUCT->score[j])
                        {
                            mostViableMovesScores[0] = AI_THINKING_STRUCT->score[j];
                            mostViableMovesIndices[0] = j;
                            mostViableMovesNo = 1;
                        }
                    }
                }
                actionOrMoveIndex[i] = mostViableMovesIndices[Random() % mostViableMovesNo];
                bestMovePointsForTarget[i] = mostViableMovesScores[0];

                // Don't use a move against ally if it has less than 100 points.
                if (i == (gBattlerAttacker ^ BIT_FLANK) && bestMovePointsForTarget[i] < 100)
                {
                    bestMovePointsForTarget[i] = -1;
                    mostViableMovesScores[0] = mostViableMovesScores[0]; // Needed to match.
                }
            }
        }
    }

    mostMovePoints = bestMovePointsForTarget[0];
    mostViableTargetsArray[0] = 0;
    mostViableTargetsNo = 1;

    for (i = 1; i < MAX_BATTLERS_COUNT; i++)
    {
        if (mostMovePoints == bestMovePointsForTarget[i])
        {
            mostViableTargetsArray[mostViableTargetsNo] = i;
            mostViableTargetsNo++;
        }
        if (mostMovePoints < bestMovePointsForTarget[i])
        {
            mostMovePoints = bestMovePointsForTarget[i];
            mostViableTargetsArray[0] = i;
            mostViableTargetsNo = 1;
        }
    }

    gBattlerTarget = mostViableTargetsArray[Random() % mostViableTargetsNo];

    // Consider switching if your mon with truant is bodied by Protect spam.
    // Or is using a double turn semi invulnerable move(such as Fly) and is faster.
    // Or its ability is actually not Truant.
    if (gBattleMons[gBattlerAttacker].ability == ABILITY_TRUANT
        && GET_BATTLER_SIDE(gBattlerAttacker) != GET_BATTLER_SIDE(gBattlerTarget)
        && actionOrMoveIndex[gBattlerTarget] != AI_CHOICE_FLEE
        && actionOrMoveIndex[gBattlerTarget] != AI_CHOICE_WATCH
        && (GetAbilityBySpecies(gBattleMons[gBattlerAttacker].species, gBattleMons[gBattlerAttacker].abilityNum) != ABILITY_TRUANT
              || (IsTruantMonVulnerable(gBattlerAttacker, gBattlerTarget)
                  && (gBattleMons[gBattlerTarget ^ BIT_FLANK].hp == 0 || IsTruantMonVulnerable(gBattlerAttacker, gBattlerTarget ^ BIT_FLANK))))
        && gDisableStructs[gBattlerAttacker].truantCounter
        && AICanSwitchAssumingEnoughPokemon())
        if (GetMostSuitableMonToSwitchInto_NotChangingIsUnacceptable() != PARTY_SIZE)
        {
            AI_THINKING_STRUCT->switchMon = TRUE;
            return AI_CHOICE_SWITCH;
        }
    return actionOrMoveIndex[gBattlerTarget];
}

static void BattleAI_DoAIProcessing(void)
{
    while (AI_THINKING_STRUCT->aiState != AIState_FinishedProcessing)
    {
        switch (AI_THINKING_STRUCT->aiState)
        {
        case AIState_DoNotProcess: // Needed to match.
            break;
        case AIState_SettingUp:
            sAIScriptPtr = gBattleAI_ScriptsTable[AI_THINKING_STRUCT->aiLogicId];

            if (gBattleMons[gBattlerAttacker].pp[AI_THINKING_STRUCT->movesetIndex] == 0)
            {
                AI_THINKING_STRUCT->moveConsidered = 0; // Don't consider moves with no PP
            }
            else
            {
                AI_THINKING_STRUCT->moveConsidered = gBattleMons[gBattlerAttacker].moves[AI_THINKING_STRUCT->movesetIndex];
            }
            AI_THINKING_STRUCT->aiState++;
            break;
        case AIState_Processing:
            if (AI_THINKING_STRUCT->moveConsidered != 0)
            {
                sBattleAICmdTable[*sAIScriptPtr](); // Run AI command.
            }
            else
            {
                AI_THINKING_STRUCT->score[AI_THINKING_STRUCT->movesetIndex] = 0;
                AI_THINKING_STRUCT->aiAction |= AI_ACTION_DONE;
            }
            if (AI_THINKING_STRUCT->aiAction & AI_ACTION_DONE)
            {
                AI_THINKING_STRUCT->movesetIndex++;

                if (AI_THINKING_STRUCT->movesetIndex < MAX_MON_MOVES && (AI_THINKING_STRUCT->aiAction & AI_ACTION_DO_NOT_ATTACK) == 0)
                    AI_THINKING_STRUCT->aiState = AIState_SettingUp; // as long as their are more moves to process, keep setting this to setup state.
                else
                    AI_THINKING_STRUCT->aiState++; // done processing.
                AI_THINKING_STRUCT->aiAction &= (AI_ACTION_FLEE | AI_ACTION_WATCH | AI_ACTION_DO_NOT_ATTACK |
                AI_ACTION_UNK5 | AI_ACTION_UNK6 | AI_ACTION_UNK7 | AI_ACTION_UNK8); // disable AI_ACTION_DONE.
            }
            break;
        }
    }
}

void RecordLastUsedMoveByTarget(void)
{
    s32 i;

    if (gLastMoves[gBattlerTarget] == 0xFFFF || gLastMoves[gBattlerTarget] == MOVE_NONE)
        return;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (FOES_MOVE_HISTORY(gBattlerTarget)[i] == gLastMoves[gBattlerTarget])
            break;
        if (FOES_MOVE_HISTORY(gBattlerTarget)[i] != gLastMoves[gBattlerTarget]  // HACK: This redundant condition is a hack to make the asm match.
         && FOES_MOVE_HISTORY(gBattlerTarget)[i] == MOVE_NONE)
        {
            FOES_MOVE_HISTORY(gBattlerTarget)[i] = gLastMoves[gBattlerTarget];
            break;
        }
    }
}

void ClearBattlerMoveHistory(u8 battlerId)
{
    s32 i;

    for (i = 0; i < MAX_MON_MOVES; i++)
        FOES_MOVE_HISTORY(battlerId)[i] = MOVE_NONE;
}

void RecordAbilityBattle(u8 battlerId, u8 abilityId)
{
    FOES_OBSERVED_ABILITY(battlerId) = abilityId;
}

void ClearBattlerAbilityHistory(u8 battlerId)
{
    FOES_OBSERVED_ABILITY(battlerId) = ABILITY_NONE;
}

void CopyBattlerHistoryForTransformedMon(u8 transformUser, u8 transformTarget)
{
    s32 i;
    // Si se transforma en un compañero, el rival solo tiene acceso a los movimientos que ha visto,
    // mientras que si lo hace en un oponente, el rival sabe sus movimientos
    if (GetBattlerSide(transformTarget) == GetBattlerSide(transformUser)) {
        FOES_OBSERVED_ABILITY(transformUser) = FOES_OBSERVED_ABILITY(transformTarget);
        
        for (i = 0; i < MAX_MON_MOVES; i++)
            FOES_MOVE_HISTORY(transformUser)[i] = FOES_MOVE_HISTORY(transformTarget)[i];
    }
    else {
        FOES_OBSERVED_ABILITY(transformUser) = gBattleMons[transformTarget].ability;
        
        for (i = 0; i < MAX_MON_MOVES; i++)
            FOES_MOVE_HISTORY(transformUser)[i] = gBattleMons[transformTarget].moves[i];
    }
}

void LearnBattlerHistoryFromTransformedMon(u8 transformUser, u8 transformTarget)
{
    s32 i;

    // No aporta ninguna información si el poke se transforma en un compañero
    if (GetBattlerSide(transformUser) == GetBattlerSide(transformTarget))
        return;

    FOES_OBSERVED_ABILITY(transformTarget) = gBattleMons[transformTarget].ability;
        
    for (i = 0; i < MAX_MON_MOVES; i++)
     {
        FOES_MOVE_HISTORY(transformTarget)[i] = gBattleMons[transformTarget].moves[i];
        // Chapuza para que la IA sepa que conoce todos los movimientos:
        // se repite el primer movimiento en los huecos si el rival no tiene 4 movimientos
        if (gBattleMons[transformTarget].moves[i] == MOVE_NONE)
            FOES_MOVE_HISTORY(transformTarget)[i] = gBattleMons[transformTarget].moves[0];
    }
}

void RecordItemEffectBattle(u8 battlerId, u8 itemEffect)
{
    FOES_OBSERVED_ITEM_EFFECT(battlerId) = itemEffect;
}

void ClearBattlerItemEffectHistory(u8 battlerId)
{
    FOES_OBSERVED_ITEM_EFFECT(battlerId) = 0;
}

// La IA toma nota de que, a lo largo del turno, hubo algún cambio obligado
// (por KO o por Roar/Whirlwind) en alguno de los equipos
// También se usa en caso de transformación
void AI_MarkForcedChange(void)
{
    s32 i;

    if (!(gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
        for (i = 0; i < 2; i++)
        {
            BATTLE_HISTORY->switchMemory[i].opponentChanged = 0;
            BATTLE_HISTORY->switchMemory[i].enoughPointsDifference = 1;
        }
}

static void Cmd_if_random_less_than(void)
{
    if (Random() % 256 < sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_random_greater_than(void)
{
    if (Random() % 256 > sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_random_equal(void)
{
    if (Random() % 256 == sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_random_not_equal(void)
{
    if (Random() % 256 != sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_score(void)
{
    AI_THINKING_STRUCT->score[AI_THINKING_STRUCT->movesetIndex] += sAIScriptPtr[1]; // add the result to the array of the move consider's score.

    if (AI_THINKING_STRUCT->score[AI_THINKING_STRUCT->movesetIndex] < 0) // if the score is negative, flatten it to 0.
        AI_THINKING_STRUCT->score[AI_THINKING_STRUCT->movesetIndex] = 0;

    sAIScriptPtr += 2; // AI return.
}

static void Cmd_if_hp_less_than(void)
{
    u16 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    if ((u32)(100 * gBattleMons[battlerId].hp / gBattleMons[battlerId].maxHP) < sAIScriptPtr[2])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
    else
        sAIScriptPtr += 7;
}

static void Cmd_if_hp_more_than(void)
{
    u16 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    if ((u32)(100 * gBattleMons[battlerId].hp / gBattleMons[battlerId].maxHP) > sAIScriptPtr[2])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
    else
        sAIScriptPtr += 7;
}

static void Cmd_if_hp_equal(void)
{
    u16 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    if ((u32)(100 * gBattleMons[battlerId].hp / gBattleMons[battlerId].maxHP) == sAIScriptPtr[2])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
    else
        sAIScriptPtr += 7;
}

static void Cmd_if_hp_not_equal(void)
{
    u16 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    if ((u32)(100 * gBattleMons[battlerId].hp / gBattleMons[battlerId].maxHP) != sAIScriptPtr[2])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
    else
        sAIScriptPtr += 7;
}

static void Cmd_if_status(void)
{
    u16 battlerId;
    u32 status;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    status = T1_READ_32(sAIScriptPtr + 2);

    if (gBattleMons[battlerId].status1 & status)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 6);
    else
        sAIScriptPtr += 10;
}

static void Cmd_if_not_status(void)
{
    u16 battlerId;
    u32 status;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    status = T1_READ_32(sAIScriptPtr + 2);

    if (!(gBattleMons[battlerId].status1 & status))
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 6);
    else
        sAIScriptPtr += 10;
}

static void Cmd_if_status2(void)
{
    u16 battlerId;
    u32 status;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    status = T1_READ_32(sAIScriptPtr + 2);

    if ((gBattleMons[battlerId].status2 & status))
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 6);
    else
        sAIScriptPtr += 10;
}

static void Cmd_if_not_status2(void)
{
    u16 battlerId;
    u32 status;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    status = T1_READ_32(sAIScriptPtr + 2);

    if (!(gBattleMons[battlerId].status2 & status))
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 6);
    else
        sAIScriptPtr += 10;
}

static void Cmd_if_status3(void)
{
    u16 battlerId;
    u32 status;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    status = T1_READ_32(sAIScriptPtr + 2);

    if (gStatuses3[battlerId] & status)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 6);
    else
        sAIScriptPtr += 10;
}

static void Cmd_if_not_status3(void)
{
    u16 battlerId;
    u32 status;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    status = T1_READ_32(sAIScriptPtr + 2);

    if (!(gStatuses3[battlerId] & status))
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 6);
    else
        sAIScriptPtr += 10;
}

static void Cmd_if_side_affecting(void)
{
    u16 battlerId;
    u32 side, status;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    side = GET_BATTLER_SIDE(battlerId);
    status = T1_READ_32(sAIScriptPtr + 2);

    if (gSideStatuses[side] & status)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 6);
    else
        sAIScriptPtr += 10;
}

static void Cmd_if_not_side_affecting(void)
{
    u16 battlerId;
    u32 side, status;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    side = GET_BATTLER_SIDE(battlerId);
    status = T1_READ_32(sAIScriptPtr + 2);

    if (!(gSideStatuses[side] & status))
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 6);
    else
        sAIScriptPtr += 10;
}

static void Cmd_if_less_than(void)
{
    if (AI_THINKING_STRUCT->funcResult < sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_more_than(void)
{
    if (AI_THINKING_STRUCT->funcResult > sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_equal(void)
{
    if (AI_THINKING_STRUCT->funcResult == sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_not_equal(void)
{
    if (AI_THINKING_STRUCT->funcResult != sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_less_than_ptr(void)
{
    const u8 *value = T1_READ_PTR(sAIScriptPtr + 1);

    if (AI_THINKING_STRUCT->funcResult < *value)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 5);
    else
        sAIScriptPtr += 9;
}

static void Cmd_if_more_than_ptr(void)
{
    const u8 *value = T1_READ_PTR(sAIScriptPtr + 1);

    if (AI_THINKING_STRUCT->funcResult > *value)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 5);
    else
        sAIScriptPtr += 9;
}

static void Cmd_if_equal_ptr(void)
{
    const u8 *value = T1_READ_PTR(sAIScriptPtr + 1);

    if (AI_THINKING_STRUCT->funcResult == *value)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 5);
    else
        sAIScriptPtr += 9;
}

static void Cmd_if_not_equal_ptr(void)
{
    const u8 *value = T1_READ_PTR(sAIScriptPtr + 1);

    if (AI_THINKING_STRUCT->funcResult != *value)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 5);
    else
        sAIScriptPtr += 9;
}

static void Cmd_if_move(void)
{
    u16 move = T1_READ_16(sAIScriptPtr + 1);

    if (AI_THINKING_STRUCT->moveConsidered == move)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
    else
        sAIScriptPtr += 7;
}

static void Cmd_if_not_move(void)
{
    u16 move = T1_READ_16(sAIScriptPtr + 1);

    if (AI_THINKING_STRUCT->moveConsidered != move)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
    else
        sAIScriptPtr += 7;
}

static void Cmd_if_in_bytes(void)
{
    const u8 *ptr = T1_READ_PTR(sAIScriptPtr + 1);

    while (*ptr != 0xFF)
    {
        if (AI_THINKING_STRUCT->funcResult == *ptr)
        {
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 5);
            return;
        }
        ptr++;
    }
    sAIScriptPtr += 9;
}

static void Cmd_if_not_in_bytes(void)
{
    const u8 *ptr = T1_READ_PTR(sAIScriptPtr + 1);

    while (*ptr != 0xFF)
    {
        if (AI_THINKING_STRUCT->funcResult == *ptr)
        {
            sAIScriptPtr += 9;
            return;
        }
        ptr++;
    }
    sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 5);
}

static void Cmd_if_in_hwords(void)
{
    const u16 *ptr = (const u16 *)T1_READ_PTR(sAIScriptPtr + 1);

    while (*ptr != 0xFFFF)
    {
        if (AI_THINKING_STRUCT->funcResult == *ptr)
        {
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 5);
            return;
        }
        ptr++;
    }
    sAIScriptPtr += 9;
}

static void Cmd_if_not_in_hwords(void)
{
    const u16 *ptr = (const u16 *)T1_READ_PTR(sAIScriptPtr + 1);

    while (*ptr != 0xFFFF)
    {
        if (AI_THINKING_STRUCT->funcResult == *ptr)
        {
            sAIScriptPtr += 9;
            return;
        }
        ptr++;
    }
    sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 5);
}

static void Cmd_if_user_has_attacking_move(void)
{
    s32 i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (gBattleMons[gBattlerAttacker].moves[i] != 0
            && gBattleMoves[gBattleMons[gBattlerAttacker].moves[i]].power != 0)
            break;
    }

    if (i == MAX_MON_MOVES)
        sAIScriptPtr += 5;
    else
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
}

static void Cmd_if_user_has_no_attacking_moves(void)
{
    s32 i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (gBattleMons[gBattlerAttacker].moves[i] != 0
         && gBattleMoves[gBattleMons[gBattlerAttacker].moves[i]].power != 0)
            break;
    }

    if (i != MAX_MON_MOVES)
        sAIScriptPtr += 5;
    else
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
}

static void Cmd_get_turn_count(void)
{
    AI_THINKING_STRUCT->funcResult = gBattleResults.battleTurnCounter;
    sAIScriptPtr += 1;
}

static void Cmd_get_type(void)
{
    switch (sAIScriptPtr[1])
    {
    case AI_TYPE1_USER:
        AI_THINKING_STRUCT->funcResult = gBattleMons[gBattlerAttacker].type1;
        break;
    case AI_TYPE1_TARGET:
        AI_THINKING_STRUCT->funcResult = gBattleMons[gBattlerTarget].type1;
        break;
    case AI_TYPE2_USER:
        AI_THINKING_STRUCT->funcResult = gBattleMons[gBattlerAttacker].type2;
        break;
    case AI_TYPE2_TARGET:
        AI_THINKING_STRUCT->funcResult = gBattleMons[gBattlerTarget].type2;
        break;
    case AI_TYPE_MOVE:
        AI_THINKING_STRUCT->funcResult = gBattleMoves[AI_THINKING_STRUCT->moveConsidered].type;
        break;
    }
    sAIScriptPtr += 2;
}

static void Cmd_get_considered_move_power(void)
{
    AI_THINKING_STRUCT->funcResult = gBattleMoves[AI_THINKING_STRUCT->moveConsidered].power;
    sAIScriptPtr += 1;
}

static void Cmd_get_how_powerful_move_is(void)
{
    s32 i, checkedMove;
    s32 moveDmgs[MAX_MON_MOVES];
	bool8 isDiscouraged = FALSE;
    u16 effect = gBattleMoves[AI_THINKING_STRUCT->moveConsidered].effect;

    if (effect == EFFECT_SOLARBEAM && (gBattleWeather & WEATHER_SUN_ANY))
        effect = EFFECT_HIT;   // Si hay sol, Rayo Solar se comporta como un movimiento estándar

    for (i = 0; sDiscouragedPowerfulMoveEffects[i] != 0xFFFF; i++)
    {
		if (effect == sDiscouragedPowerfulMoveEffects[i])
		{
            isDiscouraged = TRUE;
            break;
		}
    }

    if (AI_CAN_ESTIMATE_DAMAGE(AI_THINKING_STRUCT->moveConsidered))
    {
        gDynamicBasePower = 0;
        gBattleStruct->dynamicMoveType = 0;
        gBattleScripting.dmgMultiplier = 1;
        gMoveResultFlags = 0;
        gCritMultiplier = 1;

        for (checkedMove = 0; checkedMove < MAX_MON_MOVES; checkedMove++)
        {
			     effect = gBattleMoves[gBattleMons[gBattlerAttacker].moves[checkedMove]].effect;
            if (effect == EFFECT_SOLARBEAM && (gBattleWeather & WEATHER_SUN_ANY))
                effect = EFFECT_HIT;   // Si hay sol, Rayo Solar se comporta como un movimiento estándar

            for (i = 0; sDiscouragedPowerfulMoveEffects[i] != 0xFFFF; i++)
            {
                if (effect == sDiscouragedPowerfulMoveEffects[i])
                    break;
            }

            if (gBattleMons[gBattlerAttacker].moves[checkedMove] != MOVE_NONE
                && (sDiscouragedPowerfulMoveEffects[i] == 0xFFFF || checkedMove == AI_THINKING_STRUCT->movesetIndex)
                && AI_CAN_ESTIMATE_DAMAGE(gBattleMons[gBattlerAttacker].moves[checkedMove]))
            {
                gCurrentMove = gBattleMons[gBattlerAttacker].moves[checkedMove];
                AI_CalcDmg(gBattlerAttacker, gBattlerTarget);
                moveDmgs[checkedMove] = gBattleMoveDamage * AI_THINKING_STRUCT->simulatedRNG[checkedMove] / 100;
                if (moveDmgs[checkedMove] == 0)
                    moveDmgs[checkedMove] = 1;
            }
            else
            {
                moveDmgs[checkedMove] = 0;
            }
        }

        for (checkedMove = 0; checkedMove < MAX_MON_MOVES; checkedMove++)
        {
            if (moveDmgs[checkedMove] > moveDmgs[AI_THINKING_STRUCT->movesetIndex])
                break;
        }

        if (checkedMove == MAX_MON_MOVES)
            AI_THINKING_STRUCT->funcResult = isDiscouraged ? MOVE_POWER_DISCOURAGED : MOVE_MOST_POWERFUL; // Is the most powerful.
        else
			AI_THINKING_STRUCT->funcResult = isDiscouraged ? MOVE_POWER_DISCOURAGED_AND_NOT_MOST_POWERFUL : MOVE_NOT_MOST_POWERFUL; // Not the most powerful.
    }
    else
    {
        AI_THINKING_STRUCT->funcResult = 0; // Highly discouraged in terms of power.
    }

    sAIScriptPtr++;
}

static void Cmd_get_last_used_battler_move(void)
{
    if (sAIScriptPtr[1] == AI_USER)
        AI_THINKING_STRUCT->funcResult = gLastMoves[gBattlerAttacker];
    else
        AI_THINKING_STRUCT->funcResult = gLastMoves[gBattlerTarget];
	
   if (AI_THINKING_STRUCT->funcResult == 0xFFFF) // se quedó sin atacar por confusión, entre otras cosas
        AI_THINKING_STRUCT->funcResult = MOVE_NONE;

    sAIScriptPtr += 2;
}

static void Cmd_if_equal_(void) // Same as if_equal.
{
    if (sAIScriptPtr[1] == AI_THINKING_STRUCT->funcResult)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_not_equal_(void) // Same as if_not_equal.
{
    if (sAIScriptPtr[1] != AI_THINKING_STRUCT->funcResult)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_would_go_first(void)
{
    if (GetWhoStrikesFirst(gBattlerAttacker, gBattlerTarget, TRUE) == sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_would_not_go_first(void)
{
    if (GetWhoStrikesFirst(gBattlerAttacker, gBattlerTarget, TRUE) != sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_nullsub_2A(void)
{
}

static void Cmd_nullsub_2B(void)
{
}

static void Cmd_count_alive_pokemon(void)
{
    u8 battlerId;
    u8 battlerOnField1, battlerOnField2;
    struct Pokemon *party;
    s32 i;

    AI_THINKING_STRUCT->funcResult = 0;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        u32 position;
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        position = GetBattlerPosition(battlerId) ^ BIT_FLANK;
        battlerOnField2 = gBattlerPartyIndexes[GetBattlerAtPosition(position)];
    }
    else // In singles there's only one battlerId by side.
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[battlerId];
    }

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (i != battlerOnField1 && i != battlerOnField2
         && GetMonData(&party[i], MON_DATA_HP) != 0
         && GetMonData(&party[i], MON_DATA_SPECIES2) != SPECIES_NONE
         && GetMonData(&party[i], MON_DATA_SPECIES2) != SPECIES_EGG)
        {
            AI_THINKING_STRUCT->funcResult++;
        }
    }

    sAIScriptPtr += 2;
}

static void Cmd_get_considered_move(void)
{
    AI_THINKING_STRUCT->funcResult = AI_THINKING_STRUCT->moveConsidered;
    sAIScriptPtr += 1;
}

static void Cmd_get_considered_move_effect(void)
{
    AI_THINKING_STRUCT->funcResult = gBattleMoves[AI_THINKING_STRUCT->moveConsidered].effect;
    sAIScriptPtr += 1;
}

static void Cmd_get_ability(void)
{
    u8 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

	if ((gActiveBattler | BIT_FLANK) != (battlerId | BIT_FLANK))
    {
        if (FOES_OBSERVED_ABILITY(battlerId) != 0)
        {
            AI_THINKING_STRUCT->funcResult = FOES_OBSERVED_ABILITY(battlerId);
            sAIScriptPtr += 2;
            return;
        }

        // abilities that prevent fleeing.
        if (gBattleMons[battlerId].ability == ABILITY_SHADOW_TAG
        || gBattleMons[battlerId].ability == ABILITY_MAGNET_PULL
        || gBattleMons[battlerId].ability == ABILITY_ARENA_TRAP)
        {
            AI_THINKING_STRUCT->funcResult = gBattleMons[battlerId].ability;
            sAIScriptPtr += 2;
            return;
        }

        if (gBaseStats[gBattleMons[battlerId].species].abilities[0] != ABILITY_NONE)
        {
            if (gBaseStats[gBattleMons[battlerId].species].abilities[1] != ABILITY_NONE)
            {
                // AI has no knowledge of opponent, so it guesses which ability.
                if (Random() & 1)
                    AI_THINKING_STRUCT->funcResult = gBaseStats[gBattleMons[battlerId].species].abilities[0];
                else
                    AI_THINKING_STRUCT->funcResult = gBaseStats[gBattleMons[battlerId].species].abilities[1];
            }
            else
            {
                AI_THINKING_STRUCT->funcResult = gBaseStats[gBattleMons[battlerId].species].abilities[0]; // It's definitely ability 1.
            }
        }
        else
        {
            AI_THINKING_STRUCT->funcResult = gBaseStats[gBattleMons[battlerId].species].abilities[1]; // AI can't actually reach this part since no pokemon has ability 2 and no ability 1.
        }
    }
    else
    {
        // The AI knows its own ability.
        AI_THINKING_STRUCT->funcResult = gBattleMons[battlerId].ability;
    }

    sAIScriptPtr += 2;
}

static void Cmd_get_highest_type_effectiveness(void)
{
    s32 i;
    u8 *dynamicMoveType;

    gDynamicBasePower = 0;
    dynamicMoveType = &gBattleStruct->dynamicMoveType;
    *dynamicMoveType = 0;
    gBattleScripting.dmgMultiplier = 1;
    gMoveResultFlags = 0;
    gCritMultiplier = 1;
    AI_THINKING_STRUCT->funcResult = 0;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        gBattleMoveDamage = 40;
        gCurrentMove = gBattleMons[gBattlerAttacker].moves[i];

        if (gCurrentMove != MOVE_NONE)
        {
            TypeCalc(gCurrentMove, gBattlerAttacker, gBattlerTarget);

            if (gBattleMoveDamage == 120) // Super effective STAB.
                gBattleMoveDamage = AI_EFFECTIVENESS_x2;
            if (gBattleMoveDamage == 240)
                gBattleMoveDamage = AI_EFFECTIVENESS_x4;
			if (gBattleMoveDamage == 320) // x4 y Adaptable
				gBattleMoveDamage = AI_EFFECTIVENESS_x4;
            if (gBattleMoveDamage == 30) // Not very effective STAB.
                gBattleMoveDamage = AI_EFFECTIVENESS_x0_5;
            if (gBattleMoveDamage == 15)
                gBattleMoveDamage = AI_EFFECTIVENESS_x0_25;

            if (gMoveResultFlags & MOVE_RESULT_DOESNT_AFFECT_FOE)
                gBattleMoveDamage = AI_EFFECTIVENESS_x0;

            if (AI_THINKING_STRUCT->funcResult < gBattleMoveDamage)
                AI_THINKING_STRUCT->funcResult = gBattleMoveDamage;
        }
    }

    sAIScriptPtr += 1;
}

static void Cmd_if_type_effectiveness(void)
{
    u8 damageVar;
	u8 flags;

    gDynamicBasePower = 0;
    gBattleStruct->dynamicMoveType = 0;
    gBattleScripting.dmgMultiplier = 1;
    gCritMultiplier = 1;

    gBattleMoveDamage = AI_EFFECTIVENESS_x1;
    gCurrentMove = AI_THINKING_STRUCT->moveConsidered;

    flags = TypeCalc(gCurrentMove, gBattlerAttacker, gBattlerTarget);

    if (gBattleMoveDamage == 120) // Super effective STAB.
        gBattleMoveDamage = AI_EFFECTIVENESS_x2;
    if (gBattleMoveDamage == 240)
        gBattleMoveDamage = AI_EFFECTIVENESS_x4;
	if (gBattleMoveDamage == 320) // x4 y Adaptable
        gBattleMoveDamage = AI_EFFECTIVENESS_x4;
    if (gBattleMoveDamage == 30) // Not very effective STAB.
        gBattleMoveDamage = AI_EFFECTIVENESS_x0_5;
    if (gBattleMoveDamage == 15)
        gBattleMoveDamage = AI_EFFECTIVENESS_x0_25;

    if (flags & MOVE_RESULT_DOESNT_AFFECT_FOE)
        gBattleMoveDamage = AI_EFFECTIVENESS_x0;

    // Store gBattleMoveDamage in a u8 variable because sAIScriptPtr[1] is a u8.
    damageVar = gBattleMoveDamage;

    if (damageVar == sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_nullsub_32(void)
{
}

static void Cmd_nullsub_33(void)
{
}

// Comprueba si hay pokémon en el equipo del pokémon indicado
// con el status indicado, excluyendo al propio pokémon indicado
static void Cmd_if_status_in_party(void)
{
    struct Pokemon *party;
    s32 i;
    u32 statusToCompareTo;
    u8 battlerId;
	u8 battlerOnField;

    switch (sAIScriptPtr[1])
    {
    case AI_USER:
        battlerId = gBattlerAttacker;
        break;
    default:
        battlerId = gBattlerTarget;
        break;
    }

    party = (GetBattlerSide(battlerId) == B_SIDE_PLAYER) ? gPlayerParty : gEnemyParty;
	battlerOnField = gBattlerPartyIndexes[battlerId];

    statusToCompareTo = T1_READ_32(sAIScriptPtr + 2);

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&party[i], MON_DATA_SPECIES);
        u16 hp = GetMonData(&party[i], MON_DATA_HP);
        u32 status = GetMonData(&party[i], MON_DATA_STATUS);

		if (i != battlerOnField && species != SPECIES_NONE && species != SPECIES_EGG && hp != 0 && (status & statusToCompareTo))
        {
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 6);
            return;
        }
    }

    sAIScriptPtr += 10;
}

static void Cmd_if_status_not_in_party(void)
{
    struct Pokemon *party;
    s32 i;
    u32 statusToCompareTo;
    u8 battlerId;
	u8 battlerOnField;

    switch(sAIScriptPtr[1])
    {
    case 1:
        battlerId = gBattlerAttacker;
        break;
    default:
        battlerId = gBattlerTarget;
        break;
    }

    party = (GetBattlerSide(battlerId) == B_SIDE_PLAYER) ? gPlayerParty : gEnemyParty;
	battlerOnField = gBattlerPartyIndexes[battlerId];

    statusToCompareTo = T1_READ_32(sAIScriptPtr + 2);

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&party[i], MON_DATA_SPECIES);
        u16 hp = GetMonData(&party[i], MON_DATA_HP);
        u32 status = GetMonData(&party[i], MON_DATA_STATUS);

		if (i != battlerOnField && species != SPECIES_NONE && species != SPECIES_EGG && hp != 0 && (status & statusToCompareTo))
        {
            sAIScriptPtr += 10;
            return;
        }
    }

    sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 6);
}

static void Cmd_get_weather(void)
{
	AI_THINKING_STRUCT->funcResult = AI_WEATHER_NONE;

    if (gBattleWeather & WEATHER_RAIN_ANY)
        AI_THINKING_STRUCT->funcResult = AI_WEATHER_RAIN;
    if (gBattleWeather & WEATHER_SANDSTORM_ANY)
        AI_THINKING_STRUCT->funcResult = AI_WEATHER_SANDSTORM;
    if (gBattleWeather & WEATHER_SUN_ANY)
        AI_THINKING_STRUCT->funcResult = AI_WEATHER_SUN;
    if (gBattleWeather & WEATHER_HAIL_ANY)
        AI_THINKING_STRUCT->funcResult = AI_WEATHER_HAIL;
    sAIScriptPtr += 1;
}

static void Cmd_if_effect(void)
{
    if (gBattleMoves[AI_THINKING_STRUCT->moveConsidered].effect == sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_not_effect(void)
{
    if (gBattleMoves[AI_THINKING_STRUCT->moveConsidered].effect != sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_stat_level_less_than(void)
{
    u32 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    if (gBattleMons[battlerId].statStages[sAIScriptPtr[2]] < sAIScriptPtr[3])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 4);
    else
        sAIScriptPtr += 8;
}

static void Cmd_if_stat_level_more_than(void)
{
    u32 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    if (gBattleMons[battlerId].statStages[sAIScriptPtr[2]] > sAIScriptPtr[3])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 4);
    else
        sAIScriptPtr += 8;
}

static void Cmd_if_stat_level_equal(void)
{
    u32 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    if (gBattleMons[battlerId].statStages[sAIScriptPtr[2]] == sAIScriptPtr[3])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 4);
    else
        sAIScriptPtr += 8;
}

static void Cmd_if_stat_level_not_equal(void)
{
    u32 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    if (gBattleMons[battlerId].statStages[sAIScriptPtr[2]] != sAIScriptPtr[3])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 4);
    else
        sAIScriptPtr += 8;
}

static void Cmd_if_can_faint(void)
{
    u16 target_damage = gBattleMons[gBattlerTarget].hp;
    if ((gBattleMons[gBattlerTarget].status2 & STATUS2_SUBSTITUTE) && gDisableStructs[gBattlerTarget].substituteHP)
        target_damage = gDisableStructs[gBattlerTarget].substituteHP;

    if (!AI_CAN_ESTIMATE_DAMAGE(AI_THINKING_STRUCT->moveConsidered))
    {
        sAIScriptPtr += 5;
        return;
    }

    gCurrentMove = AI_THINKING_STRUCT->moveConsidered;
    CalculategBattleMoveDamageFromgCurrentMove(gBattlerAttacker, gBattlerTarget, AI_THINKING_STRUCT->simulatedRNG[AI_THINKING_STRUCT->movesetIndex]);

    if (target_damage <= gBattleMoveDamage)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
    else
        sAIScriptPtr += 5;
}

static void Cmd_if_cant_faint(void)
{
    if (!AI_CAN_ESTIMATE_DAMAGE(AI_THINKING_STRUCT->moveConsidered))
    {
        sAIScriptPtr += 5;
        return;
    }

    gCurrentMove = AI_THINKING_STRUCT->moveConsidered;
    CalculategBattleMoveDamageFromgCurrentMove(gBattlerAttacker, gBattlerTarget, AI_THINKING_STRUCT->simulatedRNG[AI_THINKING_STRUCT->movesetIndex]);

    if (gBattleMons[gBattlerTarget].hp > gBattleMoveDamage)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
    else
        sAIScriptPtr += 5;
}

static void Cmd_if_has_move(void)
{
    s32 i;
    const u16 *movePtr = (u16 *)(sAIScriptPtr + 2);
	u8 moveLimitations;

    switch (sAIScriptPtr[1])
    {
    case AI_USER:
        moveLimitations = CheckMoveLimitations(gBattlerAttacker, 0, MOVE_LIMITATION_PP);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (gBattleMons[gBattlerAttacker].moves[i] == *movePtr && !(gBitTable[i] & moveLimitations))
                break;
        }
        if (i == MAX_MON_MOVES)
            sAIScriptPtr += 8;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 4);
        break;
    case AI_USER_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerAttacker ^ BIT_FLANK, 0, MOVE_LIMITATION_PP);
        if (gBattleMons[gBattlerAttacker ^ BIT_FLANK].hp == 0)
        {
            sAIScriptPtr += 8;
            break;
        }
        else
        {
            for (i = 0; i < MAX_MON_MOVES; i++)
            {
                if (gBattleMons[gBattlerAttacker ^ BIT_FLANK].moves[i] == *movePtr && !(gBitTable[i] & moveLimitations))
                    break;
            }
        }
        if (i == MAX_MON_MOVES)
            sAIScriptPtr += 8;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 4);
        break;
    case AI_TARGET:
    case AI_TARGET_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerTarget, 0, MOVE_LIMITATION_PP);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (FOES_MOVE_HISTORY(gBattlerTarget)[i] == *movePtr)
            {
                s32 j;
                for (j = 0; j < MAX_MON_MOVES; j++)
                    if (FOES_MOVE_HISTORY(gBattlerTarget)[i] == gBattleMons[gBattlerTarget].moves[j] && !(gBitTable[j] & moveLimitations))
                        break;
                if (j != MAX_MON_MOVES)
                    break;
            }
        }
        if (i == MAX_MON_MOVES)
            sAIScriptPtr += 8;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 4);
        break;
    }
}

static void Cmd_if_doesnt_have_move(void)
{
    s32 i;
    const u16 *movePtr = (u16 *)(sAIScriptPtr + 2);
    u8 moveLimitations;

    switch(sAIScriptPtr[1])
    {
    case AI_USER:
    case AI_USER_PARTNER: // UB: no separate check for user partner.
        moveLimitations = CheckMoveLimitations(gBattlerAttacker, 0, MOVE_LIMITATION_PP);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (gBattleMons[gBattlerAttacker].moves[i] == *movePtr && !(gBitTable[i] & moveLimitations))
                break;
        }
        if (i != MAX_MON_MOVES)
            sAIScriptPtr += 8;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 4);
        break;
    case AI_TARGET:
    case AI_TARGET_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerTarget, 0, MOVE_LIMITATION_PP);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (FOES_MOVE_HISTORY(gBattlerTarget)[i] == *movePtr)
            {
                s32 j;
                for (j = 0; j < MAX_MON_MOVES; j++)
                    if (FOES_MOVE_HISTORY(gBattlerTarget)[i] == gBattleMons[gBattlerTarget].moves[j] && !(gBitTable[j] & moveLimitations))
                        break;
                if (j != MAX_MON_MOVES)
                    break;
            }
        }
        if (i != MAX_MON_MOVES)
            sAIScriptPtr += 8;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 4);
        break;
    }
}

static void Cmd_if_has_move_with_effect(void)
{
    s32 i;
    u8 moveLimitations;

    switch (sAIScriptPtr[1])
    {
    case AI_USER:
    case AI_USER_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerAttacker, 0, MOVE_LIMITATION_PP);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (gBattleMons[gBattlerAttacker].moves[i] != 0 && gBattleMoves[gBattleMons[gBattlerAttacker].moves[i]].effect == sAIScriptPtr[2] && !(gBitTable[i] & moveLimitations))
                break;
        }
        if (i == MAX_MON_MOVES)
            sAIScriptPtr += 7;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
        break;
    case AI_TARGET:
    case AI_TARGET_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerTarget, 0, MOVE_LIMITATION_PP);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (FOES_MOVE_HISTORY(gBattlerTarget)[i] && gBattleMoves[FOES_MOVE_HISTORY(gBattlerTarget)[i]].effect == sAIScriptPtr[2])
            {
                s32 j;
                for (j = 0; j < MAX_MON_MOVES; j++)
                    if (FOES_MOVE_HISTORY(gBattlerTarget)[i] == gBattleMons[gBattlerTarget].moves[j] && !(gBitTable[j] & moveLimitations))
                        break;
                if (j != MAX_MON_MOVES)
                    break;
            }
        }
        if (i == MAX_MON_MOVES)
            sAIScriptPtr += 7;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
        break;
    }
}

static void Cmd_if_doesnt_have_move_with_effect(void)
{
    s32 i;
    u8 moveLimitations;

    switch (sAIScriptPtr[1])
    {
    case AI_USER:
    case AI_USER_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerAttacker, 0, MOVE_LIMITATION_PP);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if(gBattleMons[gBattlerAttacker].moves[i] != 0 && gBattleMoves[gBattleMons[gBattlerAttacker].moves[i]].effect == sAIScriptPtr[2] && !(gBitTable[i] & moveLimitations))
                break;
        }
        if (i != MAX_MON_MOVES)
            sAIScriptPtr += 7;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
        break;
    case AI_TARGET:
    case AI_TARGET_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerTarget, 0, MOVE_LIMITATION_PP);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (FOES_MOVE_HISTORY(gBattlerTarget)[i] && gBattleMoves[FOES_MOVE_HISTORY(gBattlerTarget)[i]].effect == sAIScriptPtr[2])
            {
                s32 j;
                for (j = 0; j < MAX_MON_MOVES; j++)
                    if (FOES_MOVE_HISTORY(gBattlerTarget)[i] == gBattleMons[gBattlerTarget].moves[j] && !(gBitTable[j] & moveLimitations))
                        break;
                if (j != MAX_MON_MOVES)
                    break;
            }
        }
        if (i != MAX_MON_MOVES)
            sAIScriptPtr += 7;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
        break;
    }
}

static void Cmd_if_any_move_disabled_or_encored(void)
{
    u8 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    if (sAIScriptPtr[2] == 0)
    {
        if (gDisableStructs[battlerId].disabledMove == MOVE_NONE)
            sAIScriptPtr += 7;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
    }
    else if (sAIScriptPtr[2] != 1)
    {
        sAIScriptPtr += 7;
    }
    else
    {
        if (gDisableStructs[battlerId].encoredMove != MOVE_NONE)
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
        else
            sAIScriptPtr += 7;
    }
}

static void Cmd_if_curr_move_disabled_or_encored(void)
{
    switch (sAIScriptPtr[1])
    {
    case 0:
        if (gDisableStructs[gActiveBattler].disabledMove == AI_THINKING_STRUCT->moveConsidered)
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    case 1:
        if (gDisableStructs[gActiveBattler].encoredMove == AI_THINKING_STRUCT->moveConsidered)
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    default:
        sAIScriptPtr += 6;
        break;
    }
}

static void Cmd_flee(void)
{
    AI_THINKING_STRUCT->aiAction |= (AI_ACTION_DONE | AI_ACTION_FLEE | AI_ACTION_DO_NOT_ATTACK); // what matters is AI_ACTION_FLEE being enabled.
}

static void Cmd_if_random_safari_flee(void)
{
    u8 safariFleeRate;

    if (gBattleStruct->safariGoNearCounter)
    {
        safariFleeRate = gBattleStruct->safariEscapeFactor * 2;
        if (safariFleeRate > 20)
            safariFleeRate = 20;
    }
    else if (gBattleStruct->safariPkblThrowCounter != 0)
    {
        safariFleeRate = gBattleStruct->safariEscapeFactor / 4;
        if (safariFleeRate == 0)
            safariFleeRate = 1;
    }
    else
        safariFleeRate = gBattleStruct->safariEscapeFactor;
    safariFleeRate *= 5;
    if ((u8)(Random() % 100) < safariFleeRate)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
    else
        sAIScriptPtr += 5;
}

static void Cmd_watch(void)
{
    AI_THINKING_STRUCT->aiAction |= (AI_ACTION_DONE | AI_ACTION_WATCH | AI_ACTION_DO_NOT_ATTACK); // what matters is AI_ACTION_WATCH being enabled.
}

static void Cmd_get_hold_effect(void)
{
    u8 battlerId;
    u16 side;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

        AI_THINKING_STRUCT->funcResult = ItemId_GetHoldEffect(gBattleMons[battlerId].item);

    sAIScriptPtr += 2;
}

static void Cmd_get_gender(void)
{
    u8 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    AI_THINKING_STRUCT->funcResult = GetGenderFromSpeciesAndPersonality(gBattleMons[battlerId].species, gBattleMons[battlerId].personality);

    sAIScriptPtr += 2;
}

static void Cmd_is_first_turn_for(void)
{
    u8 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    AI_THINKING_STRUCT->funcResult = gDisableStructs[battlerId].isFirstTurn;

    sAIScriptPtr += 2;
}

static void Cmd_get_stockpile_count(void)
{
    u8 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    AI_THINKING_STRUCT->funcResult = gDisableStructs[battlerId].stockpileCounter;

    sAIScriptPtr += 2;
}

static void Cmd_is_double_battle(void)
{
    AI_THINKING_STRUCT->funcResult = gBattleTypeFlags & BATTLE_TYPE_DOUBLE;

    sAIScriptPtr += 1;
}

static void Cmd_get_used_held_item(void)
{
    u8 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    AI_THINKING_STRUCT->funcResult = ((u8 *)gBattleStruct->usedHeldItems)[battlerId * 2];
    sAIScriptPtr += 2;
}

static void Cmd_get_move_type_from_result(void)
{
    AI_THINKING_STRUCT->funcResult = gBattleMoves[AI_THINKING_STRUCT->funcResult].type;

    sAIScriptPtr += 1;
}

static void Cmd_get_move_power_from_result(void)
{
    AI_THINKING_STRUCT->funcResult = gBattleMoves[AI_THINKING_STRUCT->funcResult].power;

    sAIScriptPtr += 1;
}

static void Cmd_get_move_effect_from_result(void)
{
    AI_THINKING_STRUCT->funcResult = gBattleMoves[AI_THINKING_STRUCT->funcResult].effect;

    sAIScriptPtr += 1;
}

static void Cmd_get_protect_count(void)
{
    u8 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;
    else
        battlerId = gBattlerTarget;

    AI_THINKING_STRUCT->funcResult = gDisableStructs[battlerId].protectUses;

    sAIScriptPtr += 2;
}

static void Cmd_nullsub_52(void)
{
}

static void Cmd_nullsub_53(void)
{
}

static void Cmd_nullsub_54(void)
{
}

static void Cmd_nullsub_55(void)
{
}

static void Cmd_nullsub_56(void)
{
}

static void Cmd_nullsub_57(void)
{
}

static void Cmd_call(void)
{
    AIStackPushVar(sAIScriptPtr + 5);
    sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
}

static void Cmd_goto(void)
{
    sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
}

static void Cmd_end(void)
{
    if (AIStackPop() == FALSE)
        AI_THINKING_STRUCT->aiAction |= AI_ACTION_DONE;
}

static void Cmd_if_level_cond(void)
{
    switch (sAIScriptPtr[1])
    {
    case 0: // greater than
        if (gBattleMons[gBattlerAttacker].level > gBattleMons[gBattlerTarget].level)
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    case 1: // less than
        if (gBattleMons[gBattlerAttacker].level < gBattleMons[gBattlerTarget].level)
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    case 2: // equal
        if (gBattleMons[gBattlerAttacker].level == gBattleMons[gBattlerTarget].level)
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    case 3: // AI level is 2 or less
        if (gBattleMons[gBattlerAttacker].level <= 2)
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    }
}

static void Cmd_if_target_taunted(void)
{
    if (gDisableStructs[gBattlerTarget].tauntTimer != 0)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
    else
        sAIScriptPtr += 5;
}

static void Cmd_if_target_not_taunted(void)
{
    if (gDisableStructs[gBattlerTarget].tauntTimer == 0)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
    else
        sAIScriptPtr += 5;
}

// NEW AIs
static u8 BattleAI_GetWantedBattler(u8 wantedBattler)
{
    switch (wantedBattler)
    {
    case AI_USER:
        return gBattlerAttacker; // gBattlerAttacker before sBattler_AI
    case AI_TARGET:
    default:
        return gBattlerTarget;
    case AI_USER_PARTNER:
        return gBattlerAttacker ^ BIT_FLANK; // gBattlerAttacker before sBattler_AI
    case AI_TARGET_PARTNER:
        return gBattlerTarget ^ BIT_FLANK;
    }
}

static void Cmd_check_ability(void)
{
    u32 battlerId = BattleAI_GetWantedBattler(sAIScriptPtr[1]);
    u32 ability = sAIScriptPtr[2];

    if (sAIScriptPtr[1] == AI_TARGET || sAIScriptPtr[1] == AI_TARGET_PARTNER)
    {
        if (FOES_OBSERVED_ABILITY(battlerId) != ABILITY_NONE)
        {
            ability = FOES_OBSERVED_ABILITY(battlerId);
            AI_THINKING_STRUCT->funcResult = ability;
        }
        // Abilities that prevent fleeing.
        else if (gBattleMons[battlerId].ability == ABILITY_SHADOW_TAG
        || gBattleMons[battlerId].ability == ABILITY_MAGNET_PULL
        || gBattleMons[battlerId].ability == ABILITY_ARENA_TRAP)
        {
            ability = gBattleMons[battlerId].ability;
        }
        else if (gBaseStats[gBattleMons[battlerId].species].abilities[0] != ABILITY_NONE)
        {
            if (gBaseStats[gBattleMons[battlerId].species].abilities[1] != ABILITY_NONE && gBaseStats[gBattleMons[battlerId].species].abilities[1] != gBaseStats[gBattleMons[battlerId].species].abilities[0])
            {
                u8 abilityDummyVariable = ability; // Needed to match.
                if (gBaseStats[gBattleMons[battlerId].species].abilities[0] != abilityDummyVariable
                && gBaseStats[gBattleMons[battlerId].species].abilities[1] != abilityDummyVariable)
                {
                    ability = gBaseStats[gBattleMons[battlerId].species].abilities[0];
                }
                else
                {
                    ability = ABILITY_NONE;
                }
            }
            else
            {
                ability = gBaseStats[gBattleMons[battlerId].species].abilities[0];
            }
        }
        else
        {
            ability = gBaseStats[gBattleMons[battlerId].species].abilities[1]; // AI can't actually reach this part since no pokemon has ability 2 and no ability 1.
        }
    }
    else
    {
        // The AI knows its own or partner's ability.
        ability = gBattleMons[battlerId].ability;
    }

    if (ability == 0)
        AI_THINKING_STRUCT->funcResult = 2; // Unable to answer.
    else if (ability == sAIScriptPtr[2])
        AI_THINKING_STRUCT->funcResult = 1; // Pokemon has the ability we wanted to check.
    else
        AI_THINKING_STRUCT->funcResult = 0; // Pokemon doesn't have the ability we wanted to check.

    sAIScriptPtr += 3;
}

static void Cmd_is_of_type(void)
{
    u8 battlerId = BattleAI_GetWantedBattler(sAIScriptPtr[1]);

    if (IS_BATTLER_OF_TYPE(battlerId, sAIScriptPtr[2]))
        AI_THINKING_STRUCT->funcResult = TRUE;
    else
        AI_THINKING_STRUCT->funcResult = FALSE;

    sAIScriptPtr += 3;
}

static void Cmd_if_target_is_ally(void)
{
    if ((gBattlerAttacker & BIT_SIDE) == (gBattlerTarget & BIT_SIDE)) // gBattlerAttacker before sBattler_AI
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
    else
        sAIScriptPtr += 5;
}

static void Cmd_if_flash_fired(void)
{
    u8 battlerId = BattleAI_GetWantedBattler(sAIScriptPtr[1]);

    if (gBattleResources->flags->flags[battlerId] & RESOURCE_FLAG_FLASH_FIRE)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_if_holds_item(void)
{
    u8 battlerId = BattleAI_GetWantedBattler(sAIScriptPtr[1]);
	u16 item, var1, var2;

    if ((battlerId & BIT_SIDE) == (gBattlerAttacker & BIT_SIDE))
        item = gBattleMons[battlerId].item;
    else
        item = FOES_OBSERVED_ITEM_EFFECT(battlerId);

    var2 = sAIScriptPtr[2];
    var1 = sAIScriptPtr[3];
	var1 <<= 8;

    if ((var1 | var2) == item)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 4);
    else
        sAIScriptPtr += 8;
}

static void Cmd_get_hazards_count(void)
{
    u8 battlerId = BattleAI_GetWantedBattler(sAIScriptPtr[1]);
    u8 side = GetBattlerSide(battlerId);

    switch (T1_READ_16(sAIScriptPtr + 2))
    {
    case EFFECT_SPIKES:
        AI_THINKING_STRUCT->funcResult = gSideTimers[side].spikesAmount;
        break;
    }

    sAIScriptPtr += 4;
}

static void Cmd_get_curr_dmg_hp_percent(void)
{
    gCurrentMove = AI_THINKING_STRUCT->moveConsidered;
    CalculategBattleMoveDamageFromgCurrentMove(gBattlerAttacker, gBattlerTarget, AI_THINKING_STRUCT->simulatedRNG[AI_THINKING_STRUCT->movesetIndex]); // gBattlerAttacker before sBattler_AI
	gBattleResources->ai->funcResult = (gBattleMoveDamage * 100) / gBattleMons[gBattlerTarget].maxHP;

	sAIScriptPtr++;
}

static void Cmd_if_hp_condition(void)
{
    switch (sAIScriptPtr[1])
    {
    case TARGET_HAS_1_HP: // comprueba si el rival tiene 1 PS
        if (gBattleMons[gBattlerTarget].hp == 1)
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    case USER_HAS_1_HP: // comprueba si la IA tiene 1 PS
        if (gBattleMons[gBattlerAttacker].hp == 1) // gBattlerAttacker before sBattler_AI
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    case TARGET_HAS_1_MAX_HP: // comprueba si el rival tiene 1 como PS máximos
        if (gBattleMons[gBattlerTarget].maxHP == 1)
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    case TARGET_WITH_LEFTIES_WONT_LOSE_HP_IF_WE_USE_ENDEAVOR: // comprueba si el rival tiene, como máximo, los PS que tiene el usuario más lo que el rival obtendría por Restos
        if (gBattleMons[gBattlerTarget].hp <= gBattleMons[gBattlerAttacker].hp + gBattleMons[gBattlerTarget].maxHP / 16)  // gBattlerAttacker before sBattler_AI
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    case TARGET_CANNOT_USE_SUB: // comprueba si el rival no tiene PS como para usar Sustituto
        if (gBattleMons[gBattlerTarget].hp <= gBattleMons[gBattlerTarget].maxHP / 4)
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    case USER_CANNOT_USE_SUB: // comprueba si la IA no tiene PS como para usar Sustituto
        if (gBattleMons[gBattlerAttacker].hp <= gBattleMons[gBattlerAttacker].maxHP / 4) // gBattlerAttacker before sBattler_AI
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
        else
            sAIScriptPtr += 6;
        break;
    }
}

static void Cmd_if_accuracy_less_than(void)
{  
    u8 type, finalAcc, evasion;
    s8 buff;
    u16 move = AI_THINKING_STRUCT->moveConsidered;
    u16 accuracy = gBattleMoves[move].accuracy;

    sAIScriptPtr += 6; // asume que la precisión no es menor (no salta) hasta que se observe lo contrario

	if (accuracy == 0)
        return;
    // Comprueba distintas situaciones en las que los movs no fallan o pierden precisión
    // Se ignoran algunas cosas porque afectan por igual a todos los movimientos
    // o porque la IA no las sabe (Sand Veil, BrightPowder...)

    // Lock-On, Mind Reader
    if (gStatuses3[gBattlerTarget] & STATUS3_ALWAYS_HITS && gDisableStructs[gBattlerTarget].battlerWithSureHit == gBattlerAttacker) // gBattlerAttacker before sBattler_AI
        return;
    // No Guard
    if (gBattleMons[gBattlerTarget].ability == ABILITY_NO_GUARD || gBattleMons[gBattlerAttacker].ability == ABILITY_NO_GUARD) // gBattlerAttacker before sBattler_AI
        return;

    // ataques que cambian de precisión en clima
    if (WEATHER_HAS_EFFECT) {
        if (gBattleMoves[move].effect == EFFECT_THUNDER || gBattleMoves[move].effect == EFFECT_HURRICANE) {
            if (gBattleWeather & WEATHER_RAIN_ANY)
                return;
            if (gBattleWeather & WEATHER_SUN_ANY)
                accuracy = 50;
        }
        else if ((gBattleWeather & WEATHER_HAIL_ANY) && move == MOVE_BLIZZARD)
            return;
    }

    // Comprueba cambios de stats en Precisión y Evasión
    evasion = gBattleMons[gBattlerTarget].statStages[STAT_EVASION];
    if (gBattleMons[gBattlerAttacker].ability == ABILITY_KEEN_EYE && evasion > 6) // gBattlerAttacker before sBattler_AI
        evasion = 6;

 if (gBattleMons[gBattlerTarget].status2 & STATUS2_FORESIGHT)
    {
        u8 acc = gBattleMons[gBattlerAttacker].statStages[STAT_ACC]; // gBattlerAttacker before sBattler_AI
        buff = acc; // ignora la Evasión del rival (sí, aunque sea negativa)
    }
    else
    {
        u8 acc = gBattleMons[gBattlerAttacker].statStages[STAT_ACC]; // gBattlerAttacker before sBattler_AI
        buff = acc + 6 - evasion;
    }

    if (buff < 0)   buff = 0;
    if (buff > 0xC) buff = 0xC;

    // Solo se tiene en cuenta una menor precisión si estamos comparando con precisión 100
    if (sAccuracyStageRatios[buff].dividend >= sAccuracyStageRatios[buff].divisor || sAIScriptPtr[1] == 100)
        accuracy = (sAccuracyStageRatios[buff].dividend * accuracy) / sAccuracyStageRatios[buff].divisor;

    if (gBattleMons[gBattlerAttacker].ability == ABILITY_COMPOUND_EYES) // gBattlerAttacker before sBattler_AI
        accuracy = (accuracy * 13) / 10;
    GET_MOVE_TYPE(move, type);
    if (gBattleMons[gBattlerAttacker].ability == ABILITY_HUSTLE && IS_TYPE_PHYSICAL(gBattleMoves[move]) && gBattleMoves[move].power > 0) // gBattlerAttacker before sBattler_AI
        accuracy = (accuracy * 4) / 5;

    // Determina si la precisión es menor que la pedida
    finalAcc = (u8) accuracy;
    if (accuracy < 0x100 && finalAcc < sAIScriptPtr[1])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
}

static void Cmd_if_not_expected_to_sleep(void)
{
    if (!(gBattleMons[AI_USER].status1 & STATUS1_SLEEP) || (gBattleMons[AI_USER].status1 & STATUS1_SLEEP) == 5)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
    else
        sAIScriptPtr += 5;
}

static void Cmd_if_receiving_wish(void)
{
    u16 battlerId;

    if (sAIScriptPtr[1] == AI_USER)
        battlerId = gBattlerAttacker;  // gBattlerAttacker before sBattler_AI
    else
        battlerId = gBattlerTarget;

    if (gWishFutureKnock.wishCounter[battlerId])
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

// Salta si, en el próximo turno, el rival no podrá atacar debido a Truant
static void Cmd_if_target_wont_attack_due_to_truant(void)
{
    if (gBattleMons[gBattlerTarget].ability == ABILITY_TRUANT && gDisableStructs[gBattlerTarget].truantCounter)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
    else
        sAIScriptPtr += 5;
}

static void Cmd_if_trick_fails_in_this_type_of_battle(void)
{
    // No one can swap items in regular trainer battles
    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_TOWER
	 // || gBossBattleFlags != BATTLE_TYPE_NORMAL   // No existe gBossBattleFlags en este hack
     || (GetBattlerSide(gBattlerAttacker) == B_SIDE_OPPONENT
         && !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_EREADER_TRAINER))
         && gTrainerBattleOpponent_A != TRAINER_SECRET_BASE)
		 //  FlagGet(FLAG_RYU_RANDOMBATTLECC) == 1 // No existe esa flag aun en este hack, añadir lueg
		 )
    {
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 1);
    }
    else
        sAIScriptPtr += 5;
}

// Calcula el mejor nHKO que puede hacerle un poke a otro
// Se calcula de forma notablemente distinta según si el poke en cuestión es conocido por la IA o no
// consideredMove puede ser MOVE_NONE para que evalúe todos los movimientos
// (todos los movimientos conocidos y esperados, si no se conocen los movimientos del atacante)
s32 CalculateNHKO(u16 attackerId, u16 targetId, bool8 attackerIsCurrentAI, u16 consideredMove, bool8 assumeWorstCaseScenario, bool8 ignoreFocusPunch)
{
    u16 * movePointer;
	bool8 check_only_considered_move = (consideredMove != MOVE_NONE);
    s32 i;
    s32 best_nhko = 5;     // todo lo que sea peor que 4HKO se lee como 5HKO (incluso daño 0)
	u16 savedCurrentMove = gCurrentMove;
 
    if (check_only_considered_move)
        movePointer = &consideredMove;
    else if (attackerIsCurrentAI)
        movePointer = gBattleMons[attackerId].moves;
    else
        movePointer = FOES_MOVE_HISTORY(attackerId);
 
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (!movePointer[i] || !AI_CAN_ESTIMATE_DAMAGE(movePointer[i]))
            continue;  // se ignora el movimiento

        if (!check_only_considered_move && (gBattleMoves[movePointer[i]].effect == EFFECT_EXPLOSION || (ignoreFocusPunch && movePointer[i] == MOVE_FOCUS_PUNCH)))
            continue;

        if (!check_only_considered_move)
        {
			u8 moveLimitations = CheckMoveLimitations(attackerId, 0, MOVE_LIMITATION_CHOICE-1);
            s32 j;
            for (j = 0; j < MAX_MON_MOVES; j++)
			if (movePointer[i] == gBattleMons[attackerId].moves[j] && !(gBitTable[j] & moveLimitations))
                    break;
            if (j == MAX_MON_MOVES)
                continue; // No puede usar el movimiento por el momento; se ignora

			if ((gBattleMons[attackerId].status2 & STATUS2_MULTIPLETURNS) && movePointer[i] != gLastMoves[attackerId])
                continue; // Está en un ataque multiturno distinto de este; se ignora
		}

        gCurrentMove = movePointer[i];
		best_nhko = CalculatenHKOFromgCurrentMove(attackerId, targetId, (assumeWorstCaseScenario || (!attackerIsCurrentAI && check_only_considered_move)) ? 0 : (AI_THINKING_STRUCT->simulatedRNG[check_only_considered_move ? AI_THINKING_STRUCT->movesetIndex : i]), best_nhko);

        if (check_only_considered_move || best_nhko == 1)
            break; // solo se mira el movimiento pensado, y no se sigue mirando si es OHKO
    }

    // Si el atacante es el oponente, no se conocen todos sus movs y no da OHKO,
    // la IA puede asumir que los STAB estándar (de precisión alta)
    // y ataques típicos de la especie pueden ser los movs que faltan
	// siempre que la IA esté en condiciones de usar un ataque nuevo
		if (!attackerIsCurrentAI && !check_only_considered_move && best_nhko > 1
        && gDisableStructs[attackerId].encoredMove == MOVE_NONE
        && !(gBattleMons[attackerId].status2 & (STATUS2_RECHARGE | STATUS2_MULTIPLETURNS)))
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
            if (!movePointer[i]) // hay un ataque no conocido
                break;
        
        if (i != MAX_MON_MOVES) // algún ataque no se conoce
        {
            s32 type_i;
			u8 opponent_types[2] = {gBaseStats[gBattleMons[attackerId].species].type1, gBaseStats[gBattleMons[attackerId].species].type2};
            s16 standard_moves[] = {
                [TYPE_NORMAL] = MOVE_EGG_BOMB,       // prácticamente la misma potencia que Return/Frustration al máximo
                [TYPE_FIGHTING] = MOVE_SKY_UPPERCUT, // los movs más potentes son más arriesgados
                [TYPE_FLYING] = MOVE_DRILL_PECK,
                [TYPE_POISON] = MOVE_SLUDGE_BOMB,
                [TYPE_GROUND] = MOVE_EARTHQUAKE,
                [TYPE_ROCK] = MOVE_ROCK_SLIDE,       // se considera arriesgado Stone Edge
                [TYPE_BUG] = MOVE_X_SCISSOR,
                [TYPE_GHOST] = MOVE_SHADOW_BALL,
                [TYPE_STEEL] = MOVE_IRON_HEAD,
                [TYPE_FIRE] = MOVE_FLAMETHROWER,
                [TYPE_WATER] = MOVE_SURF,
                [TYPE_GRASS] = MOVE_ENERGY_BALL,
                [TYPE_ELECTRIC] = MOVE_THUNDERBOLT,
                [TYPE_PSYCHIC] = MOVE_PSYCHIC,
                [TYPE_ICE] = MOVE_ICE_BEAM,
                [TYPE_DRAGON] = MOVE_DRAGON_CLAW,
                [TYPE_DARK] = MOVE_CRUNCH,
                [TYPE_FAIRY] = MOVE_MOONBLAST,
            };

            if (opponent_types[1] == opponent_types[0])
                opponent_types[1] = TYPE_NONE;

            for (type_i = 0; type_i < 2 && opponent_types[type_i] != TYPE_NONE; type_i++)
            {
                u8 stab_type = opponent_types[type_i];

                // Comprueba que no se conoce un ataque de ese tipo (de potencia mayor que 40) en el rival
                for (i = 0; i < MAX_MON_MOVES; i++)
                    if (movePointer[i] && gBattleMoves[movePointer[i]].type == stab_type && gBattleMoves[movePointer[i]].power > 40)
                        break;
                if (i == MAX_MON_MOVES)
                {
                    // Procede a considerar un ataque STAB estándar de este tipo
                    gCurrentMove = standard_moves[stab_type];
                    best_nhko = CalculatenHKOFromgCurrentMove(attackerId, targetId, 0, best_nhko);
                    if (best_nhko == 1)
                        break; // el presunto ataque STAB es OHKO: no hace falta comprobar el otro tipo STAB si lo hay
                }
            }
			
			// Si sigue sin ser OHKO, la IA tiene una cierta probabilidad de considerar los
            // movimientos típicos de la especie del poke rival.
            // Lo hace casi seguramente (31/32) si se exige a la IA ser pesimista
            // (por ejemplo, para asegurarse del todo de que puede hincharse a boosts),
            // lo hace con probabilidad muy alta (7/8) si el rival acaba de entrar pero
            // el poke de la IA no (es decir, el rival entró sabiendo el poke de la IA)
            // ya que si entró será por algo, y lo hace a veces (1/2) en el resto de casos
            if (best_nhko > 1 && Random() % (assumeWorstCaseScenario ? 32 : ((gDisableStructs[attackerId].isFirstTurn && !(gDisableStructs[targetId].isFirstTurn)) ? 8 : 2)) != 0)
            {
                const u16 * probable_moves = sProbablePowerfulOrNonSTABMoves[gBattleMons[attackerId].species];
                s32 move_i;

                // Evalúa cada uno de los ataques probables de la especie
                for (move_i = 0; move_i < MAX_PROBABLE_MOVES && probable_moves[move_i] != MOVE_NONE; move_i++)
                {
                    gCurrentMove = probable_moves[move_i];
                    best_nhko = CalculatenHKOFromgCurrentMove(attackerId, targetId, 0, best_nhko);
                    if (best_nhko == 1)
                        break; // el presunto ataque es OHKO, no hace falta seguir mirando
                }
            }
        }
    }
		gCurrentMove = savedCurrentMove;
    if (((gBattleMons[attackerId].status2 & STATUS2_RECHARGE) || gDisableStructs[attackerId].truantCounter) && best_nhko < 5)
        best_nhko += 1;
    return best_nhko;
}

static void Cmd_calculate_nhko(void)
{ 
    u16 attackerId, targetId;
    bool8 attackerIsCurrentAI = (sAIScriptPtr[1] & (~AI_NHKO_PESSIMISTIC)) == AI_USER;
    u16 consideredMove = MOVE_NONE;
    bool8 assumeWorstCaseScenario = sAIScriptPtr[1] & AI_NHKO_PESSIMISTIC;
	bool8 ignoreFocusPunch = attackerIsCurrentAI || AI_CAN_ESTIMATE_DAMAGE(AI_THINKING_STRUCT->moveConsidered);

    if (attackerIsCurrentAI)
    {
        attackerId = gBattlerAttacker; // gBattlerAttacker before sBattler_AI
        targetId = gBattlerTarget;
        // Si la IA está considerando un movimiento de daño, se evalúa solo ese.
        // En caso contrario, se consideran todos los (demás) movimientos que conoce
        if (gBattleMoves[AI_THINKING_STRUCT->moveConsidered].power != 0)
            consideredMove = AI_THINKING_STRUCT->moveConsidered;
    }
    else
    {
        attackerId = gBattlerTarget;
        targetId = gBattlerAttacker; // gBattlerAttacker before sBattler_AI
    }

    // Calcula el nHKO y lo guarda en funcResult, con lo que se puede consultar su valor
    // usando comandos de la IA como if_equal, if_less_than, etc
	AI_THINKING_STRUCT->funcResult = CalculateNHKO(attackerId, targetId, attackerIsCurrentAI, consideredMove, assumeWorstCaseScenario, ignoreFocusPunch);
	sAIScriptPtr += 2;
}

static void Cmd_if_next_turn_target_might_use_move_with_effect(void)
{
    s32 i;
    u8 moveLimitations = CheckMoveLimitations(gBattlerTarget, 0, MOVE_LIMITATION_CHOICE-1);
    u8 effect = *(sAIScriptPtr + 1);

    if (effect == AI_LAST_EFFECT_BY_TARGET)
        effect = gBattleMoves[gLastMoves[gBattlerTarget]].effect;

    sAIScriptPtr += 6; // será sobreescrito si el objetivo sí podrá usar un movimiento con el efecto

    if (gBattleMons[gBattlerTarget].status2 & STATUS2_RECHARGE)
        return; // estará descansando por Hiperrayo o similar

    if (gBattleMons[gBattlerTarget].status2 & STATUS2_MULTIPLETURNS)
        return; // está en un ataque multiturno. (Se asume que no se está preguntando por ese mismo ataque multiturno)

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (FOES_MOVE_HISTORY(gBattlerTarget)[i] && gBattleMoves[FOES_MOVE_HISTORY(gBattlerTarget)[i]].effect == effect)
        {
            s32 j;
            for (j = 0; j < MAX_MON_MOVES; j++)
                if (FOES_MOVE_HISTORY(gBattlerTarget)[i] == gBattleMons[gBattlerTarget].moves[j] && !(gBitTable[j] & moveLimitations))
                    break;
            if (j != MAX_MON_MOVES)
                break;
        }
    }

    if (i != MAX_MON_MOVES)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr - 4);
}

static void Cmd_if_battler_absent(void)
{
    u32 battler = BattleAI_GetWantedBattler(sAIScriptPtr[1]);

    if (!IsBattlerAlive(battler))
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
    else
        sAIScriptPtr += 6;
}

static void Cmd_get_possible_categories_of_foes_attacks(void)
{
    s32 i, j;
    bool8 physical_move_known = FALSE;
    bool8 special_move_known = FALSE;
    bool8 all_moves_known = TRUE;
    u8 result;
    
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        u16 move = FOES_MOVE_HISTORY(gBattlerTarget)[i];
        if (!move)
            all_moves_known = FALSE;
        else if (AI_CAN_ESTIMATE_DAMAGE(move)) // hay mov de daño y no es Counter/Mirror Coat/Bide/OHKO
        {
            u8 moveLimitations = CheckMoveLimitations(gBattlerTarget, 0, MOVE_LIMITATION_CHOICE-1);
            u8 type = gBattleMoves[move].type;

            for (j = 0; j < MAX_MON_MOVES; j++)
                      if (move == gBattleMons[gBattlerTarget].moves[j] && !(gBitTable[j] & moveLimitations))
                    break;
            if (j == MAX_MON_MOVES)
                continue; // No puede usar el movimiento por el momento; se ignora

                  if ((gBattleMons[gBattlerTarget].status2 & STATUS2_MULTIPLETURNS) && move != gLastMoves[gBattlerTarget])
                continue; // Está en un ataque multiturno distinto de este; se ignora

            // Comprueba el tipo
			if (move == MOVE_HIDDEN_POWER || move == MOVE_MONADO_POWER)
            {
                struct Pokemon *monAttacker;
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    monAttacker = &gPlayerParty[gBattlerPartyIndexes[gBattlerTarget]];
                else
                    monAttacker = &gEnemyParty[gBattlerPartyIndexes[gBattlerTarget]];

                type = monAttacker->box.hpType;
            }
            else if (move == MOVE_WEATHER_BALL && WEATHER_HAS_EFFECT)
            {
                if (gBattleWeather & WEATHER_RAIN_ANY)
                    type = TYPE_WATER;
                else if (gBattleWeather & WEATHER_SANDSTORM_ANY)
                    type = TYPE_ROCK;
                else if (gBattleWeather & WEATHER_SUN_ANY)
                    type = TYPE_FIRE;
                else if (gBattleWeather & WEATHER_HAIL_ANY)
                    type = TYPE_ICE;
            }

            // Comprueba que el poke de la IA no es inmune al tipo del movimiento
            gCurrentMove = move;
            CalculategBattleMoveDamageFromgCurrentMove(gBattlerTarget, gBattlerAttacker, 0); // gBattlerAttacker before sBattler_AI
            if (gBattleMoveDamage == 0)
                continue;

            // Lee la categoría del tipo
            if (IS_TYPE_PHYSICAL(gBattleMoves[move]))
                physical_move_known = TRUE;
            else
                special_move_known = TRUE;
            }
    }
    
    if (physical_move_known)
    {
        if (special_move_known)
            result = AI_BOTH_PHYSICAL_AND_SPECIAL;
        else if (all_moves_known)
            result = AI_PHYSICAL_ONLY;
        else
            result = AI_ONLY_PHYSICAL_KNOWN;
    }
    else if (special_move_known)
    {
        if (all_moves_known)
            result = AI_SPECIAL_ONLY;
        else
		result = AI_ONLY_SPECIAL_KNOWN;
    }
    else if (all_moves_known || gBattleMons[gBattlerTarget].species == SPECIES_WOBBUFFET || gBattleMons[gBattlerTarget].species == SPECIES_WYNAUT)
        result = AI_NO_DAMAGING_MOVES;
    else
    {
        u16 base_attack = gBaseStats[gBattleMons[gBattlerTarget].species].baseAttack;
        u16 base_sp_attack = gBaseStats[gBattleMons[gBattlerTarget].species].baseSpAttack;
        if (base_attack * 4 < base_sp_attack * 3 && base_attack < 100)
            result = AI_UNKNOWN_CATEGORIES_PROBABLY_SPECIAL;
        else if (base_sp_attack * 4 < base_attack * 3 && base_sp_attack < 100)
            result = AI_UNKNOWN_CATEGORIES_PROBABLY_PHYSICAL;
        else
            result = AI_UNKNOWN_CATEGORIES;
    }

    gBattleResources->ai->funcResult = result;

    sAIScriptPtr++;
}

static void Cmd_if_perish_song_not_about_to_trigger(void)
{
    u8 battlerId = BattleAI_GetWantedBattler(sAIScriptPtr[1]);

    if ((gStatuses3[battlerId] & STATUS3_PERISH_SONG) && gDisableStructs[battlerId].perishSongTimer == 0)
        sAIScriptPtr += 6;
    else
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 2);
}

static void Cmd_if_high_change_to_break_sub_and_keep_hitting(void)
{ 
    u16 move = AI_THINKING_STRUCT->moveConsidered;
    u16 effect = gBattleMoves[move].effect;
    u16 target_damage = gDisableStructs[gBattlerTarget].substituteHP;

    sAIScriptPtr += 5; // luego se deshace si hay que saltar

    if (!AI_CAN_ESTIMATE_DAMAGE(move) || !(gBattleMons[gBattlerTarget].status2 & STATUS2_SUBSTITUTE) || !gDisableStructs[gBattlerTarget].substituteHP)
        return;

    switch (effect)
    {
        case EFFECT_MULTI_HIT:
        case EFFECT_TWINEEDLE:
        case EFFECT_DOUBLE_HIT:
        case EFFECT_TRIPLE_KICK:
            break;
        default:
            return;
    }

    gCurrentMove = move;
    CalculategBattleMoveDamageFromgCurrentMove(gBattlerAttacker, gBattlerTarget, AI_THINKING_STRUCT->simulatedRNG[AI_THINKING_STRUCT->movesetIndex]); // gBattlerAttacker before sBattler_AI

    switch (effect)
    {
        case EFFECT_MULTI_HIT: // mira si 2 golpes bastan para romper el sub
            gBattleMoveDamage = (gBattleMoveDamage / 3) * 2;
            break;
        case EFFECT_TWINEEDLE:
        case EFFECT_DOUBLE_HIT: // mira si el primer golpe rompe el sub
        case EFFECT_TRIPLE_KICK: // mira si los dos primeros golpes rompen el sub
            gBattleMoveDamage /= 2;
            break;
    }

    if (target_damage <= gBattleMoveDamage)
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr - 4);
}

static void Cmd_if_user_has_revealed_move(void)
{
    s32 i;
    u16 move = T1_READ_16(sAIScriptPtr + 1);

    for (i = 0; i < MAX_MON_MOVES; i++)
        //if (FOES_MOVE_HISTORY(gBattlerAttacker)[i] == move) // esto serviría si se registrasen los ataques que va usando la IA, pero no es el caso en general // gBattlerAttacker before sBattler_AI
        // Lo siguiente puede fallar si el rival ha visto el movimiento de otra forma (Transform)
        // o si tiene 10 o menos PP máximos y se recuperó con Leppa Berry
        if (gBattleMons[gBattlerAttacker].moves[i] == move && gBattleMons[gBattlerAttacker].pp[i] < CalculatePPWithBonus(move, gBattleMons[gBattlerAttacker].ppBonuses, i)) // gBattlerAttacker before sBattler_AI
            break;

    if (i == MAX_MON_MOVES)
        sAIScriptPtr += 7;
    else
        sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
}

static void Cmd_if_has_non_ineffective_move_with_effect(void)
{
    s32 i;
    u8 moveLimitations;

    switch (sAIScriptPtr[1])
    {
    case AI_USER:
    case AI_USER_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerAttacker, 0, MOVE_LIMITATION_PP); // gBattlerAttacker before sBattler_AI
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (gBattleMons[gBattlerAttacker].moves[i] != 0 && gBattleMoves[gBattleMons[gBattlerAttacker].moves[i]].effect == sAIScriptPtr[2] // gBattlerAttacker before sBattler_AI
                && !(gBitTable[i] & moveLimitations) && CalculateDamageFromMove(gBattlerAttacker, gBattlerTarget, gBattleMons[gBattlerAttacker].moves[i], 0) > 0) // gBattlerAttacker before sBattler_AI
                break;
        }
        if (i == MAX_MON_MOVES)
            sAIScriptPtr += 7;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
        break;
    case AI_TARGET:
    case AI_TARGET_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerTarget, 0, MOVE_LIMITATION_PP);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (FOES_MOVE_HISTORY(gBattlerTarget)[i] && gBattleMoves[FOES_MOVE_HISTORY(gBattlerTarget)[i]].effect == sAIScriptPtr[2])
            {
                s32 j;
                for (j = 0; j < MAX_MON_MOVES; j++)
                    if (FOES_MOVE_HISTORY(gBattlerTarget)[i] == gBattleMons[gBattlerTarget].moves[j] && !(gBitTable[j] & moveLimitations))
                        break;
                if (j != MAX_MON_MOVES && CalculateDamageFromMove(gBattlerTarget, gBattlerAttacker, gBattleMons[gBattlerTarget].moves[j], 0) > 0) // gBattlerAttacker before sBattler_AI
                    break;
            }
        }
        if (i == MAX_MON_MOVES)
            sAIScriptPtr += 7;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
        break;
    }
}
static void Cmd_if_doesnt_have_non_ineffective_move_with_effect(void)
{
    s32 i;
    u8 moveLimitations;

    switch (sAIScriptPtr[1])
    {
    case AI_USER:
    case AI_USER_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerAttacker, 0, MOVE_LIMITATION_PP); // gBattlerAttacker before sBattler_AI
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if(gBattleMons[gBattlerAttacker].moves[i] != 0 && gBattleMoves[gBattleMons[gBattlerAttacker].moves[i]].effect == sAIScriptPtr[2] // gBattlerAttacker before sBattler_AI
                && !(gBitTable[i] & moveLimitations) && CalculateDamageFromMove(gBattlerAttacker, gBattlerTarget, gBattleMons[gBattlerAttacker].moves[i], 0) > 0) // gBattlerAttacker before sBattler_AI
                break;
        }
        if (i != MAX_MON_MOVES)
            sAIScriptPtr += 7;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
        break;
    case AI_TARGET:
    case AI_TARGET_PARTNER:
        moveLimitations = CheckMoveLimitations(gBattlerTarget, 0, MOVE_LIMITATION_PP);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (FOES_MOVE_HISTORY(gBattlerTarget)[i] && gBattleMoves[FOES_MOVE_HISTORY(gBattlerTarget)[i]].effect == sAIScriptPtr[2])
            {
                s32 j;
                for (j = 0; j < MAX_MON_MOVES; j++)
                    if (FOES_MOVE_HISTORY(gBattlerTarget)[i] == gBattleMons[gBattlerTarget].moves[j] && !(gBitTable[j] & moveLimitations))
                        break;
                if (j != MAX_MON_MOVES && CalculateDamageFromMove(gBattlerTarget, gBattlerAttacker, gBattleMons[gBattlerTarget].moves[j], 0) > 0) // gBattlerAttacker before sBattler_AI
                    break;
            }
        }
        if (i != MAX_MON_MOVES)
            sAIScriptPtr += 7;
        else
            sAIScriptPtr = T1_READ_PTR(sAIScriptPtr + 3);
        break;
    }
}

// Other old things
static void AIStackPushVar(const u8 *var)
{
    gBattleResources->AI_ScriptsStack->ptr[gBattleResources->AI_ScriptsStack->size++] = var;
}

// unused
static void AIStackPushVar_cursor(void)
{
    gBattleResources->AI_ScriptsStack->ptr[gBattleResources->AI_ScriptsStack->size++] = sAIScriptPtr;
}

static bool8 AIStackPop(void)
{
    if (gBattleResources->AI_ScriptsStack->size != 0)
    {
        --gBattleResources->AI_ScriptsStack->size;
        sAIScriptPtr = gBattleResources->AI_ScriptsStack->ptr[gBattleResources->AI_ScriptsStack->size];
        return TRUE;
    }
    else
        return FALSE;
}
