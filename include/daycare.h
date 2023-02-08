#ifndef GUARD_DAYCARE_H
#define GUARD_DAYCARE_H

#include "global.h"
#include "constants/daycare.h"

u8 *GetMonNick(struct Pokemon *mon, u8 *dest);
u8 *GetBoxMonNick(struct BoxPokemon *mon, u8 *dest);
u8 CountPokemonInDaycare(struct DayCare *daycare);
void InitDaycareMailRecordMixing(struct DayCare *daycare, struct RecordMixingDayCareMail *daycareMail);
void StoreSelectedPokemonInDaycare(void);
u16 TakePokemonFromDaycare(void);
void GetDaycareCost(void);
u8 GetNumLevelsGainedFromDaycare(void);
u16 GetEggSpecies(u16 species);
void TriggerPendingDaycareEgg(void);
void RejectEggFromDayCare(void);
void CreateEgg(struct Pokemon *mon, u16 species, bool8 setHotSpringsLocation);
void GiveEggFromDaycare(void);
bool8 DoEggActions_CheckHatch(void);
u16 GetSelectedMonNickAndSpecies(void);
void GetDaycareMonNicknames(void);
u8 GetDaycareState(void);
void SetDaycareCompatibilityString(void);
bool8 NameHasGenderSymbol(const u8 *name, u8 genderRatio);
void ShowDaycareLevelMenu(void);
void ChooseSendDaycareMon(void);

void ScriptHatchMon(void);
bool8 sub_8071614(void);
void EggHatch(void);
u8 GetEggStepsToSubtract(void);
u16 sub_80722E0(void);
bool8 ShouldEggHatch(void);
u8 GetEggMoves(struct Pokemon *pokemon, u16 *eggMoves);
u8 GetEggMovesSpecies(u16 species, u16 *eggMoves);
bool8 SpeciesCanLearnEggMove(u16 species, u16 move);

#endif // GUARD_DAYCARE_H
