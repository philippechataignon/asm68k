// m68k-atari-mint-gcc hello_ge.c -o hello_ge.prg -lgem
#include <gem.h>

int main( void)
{
	appl_init();
	form_alert( 1, "[1][Hello GEM!][OK]");
	appl_exit();
	return 0;
}

