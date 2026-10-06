// 45. WAP to print the given series using function.
//  x^1+x^3+x^5+x^7+x^9+...

#include <stdio.h>

long long series(int x, int p){
    long long result = 1;
    for (int i = 1; i <= p; i++)
    {
        result = result * x;
    }
    
    return result;
}

int main()
{
    int x, n, p = 1;
    long long term;

    printf("Enter the number = ");
    scanf("%d", &x);
    printf("Enter how many terms you want to repeat = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        term = series(x, p);
        printf("%lld", term);
        if(i < n){
          printf(" + ");
        }

        p = p + 2;
    }
    


    return 0;
}