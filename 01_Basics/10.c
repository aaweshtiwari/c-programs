// 10. WAP to calculate the percentage of a student marks where marks will be entered through keyboard and amongst five subject two subject of maximum 50 marks and remaining subjects of maximum 100 marks.

#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    float percentage;
    int total = (2 * 50) + (3 * 100);
    printf("Enter first subject number (less than 50) ; ");
    scanf("%d", &m1);
    printf("Enter second subject number (less than 50) ; ");
    scanf("%d", &m2);
    printf("Enter third subject number (less than 100) ; ");
    scanf("%d", &m3);
    printf("Enter fourth subject number (less than 100) ; ");
    scanf("%d", &m4);
    printf("Enter fifth subject number (less than 100) ; ");
    scanf("%d", &m5);


    percentage = (m1 + m2 + m3 + m4 + m5) * 100/ total;

    printf("Percentage = %f percent", percentage);

    return 0;
}
