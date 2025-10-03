#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Cube of %d = %d\n", i, i * i * i);
    }
    return 0;
}
