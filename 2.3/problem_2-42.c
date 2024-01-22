/*
“Write a function div16 that returns the value x/16 for integer argument x.
Your function should not use division, modulus, multiplication, any conditionals (if or ?:),
any comparison operators (e.g., <, >, or ==), or any loops. You may assume that data type int is 32 bits long and
uses a two's-complement representation, and that right shifts are performed arithmetically.”
*/

#include <stdio.h>

int div16(int x) {
    // divide by 16 = 2**k = 2**4; k = 4
    return (x < 0 ? x + (1 << 4) : x) >> 4;;
}

int div16NoCond(int x) {
    // divide by 16 without using conditional statements.
    // We'll use bit masking. x >> 31 will shift all the bits
    // rigth leaving either all 1s or all 0s. 0xF (15). Then we'll
    // mask the undesired bits leaving us with the biais we need
    int biais = x >> 31 & 0xF;
    return (x+biais) >> 4;
}

int main() {
    int r = div16NoCond(32);
    printf("result: %d", r);
}