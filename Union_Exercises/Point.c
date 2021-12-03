#include <stdio.h>
#include <stdlib.h>

union point{
float abs, ord;
};

int main()
{
    union point P;
    P.abs = 3;
    P.ord = 2;
    printf("(x,y) = (%.1f, %.1f)\n-------------------\n", P.abs, P.ord);
    printf("Byte: %d bytes", sizeof(P));

    return 0;
}
