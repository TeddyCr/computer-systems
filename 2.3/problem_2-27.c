#include <stdio.h>
#include <math.h>

int uadd_ok(unsigned x, unsigned y) {
    unsigned s = x + y;
    return s >= x;
}

int main() {
    unsigned x = 9;
    unsigned y = 8;
    int f = uadd_ok(x, y);
    printf("Can add: %d", f);
}