// Program 53: EMI Calculator
#include <stdio.h>
#include <math.h>
int main() {
    float P = 50000, R = 10, N = 12;
    float EMI;
    R = R / (12 * 100);
    EMI = (P * R * pow(1 + R, N)) / (pow(1 + R, N) - 1);
    printf("EMI = %.2f", EMI);
    return 0;
}
