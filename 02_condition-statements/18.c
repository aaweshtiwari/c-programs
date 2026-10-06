// 18. WAP to find greater number amongst two numbers.

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("To find greater number between two numbers \n");
    printf("Enter first number = ");
    scanf("%d", &num1);
    printf("Enter second number = ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d is the greater number.", num1);
    }else if (num2 > num1)
    {
       printf("%d is the greater number.", num2);
    }else{
        printf("Both numbers are equal %d = %d", num1, num2);
    }
    


    return 0;
}