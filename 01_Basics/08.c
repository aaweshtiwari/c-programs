// 8. WAP to calculate gross salary where basic salary will be entered through keyboard and DA will 30% of basic salary and HRA will be 18% of basic salary.


#include <stdio.h>

int main()
{
    int basic, DA, HRA, GS;
    printf("Enter your salary to count your gross salary :");
    scanf("%d", &basic);

    DA = basic * 30 / 100;
    HRA = basic * 18 / 100;
    GS = basic + DA + HRA;
    printf("Your Gross Salary = %d Rs.", GS);


    return 0;
}