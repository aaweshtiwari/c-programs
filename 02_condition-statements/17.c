// 17. WAP to find that a year is a leap year or not.


#include <stdio.h>

int main()
{    
    int year;
    printf("Enter year to check this is leap year or not = ");
    scanf("%d", &year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        printf("%d is a Leap Year", year);
    }else{
        printf("%d is not a Leap Year", year);
    }

    return 0;
}