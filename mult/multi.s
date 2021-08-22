    XDEF    _asm_multi

_asm_multi:
    MOVE.L  4(SP),D0    ; get A,B from stack
    MOVE.L  8(SP),D1
    MOVE.L  D0,-(SP)    ; push D0=A
    MULU.W  D1,D0       ; D0=Al*Bl
    MOVE.L  D1,D2       ; B in D1 and D2
    MULU.W  (SP)+,D1    ; D1=Ah*Bl
    SWAP    D2          ; D2=Bh
    MULU.W  (SP)+,D2    ; D2=Al*Bh
    ADD.W   D2,D1       ; D1=Ah*Bl+Al*Bh
    SWAP    D1          ; same as <<16 
    CLR.W   D1          ;
    ADD.L   D1,D0       ; add to Al*Bl
    RTS
