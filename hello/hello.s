bconin = 2
bconout = 3
cons = 2

gemdos = 1
bios = 13

        text

        lea     msg,a3
lp:     clr.w   d0
        move.b  (a3)+,d0
        beq     done
        move.w  d0,-(sp)
        move.w  #cons,-(sp)
        move.w  #bconout,-(sp)
        trap    #bios
        addq.l  #6,sp
        bra     lp
done:   
        move.w    #cons,-(sp)
        move.w    #bconin,-(sp)
        trap      #bios
        addq.l    #4,sp
                            
        clr.w   -(sp)           ; gemdos pterm0
        trap    #gemdos

        data

msg     dc.b   "Hello World !\r\n"
        dc.b   "This is line 2.\r\n",0
