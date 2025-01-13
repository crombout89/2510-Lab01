// Task 9: Write a program that prints the numbers 10 to 70, with 7 numbers on each line, using ONE while loop.

#include <stdio.h>

int main() {
    int number = 10;  // Starting number
    int counter = 0;

    while (number <= 70) {
         printf("%d\n", number);  // Print the current number
         number++;  // Increment the number
         counter++;  // Increment the counter

         // Check if 7 numbers have been printed, and insert a newline
         if (counter == 7) {
             printf("\n");
             counter = 0;  // Reset the counter
         }
    }

    return 0;
}