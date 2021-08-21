#include <stdio.h>
unsigned int
__mulsi3 (unsigned int a, unsigned int b)
{
  unsigned int r = 0;

  while (a)
    {
      printf("a=%d b=%d r=%d\n", a, b, r);
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

int main()
{
    printf("%d\n", __mulsi3(132121312, 11));
    return 0;
}
