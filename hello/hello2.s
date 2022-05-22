cconws = 9
cnecin = 8
gemdos = 1

        text
        pea     msg
        move.w  #cconws,-(sp)
        trap    #gemdos
        add.l   #6,sp

        move.w  #cnecin,-(sp)
        trap    #gemdos
        add.l   #2,sp
                            
        clr.w   -(sp)           ; gemdos pterm0
        trap    #gemdos

        data
msg     dc.b   "Hello World !\r\n"
        dc.b   "This is line 2.\r\n",0
count = * - msg        
