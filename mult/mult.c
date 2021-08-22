#include <stdint.h>
typedef uint32_t u32;
typedef int32_t  s32;
typedef uint16_t u16;
typedef int16_t  s16;

s32 mult (s32 a, s32 b)
{
    s16 al = a & 0xffff;
    s16 ah = a >> 16;
    s16 bl = b & 0xffff;
    s16 bh = b >> 16;

    s32 z1 = ah * bh;
    s32 z2 = al * bl;
    s32 z3 = (ah - al) * (bh - bl);

    return (z1 << 32) + ((z1 + z2 - z3) << 16) + z2;
}
