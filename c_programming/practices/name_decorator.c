// MM 6th CSP Name Decorator

#include <stdio.h>
#include <string.h>

int main(void){

    char name[35];
    char name_decor[45] = "xX.";
    printf("What's your name?\n");
    scanf("%s", &name);
    strcat(name_decor, name);
    strcat(name_decor, ".Xx");
    printf("%s", name_decor);

    return 0;
}