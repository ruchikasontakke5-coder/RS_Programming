#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int sum = 0, temp = i;
        for (; temp != 0; temp /= 10)
            sum += temp % 10;
        printf("Sum of digits of %d = %d\n", i, sum);
    }
    return 0;
}
