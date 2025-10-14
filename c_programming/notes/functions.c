// MM 6th CSP Functions Notes
#include <stdio.h>
//              v string?
void w_song(char* noun, int meters){
    printf("\nFollowing the aether back to youuuu\n");
    printf("In a land so far away~\n");
    printf("I don't know the wooorrrds but theres a lot!\n");
    printf("I know just who I am-\n");
    printf("[But] who I could be is a mystery to some...\n");
    printf("I don't know the wooooooorrrddsss!\n");
    printf("I will fi-i-ind...\n");
    printf("The undergrooouuunnd... %s! Ohoh oh ohoh!\n", noun);
    printf("Following the aether back to you... unless you go down like %d meters into the earth then I can't.\n", meters );
}

int subtract(int num_one, int num_two){
    return num_one - num_two;
}

char* string_getter(void){
    char *word;
    printf("\nSay a word, any word.\n");
    scanf("%s", &word);
    return word;
}

/*DO NOT WRITE FUNCTIONS INSIDE OF OTHER FUNCTIONS
vvvvvvvvvvvvvvvv FUNCTION */
int main(void){
    w_song("river", 42);
    w_song("pebbles", 411);
    w_song("liver", 12);

    int two_num = subtract(411,24);
    printf("\n%d... %d... %d!\n", two_num, subtract(411,12), 500);
    return 0;
}
/*
QUESTION: What a function is
    A function is a task (or tasks) to be called upon and carried out by the computer.

QUESTION: Why we use functions
    Functions reduce the repition in code and make it easier to use (and read) in the future.

QUESTION: How to write a function in C
 v returning data type. parameters go in the (parenthesis)*/
void function(void){
    printf("This is a function.");
}
/*
QUESTION: What are arguments and parameters?
    Parameters are like the variables that functions intake to be used inside of the function to replace a specific value and arguments are the values we put into the parameters.

QUESTION: How do arguments and parameters work together?
    Arguments are the values of the parameters.

QUESTION: How to use parameters and arguments in C
    Parameters are set with the function (inside of the parenthesis) and arguments go in their respective places.

QUESTION: What are return statements?
    Replace the function with the given value.

QUESTION: How do return statements change how you define a function in C?
    You need to specify the kind of data you are returning.

QUESTION: What do return statements do with the information?
    Replace the function (where it is called, whether it be in a print statement or otherwise) with the given value.
*/