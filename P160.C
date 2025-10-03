#include <stdio.h>
int main() {
    int n, digit, count = 0;
    scanf("%d %d", &n, &digit);
    for (; n > 0; n /= 10) {
        if (n % 10 == digit)
            count++;
    }
    printf("Frequency = %d", count);
    return 0;
}
