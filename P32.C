// Program 32: Fahrenheit to Celsius
#include <stdio.h>
int main() {
    float fahrenheit = 98.6;
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("Celsius = %.2f", celsius);
    return 0;
}
