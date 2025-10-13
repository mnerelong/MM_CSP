// MM 6th CSP Family Loop but I do it with characters from a video game.
#include <stdio.h>

int main(void){
    char iterators[6][42] = {"Five Pebbles", "Looks to the Moon", "Unparalleled Innocence", "Sliver of Straw", "Seven Red Suns", "No Significant Harassment"};
    for (int i = 0; i < 6; i++){
        printf("Hello %s!\n", iterators[i]);
    }

    return 0;
}