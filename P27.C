// Program 27: Average of three user-input numbers
#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Average = %.2f", (a + b + c) / 3);
    return 0;
}
