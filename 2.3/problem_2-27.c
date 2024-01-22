#include <stdio.h>
#include <math.h>

int uadd_ok(unsigned x, unsigned y, int word_size) {
    double p = pow(2, word_size);
    unsigned s = (x + y)% (int) p;
    return s >= x;
}

int main() {
    unsigned x = 2;
    unsigned y = 3;
    int f = uadd_ok(x, y, 4);
    printf("Can add: %d", f);
}