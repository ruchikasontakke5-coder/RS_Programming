// Program 69: Check if number is Armstrong (3-digit)
#include <stdio.h>
int main() {
    int n = 153, sum = 0, temp = n;
    while(n != 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    if(sum == temp)
        printf("Armstrong number");
    else
        printf("Not Armstrong");
    return 0;
}
