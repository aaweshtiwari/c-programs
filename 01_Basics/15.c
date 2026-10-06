// 15. WAP to find roots of quadratic equation where a, b & c will be entered by user.

// note -> for double data type input use (%lf)

#include <stdio.h>
#include <math.h>

// int main()
// {
//     int a, b, c;
//     double D, root1, root2;

//     printf("Enter value of a = ");
//     scanf("%d", &a);
//     printf("Enter value of b = ");
//     scanf("%d", &b);
//     printf("Enter value of c = ");
//     scanf("%d", &c);

//     D = b*b - 4*a*c;

//     root1 = (-b + sqrt(D))/2*a;
//     root2 = (-b - sqrt(D))/2*a;

//     printf("This value of root1 = %f", root1);
//     printf("This value of root2 = %f", root2);

//     return 0;
// }

// note-> if value of D = negative value then output like -
// This value of root1 = -1.#IND00
// This value of root2 = -1.#IND00
// so in this program using conditional statement is more reliable than simple logic.



// conditional statement 

int main()
{
    int a, b, c;
    double D, root1, root2;

    printf("Enter value of a = ");
    scanf("%d", &a);
    printf("Enter value of b = ");
    scanf("%d", &b);
    printf("Enter value of c = ");
    scanf("%d", &c);

    D = b * b - 4 * a * c;

    if(D < 0){
        printf("No real roots of negative numbers");
    }
    else if (D == 0)
    {
        root1 = ((-b - sqrt(D))/2 * a);
        root2 = ((-b + sqrt(D))/2 * a);
        printf("Both roots are equal, root1:%f = root2:%f", root1, root2);
    }
    else{
        root1 = ((-b - sqrt(D))/2 * a);
        root2 = ((-b + sqrt(D))/2 * a);
        printf("This is the value of root1 = %f \n", root1);
        printf("This is the value of root2 = %f \n", root2);
    }

    return 0;
}