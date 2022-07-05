#include "global.h"
#include "gflib.h"
#include "fieldmap.h"
#include "field_player_avatar.h"
#include "field_effect.h"
#include "party_menu.h"
#include "event_data.h"
#include "script.h"
#include "fldeff.h"
#include "event_scripts.h"
#include "overworld.h"
#include "event_object_movement.h"
#include "constants/songs.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/maps.h"
#include "constants/metatile_behaviors.h"

static void Task_FieldEffectShowMon_Init(u8 taskId);
static void Task_FieldEffectShowMon_WaitFldeff(u8 taskId);
static void Task_FieldEffectShowMon_WaitPlayerAnim(u8 taskId);
static void Task_FieldEffectShowMon_Cleanup(u8 taskId);
static void sub_80C9A10(void);
static void sub_80C9A60(void);
static void FieldMove_Headbutt(void);
static void FieldCallback_Headbutt(void);

EWRAM_DATA struct MapPosition gPlayerFacingPosition = {};

bool8 CheckObjectGraphicsInFrontOfPlayer(u8 graphicsId)
{
    u8 mapObjId;

    GetXYCoordsOneStepInFrontOfPlayer(&gPlayerFacingPosition.x, &gPlayerFacingPosition.y);
    gPlayerFacingPosition.height = PlayerGetZCoord();
    mapObjId = GetObjectEventIdByXYZ(gPlayerFacingPosition.x, gPlayerFacingPosition.y, gPlayerFacingPosition.height);
    if (gObjectEvents[mapObjId].graphicsId != graphicsId)
        return FALSE;
    gSpecialVar_LastTalked = gObjectEvents[mapObjId].localId;
    return TRUE;
}

u8 CreateFieldEffectShowMon(void)
{
    GetXYCoordsOneStepInFrontOfPlayer(&gPlayerFacingPosition.x, &gPlayerFacingPosition.y);
    return CreateTask(Task_FieldEffectShowMon_Init, 8);
}

static void Task_FieldEffectShowMon_Init(u8 taskId)
{
    u8 mapObjId;

    ScriptContext2_Enable();
    gPlayerAvatar.preventStep = TRUE;
    mapObjId = gPlayerAvatar.objectEventId;
    if (!ObjectEventIsMovementOverridden(&gObjectEvents[mapObjId])
     || ObjectEventClearHeldMovementIfFinished(&gObjectEvents[mapObjId]))
    {
        if (gMapHeader.mapType == MAP_TYPE_UNDERWATER)
        {
            // Leftover from RS, inhibits the player anim while underwater.
            FieldEffectStart(FLDEFF_FIELD_MOVE_SHOW_MON_INIT);
            gTasks[taskId].func = Task_FieldEffectShowMon_WaitFldeff;
        }
        else
        {
            StartPlayerAvatarSummonMonForFieldMoveAnim();
            ObjectEventSetHeldMovement(&gObjectEvents[mapObjId], MOVEMENT_ACTION_START_ANIM_IN_DIRECTION);
            gTasks[taskId].func = Task_FieldEffectShowMon_WaitPlayerAnim;
        }
    }
}

static void Task_FieldEffectShowMon_WaitPlayerAnim(u8 taskId)
{
    if (ObjectEventCheckHeldMovementStatus(&gObjectEvents[gPlayerAvatar.objectEventId]) == TRUE)
    {
        FieldEffectStart(FLDEFF_FIELD_MOVE_SHOW_MON_INIT);
        gTasks[taskId].func = Task_FieldEffectShowMon_WaitFldeff;
    }
}

static void Task_FieldEffectShowMon_WaitFldeff(u8 taskId)
{
    if (!FieldEffectActiveListContains(FLDEFF_FIELD_MOVE_SHOW_MON))
    {
        gFieldEffectArguments[1] = GetPlayerFacingDirection();
        if (gFieldEffectArguments[1] == DIR_SOUTH)
            gFieldEffectArguments[2] = 0;
        if (gFieldEffectArguments[1] == DIR_NORTH)
            gFieldEffectArguments[2] = 1;
        if (gFieldEffectArguments[1] == DIR_WEST)
            gFieldEffectArguments[2] = 2;
        if (gFieldEffectArguments[1] == DIR_EAST)
            gFieldEffectArguments[2] = 3;
        ObjectEventSetGraphicsId(&gObjectEvents[gPlayerAvatar.objectEventId], GetPlayerAvatarGraphicsIdByCurrentState());
        StartSpriteAnim(&gSprites[gPlayerAvatar.spriteId], gFieldEffectArguments[2]);
        FieldEffectActiveListRemove(FLDEFF_FIELD_MOVE_SHOW_MON);
        gTasks[taskId].func = Task_FieldEffectShowMon_Cleanup;
    }
}

static void Task_FieldEffectShowMon_Cleanup(u8 taskId)
{
    FLDEFF_CALL_FUNC_IN_DATA();
    gPlayerAvatar.preventStep = FALSE;
    DestroyTask(taskId);
}

bool8 SetUpFieldMove_RockSmash(void)
{
    if (CheckObjectGraphicsInFrontOfPlayer(OBJ_EVENT_GFX_ROCK_SMASH_ROCK) == TRUE)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = sub_80C9A10;
        return TRUE;
    }
    return FALSE;
}

static void sub_80C9A10(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    ScriptContext1_SetupScript(EventScript_FldEffRockSmash);
}

bool8 FldEff_UseRockSmash(void)
{
    u8 taskId = CreateFieldEffectShowMon();

    FLDEFF_SET_FUNC_TO_DATA(sub_80C9A60);
    IncrementGameStat(GAME_STAT_USED_ROCK_SMASH);
    return FALSE;
}

static void sub_80C9A60(void)
{
    PlaySE(SE_M_ROCK_THROW);
    FieldEffectActiveListRemove(FLDEFF_USE_ROCK_SMASH);
    EnableBothScriptContexts();
}

// The important part is handled by EventScript_Headbutt, but I'm following Rock Smash's lead :P
static void FieldMove_Headbutt(void)
{
    PlaySE(SE_NOT_EFFECTIVE);
    FieldEffectActiveListRemove(FLDEFF_USE_HEADBUTT);
    EnableBothScriptContexts();
}

bool8 FldEff_UseHeadbutt(void)
{
    u8 taskId = CreateFieldEffectShowMon();

    gTasks[taskId].data[8] = (u32)FieldMove_Headbutt >> 16;
    gTasks[taskId].data[9] = (u32)FieldMove_Headbutt;
    IncrementGameStat(GAME_STAT_USED_HEADBUTT);
    return FALSE;
}

// Called when Headbutt is used from the party menu
// For interacting with a headbuttable tree in the field, see EventScript_Headbutt
bool8 SetUpFieldMove_Headbutt(void)
{
    GetXYCoordsOneStepInFrontOfPlayer(&gPlayerFacingPosition.x, &gPlayerFacingPosition.y);
    if (MapGridGetMetatileBehaviorAt(gPlayerFacingPosition.x, gPlayerFacingPosition.y) == MB_HEADBUTT)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Headbutt;
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static void FieldCallback_Headbutt(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    ScriptContext1_SetupScript(EventScript_UseHeadbutt);
}
