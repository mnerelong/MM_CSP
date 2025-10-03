// MM 6th CSP Variables Notes
#include <stdio.h>

/*
MULTI LINE COMMENT
*/

int main(void){
    int num = 411; // have to set what type of data the variable will hold. Static data types (cannot be changed).
    float num_two;
    char one_letter = 'N'; // will only hold one letter. setting a single character needs to be single quotation marks. multiple is two.
    char multiple[]= "Rain World"; // has to be a list. lists made by char name[] !!!<- BRACKETS!!! = "stuff"
    
    printf("%d\n", num); // \n required to skip a line.

    // python has dynamic variables.

    // QUESTION: What is the main difference between declaring variables in Python and C?
        // We need to declare what data type the variable wil be. This cannot be changed later.

    //QUESTION: In C, what is the purpose of specifying a data type when declaring a variable?
        // We have to let the variable know how many bytes we're going to need for the data type. Integers are 4 bytes, so are floats. Double takes 8, and a single character takes 1. Char -> *list* of characters for a string.

    // QUESTION: List three common data types used in C and their corresponding format specifiers for printf().
        // Integer %d, float %f (double = %lf), char %c (string = %s)

    int num_three = 5;
    char animal[] = "Slugcats";
    char A = 'a';
    float num_four  = 1.2;
    printf("%d %s ate %c %f ton blue fruit.\n", num_three, animal, A, num_four);


    // QUESTION: How do you declare and initialize an integer variable named "age" with the value 25 in C?
    const int age = 25;
    // ^ unchangable variable. constant.

    // QUESTION: What is the difference between printf() and scanf() functions in C?
        // printing is simply a statement (string), while scanf creates an input, a question.

    char grade; // create the variable, no value
    printf("What is your grade: "); // print the question then scanf to make it an input.
    scanf("%c", &grade); // & symbol takes the information and basically does "variable += what I have been given"
        //  ^ type of data and where you are going to send it.
    printf("%s typically have a %c in CSP!\n", animal, grade);

    printf("How much popcorn have you eaten (as a number)?: "); // print the question then scanf to make it an input.
    scanf("%f", &num_two);
    printf("%f? Impressive. \n");
    char name[30];

    printf("What is your full name?: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello %s!", name);
    //I don't have time to debug :(

    return 0;
}
