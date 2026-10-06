// 19. WAP to find greater amongst three numbers.

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("To find greater number in three numbers - \n");
    printf("Enter first number = ");
    scanf("%d",&num1);
    printf("Enter second number = ");
    scanf("%d",&num2);
    printf("Enter third number = ");
    scanf("%d",&num3);

    if(num1 > num2 && num1 > num3){
        printf("%d is the greater number",num1);
    }else if (num2 > num1 && num2 > num3)
    {
       printf("%d is the greaater number", num2);
    }else if (num3 > num2 && num1 < num3)
    {
      printf("%d is the greaater number", num3);
    }else if (num1 == num2 && num1 == num3)
    {
      printf("All numbers are equal");
    }else if (num1 == num2 && num1 > num3)
    {
       printf("First and Second number are equal and greater numbers- first: %d = second: %d", num1, num2);
    }else if (num3 == num2 && num3 > num1)
    {
       printf("Second and Third number are equal and greater numbers- Second: %d = Third: %d", num2, num3);
    }else if (num3 == num1 && num3 > num2)
    {
       printf("First and Third number are equal and greater numbers- First: %d = Third: %d", num1, num3);
    }
    
    
    

    return 0;
}