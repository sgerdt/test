#include <stdio.h>
#include <stdlib.h>
#include "bitwise_operations.h"

static unsigned tilde_zero() {
    return ~0;
}

void tilde_usage() {
    printf("Hello tilde test\n");

    int k = 0;
    printf("k no tilde %i\n", k);
    printf("k with tilde %i\n", ~k);
    printf("~32767: %i\n", ~32767);
    printf("(size + 32767) & ~32767: %i\n", ~32767);
    printf("(50 + 32767) & ~32767: %i\n", (50 + 32767) & ~32767);
    printf("(32767 + 32767) & ~32767: %i\n", (32767 + 32767) & ~32767);
    printf("(32768 + 32767) & ~32767: %i\n", (32768 + 32767) & ~32767);
    printf("(32769 + 32767) & ~32767: %i\n", (32769 + 32767) & ~32767);
    printf("(-1 + 32767) & ~32767: %i\n", (-1 + 32767) & ~32767);
    printf("(10032434 + 32767) & ~32767: %i\n", (10032434 + 32767) & ~32767);
    printf("return unsigned via ~0: %i\n", tilde_zero());
}

int main (char argc, int argv[])
{
    int i;
    for (i = 0; i < 8; i++) {
        bitwise_set(1, i);
    }

    return 0;
}
