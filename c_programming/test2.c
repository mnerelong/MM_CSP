// MM
/* int main(void){
    char guess;
    char word[] = "test";
    int length = strlen(word);
    int correct;

    int i = 0; 
    while (i < length) {
	if (word[i] == guess) {
	   display[i] = guess;
	   correct = 1; 
	}
i++;

}

if (!correct) { 
   wrong[wrongCount ] = guess;
   wrongCount++;
   attemptsLeft--;
   printf("thats wrongg\n");
} else {
printf("AYYY u got it\n")
}

if (strcmp(display, word) == 0) {
	printf("\nu win!!! The answer was: %s\n", word);
	return 0;
  }

}

printf("u lose!!!" the word was: %s\n", word);

return 0;
} */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

char* word_picker(random){
    char library[] = {"word", "test", "four", "moon"};
    char word[] = library[random];
    return word;
}
int main (void){
    srand(time(NULL));
    int num_pick = rand() %4 +1;
    print("%s", word_picker(num_pick));
    return 0;
}