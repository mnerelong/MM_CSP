// MM 6th CSP Silly Sentences

#include <stdio.h>

int main(void){

    char name_one[50];
    char name_two[50];
    char verb_one[50];
    char location_one[50];
    char adjective_one[50];
    char noun_one[50];
    char verb_two[50];
    char verb_three[50];
    char adjective_two[50];

    printf("Pick a name.\n");
    scanf("%s", &name_one);
    printf("Pick another name.\n");
    scanf("%s", &name_two);
    printf("Pick a verb ending in -ing.\n");
    scanf("%s", &verb_one);
    printf("Pick a location.\n");
    scanf("%s", &location_one);
    printf("Pick an adjective.\n");
    scanf("%s", &adjective_one);
    printf("Pick a noun.\n");
    scanf("%s", &noun_one);
    printf("Pick a verb ending in -ing.\n");
    scanf("%s", &verb_two);
    printf("Pick another verb, but now in the past tense.\n");
    scanf("%s", &verb_three);

    printf("%s and %s were %s around %s when all of the sudden a %s %s came %s at them. %s %s but %s wasn't able to join him. ",name_one, name_two, verb_one, location_one, adjective_one, noun_one, verb_one, name_one, verb_three, name_two);


    return 0;
}