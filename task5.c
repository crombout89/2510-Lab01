// Task 5: To make a program which reads two integers from user, and then print the bigger one between the two,
// only using basic if statements

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is the bigger number.", num1);
    }

    if (num2 > num1) {
        printf("%d is the bigger number.", num2);
    }

    if (num1 == num2) {
        printf("Both numbers are equal.");
    }

    return 0;
}