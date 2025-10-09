// MM 6th Strings Notes
#include <stdio.h>
#include <string.h>

int main(void){

    char first_name[50] = "Joar";
    char last_name[50] = "Jakobsson";

    printf("%s!\n", first_name);
    char slugcat[10];
    printf("Slugcat?\n");
    scanf("%s", &slugcat);
    printf("%s!\n", slugcat);

    char tablet[] = "XP pen";
    tablet[0] = 'O';
    printf("%s\n", tablet);

    // c ONLY uses the + sign for addition

    strcmp(first_name, "Andrew");

    strcat(first_name, " ");
    printf("[%s]\n", first_name);
    strcat(first_name, last_name);
    printf("[%s]\n",first_name);
    
    printf("%zu\n", strlen(first_name));
    printf("%zu\n", sizeof(first_name));
    /* sizeof -> how long it could be, how much space it can hold
    strlen -> how long the string is */

    return 0;
}