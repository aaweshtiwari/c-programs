// 26. WAP to check wether a person is eligible for VOTING or NOT where age of person will be entered through keyboard.

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age to check you are eligible for votting or not = ");
    scanf("%d", &age);
    if(age >= 18 ){
        printf("You are eligible to vote");
    }else{
        printf("You are note eligible to vote");
    }

    return 0;
}