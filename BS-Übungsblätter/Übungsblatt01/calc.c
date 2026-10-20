#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int sum = 0;
    int remainder = 0;	 
    puts("Enter an integer");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    printf("Sum = %d\n", sum);
    exit(EXIT_SUCCESS);
}
