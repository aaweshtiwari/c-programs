// 47. WAP to check whether a given number is a armstrong number or not using function.

#include <stdio.h>

int power(int num){
    int temp, digit, count = 0, power, sum = 0;
    temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        power = 1;
        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }
        sum = sum + power;
        temp = temp / 10;
        
    }

    return sum;
    
}

int main()
{
    int num, original, sum;
    printf("Enter a number = ");
    scanf("%d", &num);

    original = num;
    
    sum = power(num);
    
    if (sum == original)
    {
        printf("%d is an armstrong number", original);
    }else{

        printf("%d is not an armstrong number", original);
    }
    
    

    return 0;
}