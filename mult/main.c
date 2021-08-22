#include <stdio.h>

int asm_multi(int a, int b);

int main()
{
    unsigned int a = 132121312L;
    unsigned int b = 11L;
    unsigned int r = 0;
    for(int i = 0; i < 100000; i++) {
       r = asm_multi(a, b);
    }
    printf("r=%d\n", r);
    return 0;
}
