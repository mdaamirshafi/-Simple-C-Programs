#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    long factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d: %ld\n", num, factorial);
    return 0;
}
