// MM 6th CSP Misc. Tests
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void){
/*printf("  o\n /|\\ \n /\\\n");*/
srand(time(NULL));
int wrong_attempt_tracker = rand() %6 +0;
printf("%i\n", wrong_attempt_tracker);
if (wrong_attempt_tracker == 0){
    printf("\n\n\n");
} else if (wrong_attempt_tracker == 1){
    printf("  o\n\n\n");
} else if (wrong_attempt_tracker == 2){
    printf("  o\n  |\n\n");
} else if (wrong_attempt_tracker == 3 ){
    printf("  o\n /| \n\n");
} else if (wrong_attempt_tracker == 4 ){
    printf("  o\n /|\\ \n\n");
} else if (wrong_attempt_tracker == 5 ){
    printf("  o\n /|\\ \n /\n");
} else {
    printf("  o\n /|\\ \n /\\\n");
}
    return 0;
}