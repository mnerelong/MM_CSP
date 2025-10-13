// MM 6th CSP Loops (& arrays)
#include <stdio.h>

int main(void){

        /*
        QUESTION: What is a loop? 
        A function that repeats while a certain status is true or false or for every item in a list.

        QUESTION: What are the two types of loops?
        For loops and while loops.

        QUESTION: What is iteration?
            Changing loops every cycle as to not make an infinite loop.

        QUESTION: What are arrays? 
            In python, arrays are just called lists, and they are the same thing. */  

        /* QUESTION: How do you make lists in C? */
    char farm_locate[5][40/*character limit for the strings*/] = {"Arrays", "Outskirts", "Five"};
    int years[5] = {2000, 2020, 2022, 2025};

        /* QUESTION: How do you make for loops in C? */
    for (int y = 0; y < 4; y++){ // ++ = +1 automaticaly
        printf("%d\n", years[y]);
    }
    for (int f = 0; f < 3; f++){
        printf("%s is my least favorite farm.\n", farm_locate[f]);
    }

    for (int num = 1; num < 11; num++){
        printf("%d\n", num);
    }

        /*
        QUESTION: How do you make while loops in C? */
    int pebbles = 0;
    while (pebbles != 5){
        printf("No. (only %d Pebbles)\n", pebbles);
        pebbles++;
    }
    printf("Triple Affirmative! (%d Pebbles)\n", pebbles);

    return 0;
}