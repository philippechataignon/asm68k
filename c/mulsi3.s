#NO_APP
	.text
	.even
	.globl	___mulsi3
___mulsi3:
	link.w %fp,#0
	move.l 8(%fp),%d1
	move.l 12(%fp),%a0
	moveq #0,%d0
	tst.l %d1
	jeq .L2
.L5:
	lea (%a0,%d0.l),%a1
	btst #0,%d1
	jeq .L4
	move.l %a1,%d0
.L4:
	lsr.l #1,%d1
	add.l %a0,%a0
	jne .L5
.L2:
	unlk %fp
	rts
