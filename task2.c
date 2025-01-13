// Task 2: To make a program which reads two integers from user, and then print the sum of them

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    printf("The sum of %d + %d = %d\n", num1, num2, sum);
    return 0;
}