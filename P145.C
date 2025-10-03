#include <stdio.h>
int main() {
    int n, d, div = 1;
    scanf("%d", &n);
    int temp = n;
    while (temp >= 10) {
        div *= 10;
        temp /= 10;
    }
    for (; div > 0; div /= 10) {
        d = n / div;
        printf("%d ", d);
        n %= div;
    }
    return 0;
}
