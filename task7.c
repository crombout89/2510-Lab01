// Task 7: To make a program which reads two integers from user, and then print the bigger one between
// the two or “they are same.” accordingly, using ONE if statement

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    if (num1 != num2) {
        printf("%d is the bigger number.\n", (num1 > num2) ? num1 : num2);
    } else
    {
        printf("They are the same.\n");
    }

    return 0;
}