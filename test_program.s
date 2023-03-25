.text
.globl f

f:
#initial stack offset: 0
#entering scope 1
addi sp, sp, -4 #new prepared stack offset = -1
sw  a4, 0(sp)
addi sp, sp, -4 #new prepared stack offset = -2
sw  a5, 0(sp)
addi sp, sp, -4 #new prepared stack offset = -3
sw  a6, 0(sp)
addi sp, sp, -4 #new prepared stack offset = -4
sw  a7, 0(sp)
addi sp, sp, -4 #new prepared stack offset = -5
#entering scope 4

#RETURNING
#constant value 3
li a0, 3
li t0, 0 #store true to t0
#exiting scope
addi sp, sp, 0 #new prepared stack offset = -5
#done exiting scope

addi sp, sp, +4 #new prepared stack offset = -4
lw  a7, 0(sp)
addi sp, sp, +4 #new prepared stack offset = -3
lw  a6, 0(sp)
addi sp, sp, +4 #new prepared stack offset = -2
lw  a5, 0(sp)
addi sp, sp, +4 #new prepared stack offset = -1
lw  a4, 0(sp)
addi sp, sp, 4 #new prepared stack offset = 0
ret
