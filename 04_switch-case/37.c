// 37. WAP to implement the calculator using switch case.

#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter First Number = ");
    scanf("%d", &num1);
    printf("Enter Second Number = ");
    scanf("%d", &num2);
    printf("Enter Oprator = ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%d", num1 + num2);
        break;
    case '-':
        printf("%d", num1 - num2);
        break;
    case '*':
        printf("%d", num1 * num2);
        break;
    case '/':
        printf("%d", num1 / num2);
        break;
    
    default:
        printf("Invalid Oprator");
    }

    return 0;
}