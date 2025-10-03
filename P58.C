// Program 58: Calculate Total Bill with Tax
#include <stdio.h>
int main() {
    float amount, taxRate = 18.0;
    printf("Enter base amount: ");
    scanf("%f", &amount);
    float tax = (amount * taxRate) / 100;
    float total = amount + tax;
    printf("Total with tax = %.2f", total);
    return 0;
}
