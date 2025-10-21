// MM 6th Random Numbers
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    char letters[] = {'a', 'b', 'd', 'c', 'e'};
    srand(time(NULL));
    int random = rand() %5 +0; // Modulo by highest number, add lowest number. 
    printf("%c\n", letters[random]);

    return 0;
}