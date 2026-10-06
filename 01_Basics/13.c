// 13. WAP to convert UPPER case letter in to lower case letter.

// note -> lowercase = UPPERCASE + 32;


#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your UPPERCASE letter : ");
    scanf("%c", &ch);
    ch = ch + 32;
    printf("This is lowercase letter of your UPPERCASE letter = %c", ch);

    return 0;
}