// 3. Add two float numbers
#include <stdio.h>
int main() {
    float a, b, sum;
    printf("Enter two float numbers: ");
    scanf("%f %f", &a, &b);
    sum = a + b;
    printf("Sum = %.2f\n", sum);
    return 0;
}
