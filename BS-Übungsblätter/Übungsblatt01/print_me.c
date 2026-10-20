#include <stdio.h>

int main(void)
{
    // NOTE: the lines above the TODO: tell you what the line below the TODO: (the one you need to add) should print.
    printf("If you see this message, the compilation and execution worked.\n");
    printf("For readability, make sure that each print you add is terminated with a newline!\n");
    printf("This program prints a couple of things. For example:\n");
    printf("An integer: %d\n", 67);

    printf("Pi as a floating point number to the 10th decimal place: %f\n", 3.1415926535);

    printf("A string using the appropriate wildcard!: %s\n", "I am a string!");

    printf("16 * 16 as a hexadecimal number: %x\n", 0x16);

    printf("The word %conkey, completed by adding a letter via a format string:\n", 'D');

    printf("A percentage sign: %%\n");

    int a[3] = {1, 2, 3};
    int *b = &a[1];
    printf("The second element of the array a[3] = {1, 2, 3} is: %d\n", (*a + 1));

    printf("The address of the second element is: %p\n", b);
}
