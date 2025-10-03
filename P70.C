// Program 70: Power of a number (a^b)
#include <stdio.h>
int main() {
    int base = 2, exp = 3, result = 1;
    for(int i = 1; i <= exp; i++)
        result *= base;
    printf("%d^%d = %d", base, exp, result);
    return 0;
}
