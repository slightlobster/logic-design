//problem 1
.text
ldi r1, 0xFE
ldi r2, 0xDA
not r3, r2
and r4, r1, r3
not r3, r1
and r5, r2, r3
or r0, r4, r5
quit
