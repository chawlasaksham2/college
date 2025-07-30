
#include <stdio.h>

int main() {
    int number, reversedNumber, hundreds, tens, units;

    // Prompt the user to enter a 3-digit number
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Ensure the number is a 3-digit number
    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1; // Exit the program
    }

    // Extract digits
    hundreds = number / 100;       // Get the hundreds place
    tens = (number / 10) % 10;     // Get the tens place
    units = number % 10;           // Get the units place

    // Reverse the number
    reversedNumber = (units * 100) + (tens * 10) + hundreds;

    // Display the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
