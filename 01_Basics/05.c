// 5. WAP to find the area of circle where radius of circle will be entered through keyboard.

#include <stdio.h>

int main()
{
    float radius, area;
    printf("Enter the Radius of Circle (cm) :");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("Area of Circle = %f cm", area);

    return 0;
}