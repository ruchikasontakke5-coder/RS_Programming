// Program 29: Calculate percentage from marks
#include <stdio.h>
int main() {
    float m1, m2, m3, total, percent;
    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    percent = (total / 300) * 100;
    printf("Percentage = %.2f%%", percent);
    return 0;
}
