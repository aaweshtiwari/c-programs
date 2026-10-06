// 9. WAP to swap two integer variable.

#include <stdio.h>

int main()
{
    int num1, num2, swap;
    printf("You need to enter to numbers for swapping \n");

    printf("Enter first number :");
    scanf("%d", &num1);
    printf("Enter second number :");
    scanf("%d", &num2);
    
    swap = num1;
    num1 = num2;
    num2 = swap;

    printf("First number = %d \n", num1);
    printf("Second number = %d", num2);

    return 0;
}