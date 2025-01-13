// Task 3: To make a program which reads two chars from user, and then print them in different lines

#include <stdio.h>

int main() {
    char input1, input2;
    printf("Enter two characters: \n");
    scanf("%c %c", &input1, &input2);
    printf("%c\n%c\n", input1, input2);
    return 0;
}