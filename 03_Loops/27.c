// 23. WAP to find how many positive, negative and zero are being entered by user in 20 numbers.

#include <stdio.h>

int main()
{
    int num, positive = 0, negative = 0, zero = 0;
    printf("Enter 20 numbers to check positive, negative and zero = ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &num);

         if (num > 0)
        {
           positive++;
        }else if (num < 0)
        {
            negative++;
        }else{
            zero++;
        }
    }
    printf("%d are total positive numbers \n", positive);
    printf("%d are total negative numbers \n", negative);
    printf("%d are total zero numbers \n", zero);

}