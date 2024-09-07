#include<stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter any two number: ");
    scanf("%d%d", &num1, &num2);
    result = num1+num2;
    printf("\nAddition = %d", result);
    result = num1-num2;
    printf("\nSubtraction = %d", result);
    result = num1*num2;
    printf("\nMultiplication = %d", result);
    result = num1/num2;
    printf("\nDivision = %d", result);
    return 0;
}