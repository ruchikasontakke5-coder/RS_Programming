#include <stdio.h>
int main() {
    int n, isPrime = 1;
    scanf("%d", &n);
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if(n <= 1) isPrime = 0;
    if(isPrime)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
