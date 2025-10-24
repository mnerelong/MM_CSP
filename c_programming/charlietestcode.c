#include <stdio.h>
#include <stdlib.h>



int main(void){
    char word[] = "builds";
    int correct;
    int length = strlen(word);
    
    
    int i = 0; 
    while (i < length) {
    if (word[i] == guess) {
        display[i] = guess; 
        correct = 1; 
    }
    i++;
/*}

if (!correct) { 
    wrong[wrongCount] = guess; 
    wrongCount++;
    attemptsLeft--;
    printf("That's wrong!\n");  
} else {
    printf("AYYY u got it\n"); 
}

if (strcmp(display, word) == 0) {
    printf("\nU win!!! The answer was: %s\n", word);
    return 0;
}

    printf("U lose!!! The word was: %s\n", word);   */

    return 0;
}