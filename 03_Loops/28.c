// 24. WAP to find how many even numbers present between 61 to 75.

#include <stdio.h>

int main()
{
    int even = 0;
    for (int i = 61; i <= 75; i++)
    {
        if (i % 2 == 0)
        {
           even++;
        }
                
    }
    printf("%d total even numbers present between 61 to 75.", even);
    

    return 0;
}