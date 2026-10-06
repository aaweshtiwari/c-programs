// 4. WAP to calculate the Simple Interest where Principal Amount, Interest Rate and Time Duration will be entered through keyboard.

#include <stdio.h>

int main()
{
    int principleAmount, rateofInterest, time, SI;
    printf("Enter Principal Amount : ");
    scanf("%d", &principleAmount);
    printf("Enter Rate of Interest : ");
    scanf("%d", &rateofInterest);
    printf("Enter Time : ");
    scanf("%d", &time);

    SI = ((principleAmount * rateofInterest * time)/100) ;
    printf("Simple Interest = %d", SI);

    return 0;
}