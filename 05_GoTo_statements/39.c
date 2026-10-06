// 39. DRY RUN the following program and see what will be your EXPECTED OUTPUT.

#include <stdio.h>
void main()
{
    int i = 2;
    EVEN:
    printf("%d ", i);
    i = i + 2;
    if (i <= 20)
    goto EVEN;
}

// here is explaination ===

// int i = 2 -- the variable which is store 2 as a value;
// EVEN: -- This is the label;
// pirntf("%d ", i)-- this is for display value of i with one space;
// i = i + 2 -- it means add 2 in value of i;
// if(i<=20) -- this is a condition to check i is less or equal then 20;
// goto EVEN -- this is the goto statement for EVEN label every time he goto EVEN when if condition is true;

// first this is start with (i = 2) then "EVEN" label use for goto statement;
// printf first print "2" then add "2" in "i" (i = i + 2);
// then "if" check the value of "i" that "i" is less or equal then "20" then goto "EVEN" label again and its excuted until "i" is greater then "20";
// so the output is ====== "2 4 6 8 10 12 14 16 18 20";