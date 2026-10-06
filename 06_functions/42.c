// 42. WAP to display the sum of odd natural numbers between two given natural numbers using function.

#include <stdio.h>
int sumOdd(int num1, int num2)
{
    int sum = 0;
    for (int i = num1; i <= num2; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int num1, num2, result;
    printf("Enter 2 natural numbers = ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0)
    {
        printf("Please Enter Natural Numbers.");
    }
    else if (num1 == 0 && num2 == 0)
    {
        printf("Enter second number bigger then first number");
    }
    else
    {
        result = sumOdd(num1, num2);

        printf("sum of odd natural numbers between %d and %d = %d ", num1, num2, result);
    }

    return 0;
}