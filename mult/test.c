#include <stdio.h>
#include <stdint.h>

int32_t f(int32_t x, int32_t y)
{
  int64_t z = x*y;
  return z;
}

int main()
{
    printf("%lld\n", f(121312,11));
    fgetc(stdin);
    return 0;
}
