// 6. WAP to find the average of three integer value.

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter First number : ");
    scanf("%d", &num1);
    printf("Enter Second number : ");
    scanf("%d", &num2);
    printf("Enter Third number : ");
    scanf("%d", &num3);

    int average = ((num1 + num2 + num3)/3);

    printf("Average of Three Numbers = %d", average);

    return 0;
}