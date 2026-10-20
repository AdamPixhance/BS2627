#include <stdio.h>
#include <stdlib.h>

// for testing pointers and local copies
void inc1(int x)
{
    x = x + 1;
}
// void inc with pointers
void inc2(int *x)
{
    *x = *x + 1;
}

// Starting main method
int main(void)
{
    // first pointer test
    printf("Testing pointers:\n");
    int var = 999;
    int *pointer1 = &var;
    // calling the value of pointer1 dereferenziert
    printf("Calling the value *pointer1 gives back: %d\n", *pointer1);

    // pointers and local copies
    printf("Testing pointers and their effects on local copies:\n");

    int n = 0;
    printf ("int n was declared and given the value: %d\n", n);
    inc1(n);
    printf("After running inc1(n), the value of n gives back: %d\n", n);

    inc2(&n);
    printf("After running inc2(&n) however, which increments the value inside the address of n, n gives back: %d\n", n);

    // ending main method
    return 0;
}