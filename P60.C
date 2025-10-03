// Program 60: Percentage Increase or Decrease
#include <stdio.h>
int main() {
    float oldVal, newVal, percentChange;
    printf("Enter old and new value: ");
    scanf("%f %f", &oldVal, &newVal);
    percentChange = ((newVal - oldVal) / oldVal) * 100;
    if(percentChange > 0)
        printf("Increased by %.2f%%", percentChange);
    else if(percentChange < 0)
        printf("Decreased by %.2f%%", -percentChange);
    else
        printf("No Change");
    return 0;
}
