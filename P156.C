#include <stdio.h>
int main() {
    int n, binary = 0, base = 1;
    scanf("%d", &n);
    for (; n > 0; n /= 2) {
        binary += (n % 2) * base;
        base *= 10;
    }
    printf("Binary = %d", binary);
    return 0;
}
