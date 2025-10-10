// MM 6th CSP Old Enough
#include <stdio.h>

int main(void){

    int age;
    printf("How old are you?\n");
    scanf("%d", &age);

    if(age < 4){
        printf("%d? You're not even old enough to go to school. Don't touch my code.\n", age);
    }else if(age >= 4 && age < 15){
        printf("%d? Wow! You're so old! You're so old in fact, that you can go to school!\n", age);
    }else if(age == 15){
        printf("%d? You're old enough to get your learners permit! Not that anybody should trust you with one.\n", age);
    }else if(age >= 16 && age < 18){
        printf("%d? You're old enough to drive! Not that anybody would trust you to.\n", age);
    }else if(age > 100){
        printf("%d?! How are you still alive?\n", age);
    }else{
        printf("%d? You're old enough to vote! I don't trust that kind of responsibility with you, though.\n", age);
    }

    return 0;
}