// Task 8: To make a program which reads an integer from user, and then print “positive”, “zero” or “negative”
// accordingly, using ONE if statement

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    if (number > 0) {
        printf("POSITIVE\n");
    } else if (number < 0) {
        printf("NEGATIVE\n");
    } else {
        printf("ZERO\n");
    }

    return 0;
}