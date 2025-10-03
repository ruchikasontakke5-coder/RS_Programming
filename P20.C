// Program 20: Multiply using function
#include <stdio.h>
float multiply(float a, float b) {
    return a * b;
}
int main() {
    float a = 3.5, b = 2.5;
    printf("Result = %.2f", multiply(a, b));
    return 0;
}
