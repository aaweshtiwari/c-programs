// 46. WAP to check whether a given number is a perfect number or not using function.

#include <stdio.h>

int perfect(int num){
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
       if (num % i == 0)
       {
            sum += i;
       }
       
    }
    return sum;
    
}

int main()
{
    int num, sum = 0;
    printf("Enter a number to check it is a perfect number or not = ");
    scanf("%d", &num);

    sum = perfect(num);
    if(sum == num){
        printf("%d is a perfect number", num);
    }else{
        printf("%d is not a perfect number", num);
    }
    return 0;
}