# VASM PARAMETERS
AS=vasmm68k_mot
ASFLAGS=-quiet -Faout -x -m68000

# GCC PARAMETERS
LIBCMINI=~/src/libcmini
CC=m68k-atari-mint-gcc
CFLAGS=-c -fomit-frame-pointer -std=c99 -I $(LIBCMINI)/include -g -Wl,--traditional-format

# LINKER PARAMETERS
LDFLAGS=-nostdlib -s -L $(LIBCMINI)/lib -lcmini -lgcc

CSRC=$(wildcard *.c)
SSRC=$(wildcard *.s)
COBJ=$(CSRC:.c=.o)
SOBJ=$(SSRC:.s=.o)
TARGET=main.tos

$(TARGET): $(COBJ) $(SOBJ)

$(COBJ): $(CSRC)
$(SOBJ): $(SSRC)

$(TARGET): $(COBJ) $(SOBJ)
	$(CC) $(LIBCMINI)/lib/crt0.o $(COBJ) $(SOBJ) $(LDFLAGS) -o $(TARGET) 

clean:
	rm -f $(TARGET) $(COBJ) $(SOBJ) 
