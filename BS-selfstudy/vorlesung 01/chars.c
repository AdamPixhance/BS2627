#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// start of the main method
int main(void)
{
    char A = 'A';
    char B = 'B';
    printf("The alphabet starts with the letter %c, then followed by the letter %c.\n", A, B);

    // saving my name as a static string
    char myName[] = "Adam";
    printf("Hi, my name is %s.\n", myName);

    // check user answer and lenght of answer using buffer
    char buffer[51];
    int answer = 0;
    // as long as the user does not confirm his name correct we run the while loop
    while (answer != 1)
    {
        printf("What is your name?\n");
        scanf("%50s", buffer);

        printf("Is your name %s correct? (1 for yes, 0 for no)\n", buffer);
        // check if the scanf got a valid 0 or 1 input
        while (scanf("%d", &answer) != 1)
        {
            // requests a valid input and runs again
            printf("Please enter 1 or 0\n");
            scanf("%*s");
        }
    }
    // after confirming name, populate the placeholder yourName with the correct info
    // first create the char with the correct length
    // commented out the printf under this comment
    // printf("strnlen of buffer is: %ld\n", strlen(buffer));
    char yourName[strlen(buffer) + 1];
    // then use strcpy from the string.h header to copy the contents from the buffer
    strcpy(yourName, buffer);
    // priting the user's name out
    printf("Hello %s! Nice to meet you.\n", yourName);
    // end of main
    return 0;
}