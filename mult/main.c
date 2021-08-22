#include <stdio.h>

int asm_multi(int a, int b);

int main()
{
    unsigned int a = 132121312L;
    unsigned int b = 11L;
    printf("%d\n", asm_multi(a, b));
    return 0;
}
