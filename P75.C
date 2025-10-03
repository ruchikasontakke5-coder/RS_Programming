// Program 75: Count digits in a number
#include <stdio.h>
int main() {
    int n = 45678, count = 0;
    while(n != 0) {
        count++;
        n /= 10;
    }
    printf("Number of digits = %d", count);
    return 0;
}
