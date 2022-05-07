#ifndef GUARD_BATTLE_AI_SCRIPT_COMMANDS_H
#define GUARD_BATTLE_AI_SCRIPT_COMMANDS_H

#include "global.h"

// return values for BattleAI_ChooseMoveOrAction
// 0 - 3 are move idx
#define AI_CHOICE_FLEE 4
#define AI_CHOICE_WATCH 5
#define AI_CHOICE_SWITCH 7

void BattleAI_HandleItemUseBeforeAISetup(void);
void BattleAI_SetupAIData(void);
void BattleAI_HandleItemUseBeforeAISetupNuevo(u8 defaultScoreMoves);
void BattleAI_SetupAIDataNuevo(u8 defaultScoreMoves);
u8 BattleAI_ChooseMoveOrAction(void);
void RecordLastUsedMoveByTarget(void);
void ClearBankMoveHistory(u8 bank);
void RecordAbilityBattle(u8 bank, u8 abilityId);
void ClearBankAbilityHistory(u8 bank);
void CopyBattlerHistoryForTransformedMon(u8 transformUser, u8 transformTarget);
void LearnBattlerHistoryFromTransformedMon(u8 transformUser, u8 transformTarget);
void RecordItemEffectBattle(u8 bank, u8 itemEffect);
void ClearBankItemEffectHistory(u8 bank);
void AI_MarkForcedChange(void);
u8 BattleAI_ChooseMoveOrAction(void);

bool32 OurShedinjaIsVulnerable(u32 battlerAI, u32 opposingBattler, u16 consideredMove);
bool32 IsTruantMonVulnerable(u32 battlerAI, u32 opposingBattler);
s32 CalculateNHKO(u16 attackerId, u16 targetId, bool8 attackerIsCurrentAI, u16 consideredMove, bool8 assumeWorstCaseScenario, bool8 ignoreFocusPunch);

#endif // GUARD_BATTLE_AI_SCRIPT_COMMANDS_H
