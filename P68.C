// Program 68: Check if number is palindrome
#include <stdio.h>
int main() {
    int n = 121, original = n, rev = 0;
    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if(original == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
