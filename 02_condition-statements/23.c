// 27. WAP to check that a character which is entered by user is a special character, UPPER CASE character or a lower case character.


#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character = ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("%c is a UPPERCASE letter", ch);
    }else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase letter", ch);
    }else if (ch >= '0' && ch <= '9')
    {
       printf("%c is a number", ch);
    }else{
        printf("%c is a special character", ch);
    }
    
    

    return 0;
}