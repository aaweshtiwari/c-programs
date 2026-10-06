// 40. DRY RUN the following program and see what will be your EXPECTED OUTPUT.

 #include <stdio.h>
 void main()
 { 
 int a=1, b=2, c=3, d=4;
 printf("%d ", a);
 goto L1;
 printf("%d ", b);
 L1: goto L2;
 printf("%d ", c);
 L2: printf("%d ", d);
 }

//  here is explaination

// int a=1, b=2, c=3, d=4 -- all integer variables stores a value;
// printf("%d ", a) -- this is display the value of "a" with one space;
// goto L1; -- this is "goto" statement, used to go "L1" label;
// printf("%d ", b) -- this is display the value of "b" with one space;
// L1: goto L2 -- this is use to go at "L2" label form "L1" label;
// printf("%d ", c) -- this is display the value of "c" with one space;
// L2: printf("%d ", d) -- this is for display the value of "d" with one space when come to "L2" label;

// first assign the value to all integer variables(int a=1, b=2, c=3, d=4);
// then print the value of "a" using "printf" function;
// then goes to "L1" label by "goto" statement-- skip the print of "b" because program already goes to "L1" label;
// then "L1" also use "goto" statement so again skip the print of "c" and program goes to "L2" label and print the value of "d" and program finished;
// so output is -- "1 4";