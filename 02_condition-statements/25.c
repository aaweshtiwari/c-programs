// 29. WAP to input electricity unit charges and calculate total electricity bill according to the given condition:
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include <stdio.h>

int main()
{
    float unit, charge, surcharge, total;
    printf("Enter your total used unit of electricity = ");
    scanf("%f", &unit);

    if (unit <= 50)
    {
        printf("You used less or equal than 50 units, so your per unit charge = 0.50/unit \n");
        charge = unit * 0.50;
        surcharge = charge * 20 / 100;
        total = charge + surcharge;

        printf("%f is your total electricity bill", total);
    }
    // for next 100 units
    else if (unit >= 51 && unit <= 150)
    {
        printf("50 unit charge = 0.50/unit. For next 100 units charge = 0.75/unit \n");
        charge = (unit * 0.75) - 50 * 0.25;
        surcharge = charge * 20 / 100;
        total = charge + surcharge;

        printf("%f is your total electricity bill", total);
    }

    // for next 100 units
    else if (unit >= 151 && unit <= 250)
    {
        printf("50 unit charge = 0.50/unit. For next 100 units charge = 0.75/unit and for next 100 units charge = 1.20/unit \n");
        unit = unit - 150;
        charge = (unit * 1.20) + (100 * 0.75) + (50 * 0.50);
        surcharge = charge * 20 / 100;
        total = charge + surcharge;

        printf("%f is your total electricity bill", total);
    }
    else{
        printf("Above 250 units used, charge = 1.50/unit \n");
        charge = unit * 1.50;
        surcharge = charge * 20 / 100;
        total = surcharge + charge;

        printf("%f is your total electricity bill", total);
    }
    return 0;
}