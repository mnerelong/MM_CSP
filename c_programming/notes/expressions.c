// MM 6th CSP Expressions Notes
#include <stdio.h>
#include <math.h> // math!!

int main(void){
    int amount = 411;
    float pi_guess = 3.14;
    double pi_longer = 4.112122; // decimals that are twice as long.

    printf("%1.2f\n", (float)12/5); // cast is specifically stating the data type.
    printf("%1.1f\n", 12/5.0); // at least one number must be a float to be a float. all division is integer division. 
    printf("%d\n", 24 + 2);
    printf("%d\n", 24 - 2);
    printf("%d\n", 12 * 2);
    printf("%f\n", 24 % 5);
    printf("11 ^ 4 = %d\n", (int)pow(11, 4)); //pow = ^

    amount += 1; // Same thing!
    amount ++; // <--
    printf("%d", amount);

    return 0;
}
/*
QUESTION: What is the difference between an integer and a float in C?
    An integer is a number without any sort of deciamals, while a float is a number that has decimals. (ex. an integer would be just 4, but a float would be 4.0 )

How does C handle integer division compared to float division?

List the arithmetic operators available in C and their functions.

What is the modulus operator, and how is it used?

How do you round a float to the nearest integer in C?

What is type casting in C? Provide an example of explicit type casting.

How do compound assignment operators work in C? List three examples.

What is the purpose of the math.h library? Name three functions it provides.

How do you print a float with a specific number of decimal places using printf()?

What happens when you mix integer and float operations in C?
*/