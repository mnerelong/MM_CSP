// MM CSP 6th Update Financial Calculator
#include <stdio.h>

float input(const char* topic){
    float number;
    printf("What is your monthly spending on %s?\n", topic);
    scanf("%f", &number);
    return number;
}

float percentage(float spending, float total_income){
    float percent = (spending/total_income) * 100;
    return percent;
}

void printing(float to_be, float total, const char* topic){
    printf("Your monthly spending on %s is $%1.2f which is %1.0f percent of your total income ($%1.2f).\n", topic, to_be, (to_be/total) * 100, total);
}

int main(void){
    float income;
    printf("What's your monthly income?\n");
    scanf("%f", &income);

    float rent = input("rent/mortgage");
    float utilities = input("utlilities");
    float groceries = input("groceries");
    float transport = input("transport");

    float left = income - rent - utilities - groceries - transport;

    printing(rent, income, "rent/mortgage");
    printing(utilities, income, "utilities");
    printing(groceries, income, "groceries");
    printing(transport, income, "transport");
    printf("You have %f left to spend as you like!\n", left);
    return 0;
}