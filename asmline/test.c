int test(int src)
{
    int dst;
    asm volatile( \
        "move.l  %1,%0\n\t"
        "add.l  #1,%0\n\t"
    : "=r" (dst)
    : "r" (src)
    );
    return dst;
}
