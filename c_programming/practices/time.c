// MM 6th CSP Time of Day
#include <stdio.h>

int main(void){

    int time;
    printf("What time is it, in military standards?\n");
    scanf("%d", &time);

    if(time >= 1 && time <= 11){
        printf("Good morning!\n");
    }else if(time >= 12 && time < 19 ){
        printf("Good afternoon!\n");
    }else{
        printf("Good night!\n");
    }

    return 0;
}