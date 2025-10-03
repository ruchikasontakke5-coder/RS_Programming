// Program 15: Subtract using a function
#include <stdio.h>
int subtract(int a, int b) {
    return a - b;
}
int main() {
    int x = 15, y = 7;
    printf("Result = %d", subtract(x, y));
    return 0;
}
