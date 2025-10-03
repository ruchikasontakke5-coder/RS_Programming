// Program 47: Binary to Octal (via decimal)
#include <stdio.h>
int main() {
    int binary, decimal = 0, base = 1, rem;
    printf("Enter binary number: ");
    scanf("%d", &binary);
    while(binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }
    printf("Octal = %o", decimal);
    return 0;
}
