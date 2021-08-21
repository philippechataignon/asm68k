#NO_APP
	.text
.LC0:
	.ascii "Hello Bitmap Brothers!\0"
.LC1:
	.ascii "Press Enter\0"
	.even
	.globl	_main
_main:
	link.w %fp,#0
	jsr ___main
	pea .LC0
	jsr _puts
	pea .LC1
	jsr _printf
	move.l _stdin,%a0
	move.l 4(%a0),%d0
	addq.l #8,%sp
	cmp.l 8(%a0),%d0
	jcc .L2
	addq.l #1,%d0
	move.l %d0,4(%a0)
	unlk %fp
	rts
.L2:
	move.l %a0,-(%sp)
	jsr ___fillbf
	addq.l #4,%sp
	unlk %fp
	rts
