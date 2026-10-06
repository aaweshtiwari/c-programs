// 38. WAP to display user details using switch case where user enters his/her id from keyboard.

#include <stdio.h>

int main()
{
    int id;

    printf("Enter your id = ");
    scanf("%d", &id);

    switch (id)
    {
    case 101:
        printf(" Roll No. : 101\n Name : Aawesh Tiwari\n Branch : C.S.E");
        break;
    case 102:
        printf(" Roll No. : 102\n Name : Shivanshi \n Branch : Fashion Designer");
        break;
    case 103:
        printf(" Roll No. : 103\n Name : Anjali Yadav\n Branch : Mechanical");
        break;
    
    default:
        break;
    }

    return 0;
}