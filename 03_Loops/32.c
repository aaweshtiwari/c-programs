// 32. WAP to find the sum of digits of a given number.
// For example:-
// Number=4371
// Sum of digits=4+3+7+1=15


#include <stdio.h>

int main()
{
    long long num;
    int count = 0, sum;

    printf("Enter number to find sum of digit of number = ");
    scanf("%lld", &num);

    if(num == 0){
        sum = 0 ;
    }else{
        while (num != 0)
        {
            num = num / 10;
            count++;
            sum = sum + count;
        }
        printf("%d", sum);
        
    }

    return 0;
}