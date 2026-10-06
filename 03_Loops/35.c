// 35. WAP to print the multiplication of numbers which are divisible by 7 between 11 and 30.

#include <stdio.h>

int main()
{
    int multi = 1;
    for (int i = 11; i <= 30; i++)
    {
        if (i % 7 == 0)
        {
            multi = multi * i;
        }
        
    }

    printf("multiplicaltion of numbers which are divisible by 7 b/w 11 to 30= %d", multi);
    

    return 0;
}