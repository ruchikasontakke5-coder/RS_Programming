// Program 28: Average of 5 numbers using array
#include <stdio.h>
int main() {
    float arr[5], sum = 0;
    int i;
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    printf("Average = %.2f", sum / 5);
    return 0;
}
