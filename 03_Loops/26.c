// 22. WAP to find sum from 1 to 100.

#include <stdio.h>

int main()
{
    int num = 0;
    for ( int i = 0; i <= 100; i++)
    {
        num = num + i;
        // printf("%d \n", num);
    }
    printf("%d is the sum of 1 to 100", num);
    

    return 0;
}