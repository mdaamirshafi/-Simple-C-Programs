#include <stdio.h>

int main() {
    char ch;
    int count=0;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("%c is an uppercase letter\n", ch);
        count++;}
    else if (ch >= 'a' && ch <= 'z'){
        printf("%c is a lowercase letter\n", ch);
        count++;}
    else  printf("%c is not a letter\n", ch);

    return 0;
}
