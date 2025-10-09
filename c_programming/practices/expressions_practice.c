// MM 6th CSP Expressions Practice

#include <stdio.h>
#include <math.h>

int main(void){
    int result = 7 - 24/8 * 4 + 6; // I am reusing this variable to practice changing variables. I wouldn't do this if it wasn't a practice.
    printf("7 - 24/8 * 4 + 6 = %d\n", result);
    result = 18/3 - 7 + 2 * 5;
    printf("18/3 - 7 + 2 * 5 = %d\n", result);
    result = 6 * 4/12 + 72/8 - 9;
    printf("6 * 4/12 + 72/8 - 9 = %d\n", result);
    result = (17 - 6/2) + 4 * 3;
    printf("(17 - 6/2) + 4 * 3 = %d\n", (int)(17 - 6/2) + 4 * 3);
    result = -2 * (1 * 4 - 2/2)+ (6 + 2 -3);
    printf("-2(1 * 4 - 2/2)+ (6 + 2 -3) = %d\n", result);
    result = -1 * ((3 - 4 * 7)/5) - 2 * 24/6;
    printf("-1[(3 - 4 * 7)/5] - 2 * 24/6 = %d\n", result);
    result = (3 * pow(5,2)/15) - (5 - pow(2,2));
    printf("(3 * 5^2/15) - (5 - 2^2) = %d\n", result);
    result = (pow(1,4) * pow(2,2) + pow(3,3)) - pow(2,5)/5;
    printf("(1^4 * 2^2 + 3^3) - 2^5/4 = %d\n", result);
    result = pow((22/2 - 2 * 5), 2) + pow((4 - 6/6), 2);
    printf("(22/2 - 2 * 5)^2 + (4 - 6/6)^2 = %d\n", result);
    
    return 0;
}