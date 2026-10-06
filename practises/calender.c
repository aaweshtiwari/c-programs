#include <stdio.h>

int main()
{
    int year, month, days, start_day, i, leap = 0, noleap = 0;
    printf("Enter year: ");
    scanf("%d", &year);
    if (year <= 0){
        printf("Invalid Year!\n");
        return 0;
    }

    printf("Enter month: ");
    scanf("%d", &month);
    if (month < 1 || month > 12)
    {
        printf("Invalid month!\n");
        return 0;
    }

    if (month == 2)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }
    else
    {
        days = 31;
    }

    start_day = 1;

    for (i = 1; i < year; i++)
    {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)){
            start_day += 366;
            leap++;
            }
        else{
            start_day += 365;
            noleap++;
            
        }
    }

    for (i = 1; i < month; i++)
    {
        if (i == 2)
        {
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                start_day += 29;
            else
                start_day += 28;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            start_day += 30;
        }
        else
        {
            start_day += 31;
        }
    }
    start_day = start_day % 7;

    printf("\nSun Mon Tue Wed Thu Fri Sat\n");

    for (i = 0; i < start_day; i++)
    {
        printf("    ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%3d ", i);
        if ((i + start_day) % 7 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
