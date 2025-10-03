// Program 57: Currency Conversion (USD to INR)
#include <stdio.h>
int main() {
    float usd, rate = 83.20;
    printf("Enter amount in USD: ");
    scanf("%f", &usd);
    float inr = usd * rate;
    printf("%.2f USD = %.2f INR", usd, inr);
    return 0;
}
