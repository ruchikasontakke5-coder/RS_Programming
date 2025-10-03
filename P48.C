// Program 48: Decimal to Binary using bitwise
#include <stdio.h>
int main() {
    int num = 19;
    for (int i = 7; i >= 0; i--) {
        int k = num >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
    return 0;
}
