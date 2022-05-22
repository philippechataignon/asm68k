        move.l  #msg,a3
lp:     clr.w   d0
        move.b  (a3)+,d0
        beq.s   done
        move.w  d0,-(sp)
        move.w  #2,-(sp)
        move    #3,-(sp)
        trap    #13
        addq.l  #6,sp
        bra.s   lp
done:   
        move.w    #4,-(sp)      ; 4 = kbd
        move.w    #2,-(sp)     ; Offset 0
        trap      #13          ; Call BIOS
        addq.l    #4,sp        ; Correct stack

        move.w  #2,-(sp)
        move.w  #2,-(sp)
        trap    #13
        addq.l  #4,sp
        clr.w   -(sp)
        trap    #1

msg     dc.b   "Hello World !",0
