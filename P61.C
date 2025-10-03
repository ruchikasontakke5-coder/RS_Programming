// Program 61: Factorial of a number
#include <stdio.h>
int main() {
    int n = 5, i;
    unsigned long long fact = 1;
    for(i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial of %d = %llu", n, fact);
    return 0;
}
