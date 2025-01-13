// Task 10: make a program prints out numbers between 1 and 100: which are multiples of 2,
// or multiples of 3, but NOT multiple of 6

#include <stdio.h>

int main() {
    for (int number = 1; number <= 100; number++) {
        // Check if the number is a multiple of 2 or 3 BUT NOT 6.
        if ((number % 2 == 0 || number % 3 == 0) && (number % 6 != 0)) {
            printf("%d\n", number);
        }
    }
    printf("\n");
    return 0;
}