// 48. WAP to check whether a given number is a prime number or not using function.

#include <stdio.h>

int prime(int num);

int main()
{
    int num, flag;
    printf("Enter a Number = ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Not Prime");
    }else{
        flag = prime(num);
    }
    
    if (flag == 0)
    {
        printf("Prime Number");
    }
    else{
        printf("Not Prime");
    }
    

    return 0;
}

int prime(int num){
    int flag = 0;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        
    }
    
    return flag;
}