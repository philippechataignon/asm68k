#include <stdio.h>

int asm_multi(int a, int b);

int main()
{
    unsigned int a = 12345;
    unsigned int b = 1234;
    unsigned int r = 0;
    for(int i = 0; i < 100000; i++) {
       r = asm_multi(a, b);
    }
    printf("r=%d\n", r);
    getchar();
    return 0;
}
