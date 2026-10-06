// 43. WAP to calculate the factorial of a given number using function.

#include <stdio.h>

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    
    return fact;
}

int main()
{
    int num, result;

    printf("Enter Number to get factorial = ");
    scanf("%d", &num);

    result = factorial(num);
    printf("Factorial of %d = %d", num, result);
    return 0;
}