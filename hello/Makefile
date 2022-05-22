all: hello.tos hello2.tos

hello.tos: hello.s
	vasmm68k_mot -Ftos -esc -nosym -L hello.lst -o hello.tos hello.s

hello2.tos: hello2.s
	vasmm68k_mot -Ftos -esc -nosym -L hello2.lst -o hello2.tos hello2.s

clean:
	rm -f *.tos *.lst
