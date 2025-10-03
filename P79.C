// Program 79: Check if character is alphabet or not
#include <stdio.h>
int main() {
    char ch = '9';
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Alphabet");
    else
        printf("Not an alphabet");
    return 0;
}
