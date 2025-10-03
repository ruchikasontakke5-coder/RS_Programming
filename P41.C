// Program 41: Decimal to Binary
#include <stdio.h>
int main() {
    int num = 10, binary[32], i = 0;
    while(num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }
    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    return 0;
}
