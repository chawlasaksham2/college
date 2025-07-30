
#include <stdio.h>

int main() {
    int number, reversedNumber, hundreds, tens, units;

    
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    
    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1; // Exit the program
    }

    
    hundreds = number / 100;       // Get the hundreds place
    tens = (number / 10) % 10;     // Get the tens place
    units = number % 10;           // Get the units place

    reversedNumber = (units * 100) + (tens * 10) + hundreds;

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
