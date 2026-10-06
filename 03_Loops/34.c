// 34. WAP to find the sum of 50 numbers from user and if at any point entered data is divisible by 35 then stop the process.

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter 50 numbers = ");
    for (int i = 1; i <= 50; i++)
    {
        scanf("%d", &num);

        sum = sum + num;

        if (num % 35 == 0)
        {
            printf("This number is divisible by 35. \n");
            break;
        }
        
    }
    
    printf("This is the sum of all numbers = %d", sum);


    return 0;
}