#include <stdio.h>

int X = 0xbead;
int main()
{
    int* X_ptr = &X;
    int  v = *X_ptr;

    //for demonatration only, not translated to albaCore
    printf ("address of X: %X\n", X_ptr);
    printf ("X is: %X\n", v);
}

