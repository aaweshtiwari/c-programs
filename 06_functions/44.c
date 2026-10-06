// 44. WAP to print the a^a using function.

#include <stdio.h>

long long power(int num){
    long long result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * num;
    }
    
    return result;
}

int main()
{
    int num;
    long long result = 1;

    printf("Enter a number = ");
    scanf("%d", &num);

    result = power(num);
    printf("%d^%d = %lld", num, num, result);

    return 0;
}