// 14. WAP to swap two numbers without using third variable.


#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Second Number : ");
    scanf("%d", &num2);

    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;

    printf("After swapping your numbers - \n");
    printf("This is your first number = %d \n", num1);
    printf("This is your second number = %d", num2);

    return 0;
}