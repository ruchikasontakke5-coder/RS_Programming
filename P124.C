#include <stdio.h>
int main() {
    for(int n = 1; n <= 5; n++) {
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %d\n", n, fact);
    }
    return 0;
}
