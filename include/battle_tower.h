#ifndef GUARD_BATTLE_TOWER_H
#define GUARD_BATTLE_TOWER_H

#include "global.h"
#include "constants/battle_tower.h"

#define BATTLE_TOWER_EREADER_TRAINER_ID 200
#define BATTLE_TOWER_RECORD_MIXING_TRAINER_BASE_ID 100

struct BattleTowerTrainer
{
    u8 trainerClass;
    u8 name[3];
    u8 teamFlags;
    u16 greeting[6];
};

struct BattleTowerPokemonTemplate
{
    u16 species;
    u8 heldItem;
    u8 teamFlags;
    u16 moves[4];
    u8 evSpread;
    u8 nature;
};

struct FacilityMon
{
    u16 species;
    u16 moves[MAX_MON_MOVES];
    u8 itemTableId;
    u8 evSpread;
    u8 nature;
};

extern const u16 gBattleTowerBannedSpecies[];

u16 sub_8164FCC(u8, u8);
void ClearEReaderTrainer(struct BattleTowerEReaderTrainer *);
void ValidateEReaderTrainer(void);
u8 GetBattleTowerTrainerFrontSpriteId(void);
u8 GetEreaderTrainerFrontSpriteId(void);
void CopyEReaderTrainerName5(u8 *dest);
void GetBattleTowerTrainerName(u8 *text);
u8 GetEreaderTrainerClassId(void);
u8 GetBattleTowerTrainerClassNameId(void);
void SetMonMoveAvoidReturn(struct Pokemon *mon, u16 moveArg, u8 moveSlot);
extern const u16 gBattleTowerHeldItems[];
extern const struct FacilityMon gBattleFrontierMons[];
extern const struct FacilityMon *gFacilityTrainerMons;

#endif //GUARD_BATTLE_TOWER_H
