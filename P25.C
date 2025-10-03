// Program 25: Division using function
#include <stdio.h>
float divide(float x, float y) {
    if (y == 0) return 0;
    return x / y;
}
int main() {
    float a = 12.5, b = 2.5;
    printf("Result = %.2f", divide(a, b));
    return 0;
}
