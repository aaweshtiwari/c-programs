// 30. WAP to find the factorial of a given number using loop.

#include <stdio.h>

int main()
{
    int i, num, fact = 1;
    printf("Enter number to get factorial = ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
    

    return 0;
}