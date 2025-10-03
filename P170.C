#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int letters = 0, digits = 0, spaces = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) letters++;
        else if (isdigit(str[i])) digits++;
        else if (isspace(str[i])) spaces++;
    }
    printf("Letters: %d\nDigits: %d\nSpaces: %d", letters, digits, spaces);
    return 0;
}
