// Program 59: Calculate Profit or Loss
#include <stdio.h>
int main() {
    float costPrice, sellingPrice;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);
    if(sellingPrice > costPrice)
        printf("Profit = %.2f", sellingPrice - costPrice);
    else if(costPrice > sellingPrice)
        printf("Loss = %.2f", costPrice - sellingPrice);
    else
        printf("No Profit No Loss");
    return 0;
}
