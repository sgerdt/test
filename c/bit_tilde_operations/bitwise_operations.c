#include "bitwise_operations.h"
#include <stdio.h>
#include <stdlib.h>

char bitwise_check(int number, int bitshift) {
    int newnumber = number;
    //printf("bitwise check bit = (%i >> %i) & 1 : %i\n", number, bitshift, (number >> bitshift) & 1);
    return ((number >> bitshift) & 1) ? 1 : 0;
}

void bitwise_toggle(int number, int bitshift) {
    int newnumber = number;
    // XOR the bitwise
    printf("bitwise toggle %i ^= 1 << %i : %i\n", number, bitshift, newnumber ^= 1 << bitshift);
}

void bitwise_clear(int number, int bitshift) {
    int newnumber = number;
    // AND the "bitwise NOT", inverted from OR by tilde (~)
    printf("bitwise clear %i &= ~(1 << %i) : %i\n", number, bitshift, newnumber &= ~(1 << bitshift));
}

void bitwise_set(int number, int bitshift) {
    int newnumber = number;
    //  OR the bitshift on newnumber to set a bit
    printf("bitwise set %i |= 1 << %i : %i\n", number, bitshift, newnumber |= 1 << bitshift);
    int i;
    printf("checking bits set: ");
    for (i = 7; i >= 0; i--)
        if (bitwise_check(newnumber, i)) printf("1"); else printf ("0");
    printf("\n");
}

void bitshifted_values(int* g) {
    printf("third:  %i\n", *g << 0);
    printf("third:  %i\n", *g << 1);
    printf("third:  %i\n", *g << 2);
    printf("third:  %i\n", *g << 3);
    printf("third:  %i\n", *g << 4);
    printf("third:  %i\n", *g << 5);
    printf("third:  %i\n", *g << 6);
    printf("third:  %i\n", *g << 7);
}

