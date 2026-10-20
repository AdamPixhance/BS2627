#include <stdio.h>
#include <stdlib.h>

//forward declaration test
void otherFun(void);

// start of my main method
int main(void)
{
    // first for loop from vorlesung 1 slide 16
    printf("The foor loop gives the result: ");
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            continue;
        if (i == 7)
            break;
        printf("%d", i);
    }
    printf("\n");

    // trying boolean
    printf("Testing the boolean logic with boolx gives back: ");
    int boolx;

    boolx = (1 != 1);

    if (boolx)
    { // same as writing (boolx != 0)
      // Not the same as writing (boolx == 1) however!
        printf("boolx is true\n");
    }
    if (!boolx)
    { // same as writing (boolx == 0)
        printf("boolx is not true\n");
    }

    // boolean example from the lecture slides
    printf("Running the boolean example from the lecture slide 19:\n");
    int num;
    printf ("Enter an integer (can be zero):\n");
    if (scanf("%d", &num) != 1) {
        printf("Could not parse a number from user input!\n");
        exit(1);
    }
    if (num) {
        printf ("Thats not a zero \n");
    } else {
        printf ("Thats a ZERO!\n");
    }

    //Testing otherFun in the main function
    otherFun();

    //Ending main
    return 0;
}


// declaring otherFun
void otherFun(void) {
    printf ("Front declaration test:\nMy program can use otherFun with no issues!\n");
}