// 7. WAP to find the temperature in Celsius where temperature is given in farenhite.

#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter temperature in farenhite : ");
    scanf("%f", &f);
    c = (((f - 32) * 5)/9); 
    printf("Temperature in Celsius = %f c", c);
    return 0;
}