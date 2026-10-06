// 12. WAP to convert lower case letter in to UPPER case letter.

// note -> UPPERCASE = lowercase -32;

#include <stdio.h>

int main()
{
    char lowercase, uppercase;
    printf("Enter lowercase letter : ");
    scanf("%c", &lowercase);

    uppercase = lowercase - 32;
    printf("This is UPPERCASE letter of your lowercase letter = %c", uppercase);

    return 0;
}