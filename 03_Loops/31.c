// 31. WAP to count the nunber of digits in a given number.
// For example:-
// Number=7896
// Number of digits=4

#include <stdio.h>
#include <math.h>

int main()
{
    long long num;
    int count = 0;
    printf("Enter the number to count how many digits in this number = ");
    scanf("%lld", &num);

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }

    printf("Number of digits = %d", count);

    return 0;
}