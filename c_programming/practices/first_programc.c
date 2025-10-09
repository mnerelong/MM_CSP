// MM 6th CSP First Program C
#include <stdio.h>

int main(void){

    char user_name[30];
    printf("Hello! What is your name?\n");
    scanf("%s", &user_name);
    printf("Hello %s! Welcome to UCAS.", user_name);

    return 0;
}