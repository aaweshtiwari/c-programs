// 3. WAP to add two integer variable.

#include <stdio.h>

int main()
{
    int num1, num2, sum;

    // printf("Enter two number for sum:");
    // scanf("%d %d", &num1,&num2);

    // if want to take different inputs for two different numbers 
    printf("Enter First Number:");
    scanf("%d", &num1);
    printf("Enter Second Number:");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum =  %d", sum);

    return 0;
}