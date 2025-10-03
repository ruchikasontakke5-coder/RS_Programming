// Program 62: Check if number is prime
#include <stdio.h>
int main() {
    int n = 7, i, flag = 0;
    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }
    if(n <= 1) flag = 1;
    if(flag == 0)
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);
    return 0;
}
