// 11. WAP to print the ASCII value of every character.

// note -> ASCII value alphabets ko number me represent karti hai aur ye number lowercase alphabet aur uppercase alphabet dono ke liye alag alag hota hai ex- a=97, A=65;

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    printf("ASCII value of %c = %d", ch, ch);

    return 0;
}