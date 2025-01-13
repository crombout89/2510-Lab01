// Task 6: To make a program which reads an integer from user, and then print “positive”, “zero” or “negative”
// accordingly, only using basic if statements

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    if (number > 0) {
        printf("POSITIVE\n");
    }

    if (number < 0) {
        printf("NEGATIVE\n");
    }

    if (number == 0) {
         printf("ZERO\n");
    }

    return 0;
}