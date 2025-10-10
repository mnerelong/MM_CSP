// MM 6th CSP Conditionals Notes
#include <stdio.h>
#include <string.h>

int main(void){

    int year;
    printf("What is the year?\n");
    scanf("%d", &year);
    char solution[30];

    if(year > 2025){
        printf("So you're from the future?\n");
    }else if (year <= 1900){
        printf("How old are you? What happened?\n");
    }else{
        printf("I didn't ask.\n");
    }

    printf("What is the solution?\n");
    scanf("%s", &solution);

    //printf("%d\n", strcmp(solution, "portable"));
    if(strcmp(solution, "portable") == 0){
        printf("The solution is %s.\n", solution);
    }else if(strcmp(solution, "found") == 0){
        printf("The solution has been found.\n");
    }else if(strcmp(solution, "implemented") == 0){
        printf("The solution has been implemented.\n");
    }else{
        printf("The solution has not been found.\nThe solution is not portable.\nThe solution has not been implemented.\n");
    }
/* NO ELIF, now just else if.
< less than
> greater than
<= less than or equal to
>= greater than or equal to
== equal to
!= not equal to
!<
!>
LOGICAL OPERATORS - - - -
&& -> and
|| -> or
! -> not

QUESTION: What puts something inside of the “if” statement?
    { curly brackets }

QUESTION: How are conditions written in C?
    if(parenthesis == int or something){
        do stuff do stuff do stuff
    }

QUESTION: How do we write elif conditions in C?
    if(lorem == ipsum){
        printf("dolor sit amet")
    }else if{
        printf("I don't know the rest")
    }

QUESTION: When do else conditions run?
    When nothing else (the if or the else ifs) is true.

QUESTION: What are the 3 logical operators in C?
    && (and), || (or), ! (not)

*/

    return 0;
}