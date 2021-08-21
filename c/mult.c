#include <stdio.h>
unsigned int
mult (unsigned int a, unsigned int b)
{
    unsigned int al = a & 0xffff;
    unsigned int ah = a >> 16;
    unsigned int bl = b & 0xffff;
    unsigned int bh = b >> 16;

    unsigned int z1 = ah * bh;
    unsigned int z2 = al * bl;
    unsigned int z3 = (ah - al) * (bh - bl);

    printf("al=%d ah=%d bl=%d bh=%d\n", al, ah, bl, bh);
    printf("z1=%d z2=%d z3=%d z1 + z2 - z3=%d\n", z1, z2, z3, z1 + z2 - z3);

    return (z1 << 32) + ((z1 + z2 - z3) << 16) + z2;
}

int main()
{
    printf("%d\n", mult(132121312, 11));
    return 0;
}
