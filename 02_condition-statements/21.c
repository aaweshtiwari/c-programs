// 21. WAP to print the division of a student where division rules are as follows:
// Percentage above or equal to 60 - First division 
// Percentage between 50 and 59 - Second division 
// Percentage between 40 and 49 - Third division 
// Percentage less than 40 – Fail


#include <stdio.h>

int main()
{
    int precentage;
    printf("Enter your percentage of your total marks to check your grades  = ");
    scanf("%d", &precentage);

    if(precentage >= 60){
        printf("Congratulations! you got first division");
    }else if (precentage <= 59 && precentage >= 50)
    {
        printf("Very good you got second division. I hope next time got First division");
    }else if (precentage <=49 && precentage >= 40)
    {
        printf("Good you got third division. You need to more focused on your studies");
    }else{
        printf(" You are failed, but don't we hopeless, next time work hard with more focus you definately \nget good results");
    }
    return 0;
}