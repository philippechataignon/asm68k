#include <stdint.h>
typedef uint32_t u32;
typedef int32_t  s32;
typedef uint16_t u16;
typedef int16_t  s16;

typedef struct {
    s32* adr;
    s16 dim;
} desc;

u16 arrptr(desc* p)
{
    if (p->dim !=1)
        return -1;
    s32* a = p->adr + p->dim;
    s32 len = *(p->adr);
    for (s32 i = 0; i < len; i++) {
        a[i] = i;
    }
    return 0;
}
