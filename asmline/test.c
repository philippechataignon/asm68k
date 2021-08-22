int test(int src)
{
    int dst;
    __asm__ volatile(
        "move.l  %[src],%[dst]      \n\t"
        "addq.l  #1,%[dst]          \n\t"
    : [dst] "=r" (dst)
    : [src] "r" (src)
    );
    return dst;
}
