#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        printf("2^%d = %.0f\n", i, pow(2, i));
    }
    return 0;
}
