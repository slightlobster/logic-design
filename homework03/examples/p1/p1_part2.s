.data
// int X = 0xbead;
X: 0xbead

.text
main:               // int main()
                    // {
ldi r1, X     	  //     int* r1_X_ptr = &X;
ld  r2, r1, 0       //     int  r2_v = *X_ptr;
quit                // }
