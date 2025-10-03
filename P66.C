// Program 66: Find LCM of two numbers
#include <stdio.h>
int main() {
    int a = 15, b = 20, max;
    max = (a > b) ? a : b;
    while(1) {
        if(max % a == 0 && max % b == 0) {
            printf("LCM = %d", max);
            break;
        }
        ++max;
    }
    return 0;
}
