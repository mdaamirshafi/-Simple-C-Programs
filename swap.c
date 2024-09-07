#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Swap numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
