// 20. WAP to calculate the discount on the purchase done by user. Discount is given as follows.
//  If purchase amount is less than 1000 then no discount will be given.
//  If purchase amount is greater than or equal to 1000 and less than 2000 discount will be 5%.
//  If purchase amount is greater than or equal to 2000 and less than 3000 discount will be 10%.
//  If purchase amount is greater than or equal to 3000 and less than 4000 discount will be 15%.
//  And If purchase amount is greater than 4000 then discount will be 20%.


#include <stdio.h>

int main()
{
    int amount;
    printf("Enter your total purchase amount to find some special discount for you \n ");
    printf("Enter your amount here = ");
    scanf("%d", &amount);

    if(amount < 1000){
        printf("Opps! there is no discount for you right now, but if you purchase above then 1000 you will definately get some discount");
    }else if (amount >= 1000 && amount < 2000)
    {
        printf("Congratulations! you got 5%% discount on your total purchase amount \n");

        amount = amount - ((amount * 5) / 100);
        printf("Now this is your total amount to pay = %d",amount);
    }else if (amount >= 2000 && amount < 3000)
    {
        printf("Congratulations! you got 10%% discount on your total purchase amount \n");

        amount = amount - ((amount * 10) / 100);
        printf("Now this is your total amount to pay = %d",amount);
    }else if (amount >= 3000 && amount < 4000)
    {
        printf("Congratulations! you got 15%% discount on your total purchase amount \n");

        amount = amount - ((amount * 15) / 100);
        printf("Now this is your total amount to pay = %d",amount);
    }else{
        printf("Congratulations! you got 20%% discount on your total purchase amount \n");

        amount = amount - ((amount * 20) / 100);
        printf("Now this is your total amount to pay = %d",amount);
    }

    

    return 0;
}