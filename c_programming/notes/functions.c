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
/*What a function is
Why we use functions
How to write a function in C
What are arguments and parameters?
How do arguments and parameters work together?
How to use parameters and arguments in C
What are return statements?
How do return statements change how you define a function in C?
What do return statements do with the information?*/