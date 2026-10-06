// 36. WAP to make such a pattern like a pyramid with an asterisk.
//    * 
//   *** 
//  ***** 
// *******

#include <stdio.h>

int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int sp = 1; sp <= 5 - i; sp++)
        {
            printf(" ");
        }
        
        for (int st = 1; st <= (2 * i - 1); st++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    

    return 0;
}