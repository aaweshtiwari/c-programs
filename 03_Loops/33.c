// 33. WAP to reverse a given number.
// For example:-
// Number=6402
// Reverse Number=2046


#include <stdio.h>

int main()
{
    int num, digit, reverse = 0;
    printf("Enter number to reverse the number = ");
    scanf("%d", &num);

    if(num == 0 ){
        num = 0;
        printf("%d", num);
    }else{
        while (num != 0 )
        {
            digit = num % 10;
            num = num / 10;
            reverse = reverse * 10 + digit;
            

            
        }
        
        printf("%d", reverse);
    }

    return 0;
}