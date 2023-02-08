#ifndef GUARD_POKEDEX_SCREEN_H
#define GUARD_POKEDEX_SCREEN_H

extern u8 gUnusedPokedexU8;
extern void (*gUnknown_030060B4)(void);

extern const struct PokedexEntry gPokedexEntries[];

void CB2_OpenPokedexFromStartMenu(void);
s8 DexScreen_GetSetPokedexFlag(u16 nationalDexNo, u8 caseId, bool8 indexIsSpecies);
void ShowPokedexAreaScreen(u16, u8*);
void CopyMonCategoryText(int dexNum, u8 *dest);
int GetStringCenterAlignXOffset(int fontId, const u8 *str, int totalWidth);
int GetStringRightAlignXOffset(int fontId, const u8 *str, int totalWidth);
int GetStringCenterAlignXOffsetWithLetterSpacing(int fontId, const u8 *str, int totalWidth, int letterSpacing);
int GetStringWidthDifference(int fontId, const u8 *str, int totalWidth, int letterSpacing);

#endif //GUARD_POKEDEX_SCREEN_H
