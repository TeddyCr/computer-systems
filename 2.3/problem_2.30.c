/*“Write a function with the following prototype:
Determine whether arguments can be added without overflow int tadd_ok(int x, int y);
This function should return 1 if arguments x and y can be added without causing overflow.”

Excerpt From
Computer Systems: A Programmer's Perspective
Randal E. Bryant
This material may be protected by copyright.*/

#include <stdio.h>

int tadd_ok(signed int x, signed int y) {
    signed int s = x+y;
    printf("s=%d",s);
    return !((x >= 0 && y >= 0 && s < 0) || (x < 0 && y < 0 && s >= 0));
}

int main() {
    signed int x = -7;
    signed int y = -7;
    int c = tadd_ok(x, y);
    printf("Can add x & y: %d", c);
}