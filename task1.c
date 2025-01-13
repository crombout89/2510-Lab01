// Task 1: To make a program which reads an integer from user and then print it two times

#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("%d\n", number);
    printf("%d\n", number);
    return 0;
}