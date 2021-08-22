#include <stdint.h>
typedef uint32_t u32;
typedef int32_t  s32;
typedef uint16_t u16;
typedef int16_t  s16;

typedef struct {
    s32* adr;
    s16 nbdim;
} desc;


static inline s32 mulsi3(s32 a, s32 b)
{
    u32 r = 0;
    while (a) {
        // if a is odd, add b to r
        if (a & 1)
          r += b;
        // divide a by 2
        a >>= 1;
        // multiply b by 2
        b <<= 1;
    }
    return r;
}

s32 arrptr(desc* p)
{
    s32* base = p->adr;
    s32* a = base + p->nbdim;
    s32 len = 1;
    s16 d = 0;
    for (d=0; d < p->nbdim; d++) {
        len = mulsi3(len, base[d]);
    }
    for (s32 i = 0; i < len; i++) {
        a[i] = i;
    }
    return 0;
}

