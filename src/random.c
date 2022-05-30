#include "global.h"

// The number 1103515245 comes from the example implementation
// of rand and srand in the ISO C standard.

u32 gRngValue;
u32 gRng2Value;

u16 Random(void)
{
    gRngValue = 1103515245 * gRngValue + 24691;
    return gRngValue >> 16;
}

void SeedRng(u16 seed)
{
    gRngValue = seed;
}

u16 RandRange(u16 min, u16 max)
{
    if (min == max)
        return min;

    return (Random() % (max - min)) + min;
}

void SeedRng2(u16 seed)
{
    gRng2Value = seed;
}

u16 Random2(void)
{
    gRng2Value = 1103515245 * gRng2Value + 24691;
    return gRng2Value >> 16;
} 
