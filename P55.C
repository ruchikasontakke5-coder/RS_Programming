// Program 55: Discount Calculator
#include <stdio.h>
int main() {
    float price = 500, discount = 10;
    float discountedPrice = price - (price * discount / 100);
    printf("Final Price = %.2f", discountedPrice);
    return 0;
}
