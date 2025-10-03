// Program 30: Calculate percentage using function
#include <stdio.h>
float getPercentage(float total, float maxMarks) {
    return (total / maxMarks) * 100;
}
int main() {
    float total = 450, max = 500;
    printf("Percentage = %.2f%%", getPercentage(total, max));
    return 0;
}
