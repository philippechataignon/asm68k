    XDEF    _asm_multiply

_asm_multiply:
    MOVE.L  D2,-(SP)
    MOVE.L  D0,-(SP)    ; A
    MULU.W  D1,D0       ; D0=Al*Bl
    MOVE.L  D1,D2       ; B
    MULU.W  (SP)+,D1    ; D1=Ah*Bl
    SWAP    D2          ; D2=Bh
    MULU.W  (SP)+,D2    ; D2=Al*Bh
    ADD.W   D2,D1
    SWAP    D1
    MOVE.L  (SP)+,D2
    CLR.W   D1
    ADD.L   D1,D0
    RTS
