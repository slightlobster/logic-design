.text
ldi r1, 0x43
ldi r3, 0xab
ldi r10, 0x8
shl r3, r3, r10
ldi r4, 0xcd
or r3, r3, r4
st r3, r1, 0
st r3, r1, 6
quit
