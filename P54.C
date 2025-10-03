// Program 54: GST Calculator
#include <stdio.h>
int main() {
    float amount = 1000, gstRate = 18;
    float gst = (amount * gstRate) / 100;
    printf("GST = %.2f", gst);
    return 0;
}
