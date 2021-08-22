#include <stdint.h>
typedef uint32_t u32;
typedef int32_t  s32;
typedef uint16_t u16;
typedef int16_t  s16;

u32 mult (u32 a, u32 b)
{
    u16 al = a & 0xffff;
    u16 ah = a >> 16;
    u16 bl = b & 0xffff;
    u16 bh = b >> 16;

    u32 z1 = ah * bh;
    u32 z2 = al * bl;
    u32 z3 = (ah - al) * (bh - bl);

    return (z1 << 32) + ((z1 + z2 - z3) << 16) + z2;
}
