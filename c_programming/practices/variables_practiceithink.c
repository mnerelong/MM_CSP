// MM 6th CSP
#include <stdio.h>


int main(void){


    char name[30];
    int age = 15;
    char school[40];
    int year = 2025;
    char fav_subject[] = "CSP";
    float num = 4.5;
    float gpa;
    char breakfast[20];
    char color[] = "orange";
    char icolor[10];


    printf("What's your name, hmm?\n");
    scanf("%s", &name); // I don't know what it wants me to do.
    printf("Ah! Hello %s.\nHow old are you? You look like you've just barely turned %d.\n", name, age);
    printf("Imagine, being %d in the big %d!\n", age, year);
    while(getchar() != '\n');


    printf("Are you in school? What school do you go to?\n");
    fgets(school, sizeof(school), stdin);
    printf("%s...\n", school);
    printf("Never heard of it.\nI bet they don't have %s. That's the best class, only for the best schools. Obviously.\n", fav_subject);


    printf("Y'know, when I was in school I had a GPA of %1.1f, that's right, %1.1f.\n", num, num);
    printf("What's your GPA?\n");
    scanf("%f", &gpa);
    printf("Only %1.1f?! Your parents must be so disappointed in you. I can't believe you.\n", gpa);
   
    printf("You must have something pretty disgusting for breakfast to be that dumb.\nWhat exactly do you eat? Keep it short; I don't really care.\n");
    scanf("%s", breakfast);
    printf("%s?! Just when I thought you couldn't get any worse.\n", breakfast);


    printf("I mean, what color even is that? Your eyes, I mean. Are they %s or something?!\nWhat color is that?!\n", color);
    scanf("%s", icolor);
    printf("%s... %s... %s! How crude! That's it, I'm LEAVING!", icolor, icolor, icolor);






    return 0;
}
