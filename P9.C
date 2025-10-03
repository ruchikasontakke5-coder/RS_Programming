// Program 9: Add two numbers using a function
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int x = 10, y = 20;
    printf("Sum = %d", add(x, y));
    return 0;
}
