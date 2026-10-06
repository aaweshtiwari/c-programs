// 41. WAP to display the cube of the number upto a given integer using function.

#include <stdio.h>

int cube(int num){
    return num * num * num;
}
int main()
{
    int num;
    printf("Enter number to get cube upto number = ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int result = cube(i);
        printf("This is the cube of %d = %d\n", i, result);
    }
    
    return 0;
}