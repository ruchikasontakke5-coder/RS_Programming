// 4. Addition of an array of 5 integers
#include <stdio.h>
int main() {
    int arr[5], i, sum = 0;
    printf("Enter 5 integers: ");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}
