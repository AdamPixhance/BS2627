#include <stdio.h>

int main(void) {
    //first for loop from vorlesung 1 slide 16
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            continue;
        if (i == 7)
            break;
        printf("%d", i);
    }
    printf("\n");

    return 0;
}