#include <stdio.h>
#include <stdlib.h>

// start of the main method
int main(void)
{
    // my first array in C
    int numbers[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    // what happens if I try to grab something out of the array bounds
    // printf("numbers[11] = %d\n", numbers[12]);
    // unexpected results. Not always an error!

    // understanding malloc
    int size;
    printf("Testing malloc:\nPlease enter an integer for the size of your Array:\n");
    while (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("The input was invalid! Please try again:\n");
        scanf("%*s"); // throw away the bad input
    }
    printf("The user chose the size %d!\n", size);

    int *dynamicNumbers = calloc(size, sizeof(int)); // defined with calloc instead of malloc to have ZEROS in the array

    // check if malloc worked
    if (dynamicNumbers == NULL)
    {
        exit(1);
    }

    // poulate the array with real values
    for (int i = 0; i < size; i++)
    {
        dynamicNumbers[i] = i;
    }

    // print out the given numbers
    for (int i = 0; i < size; i++)
    {
        printf("dynamicNumbers[%d] = %d\n", i, dynamicNumbers[i]);
    }

    // free up the space one you are done with it
    free(dynamicNumbers);

    // end of the main method
    return 0;
}