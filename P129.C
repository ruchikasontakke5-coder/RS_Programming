#include <stdio.h>
int main() {
    for(int n = 1; n <= 5; n++) {
        int sum = 0, num = n;
        for(; num > 0; num /= 10)
            sum += num % 10;
        printf("Sum of digits of %d = %d\n", n, sum);
    }
    return
