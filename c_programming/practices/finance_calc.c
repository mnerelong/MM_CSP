// MM 6th CSP Financial Calculator
#include <stdio.h>

int main(void){

    float monthly_income;
    float rent;
    float utilities;
    float groceries;
    float transport;
    printf("What is your monthly income?\n");
    scanf("%f", &monthly_income);
    printf("What is your rent/mortgage?\n");
    scanf("%f", &rent);
    printf("How much do you typically spend on utilities?\n");
    scanf("%f", &utilities);
    printf("How much do you typically spend on groceries?\n");
    scanf("%f", &groceries);
    printf("How much do you typically spend on transport?\n");
    scanf("%f", &transport);

    float left = monthly_income - rent - utilities - groceries - transport;

    printf("Your rent/mortgage is %1.2f, which is %1.2f%% of your income.", 4.11, 4.11);
    return 0;
}
