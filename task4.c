// Task 4: To make a program which reads two integers from user, and then print them with the second number first,
// followed by the first input with a space in between.

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    printf("%d %d\n", num1, num2);
    return 0;
}