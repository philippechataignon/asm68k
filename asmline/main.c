#include <stdio.h>

int test(int a);

int main()
{
    unsigned int b = 11L;
    printf("r=%d\n", test(b));
    return 0;
}
