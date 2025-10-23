// MM 6th CSP Misc. Tests
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char ask_guess(void){
	char input;
	printf("please pick a letter: "); 
	scanf("%c", &input);
	return input;
}

int main(void){
    srand(time(NULL));
    int random = rand() %5 +1;
    char word[10];

    if (random == 1){
        char* word = "build"; 
    } else if (random == 2) {
        char* word = "lovely";
    } else if (random == 3) {
        char* word = "game";
    } else if (random == 4) {
        char* word = "first";
    } else {
        char* word = "five";
    }
    printf("%s", word);
    char one = ask_guess();

    if (strchr(word, one) != NULL){
        printf("Correct! %c is in %s!\n", one, word);
    } else {
        printf("INCORRECT! %c is NOT in %s!\n", one, word);
    }

    return 0;
}