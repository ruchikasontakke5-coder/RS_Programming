// Program 7: Add numbers using a loop
#include <stdio.h>
int main() {
    int sum = 0, num, i;
    for(i = 0; i < 5; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        sum += num;
    }
    printf("Total Sum = %d", sum);
    return 0;
}
