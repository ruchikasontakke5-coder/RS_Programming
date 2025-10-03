// Program 52: Compound Interest
#include <stdio.h>
#include <math.h>
int main() {
    float p = 1000, r = 5, t = 2;
    float ci = p * pow((1 + r/100), t) - p;
    printf("Compound Interest = %.2f", ci);
    return 0;
}
