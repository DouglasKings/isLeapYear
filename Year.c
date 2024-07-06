#include <stdio.h>

// Function prototype
int isLeapYear(int Year);

int main() {
    int Year;
    
    // Ask the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &Year);
    
    // Check if the year is a leap year
    if (isLeapYear(Year)) {
        printf("%d is a leap year.\n", Year);
    } else {
        printf("%d is not a leap year.\n", Year);
    }
    
    return 0;
}

// Implementation of the isLeapYear function
int isLeapYear(int Year) {
    // Check if the year is divisible by 4
    if (Year % 4 == 0) {
        // Check if the year is also divisible by 100
        if (Year % 100 == 0) {
            // Check if the year is also divisible by 400
            if (Year % 400 == 0) {
                return 1; // It's a leap year
            } else {
                return 0; // Not a leap year
            }
        } else {
            return 1; // It's a leap year
        }
    } else {
        return 0; // Not a leap year
    }
}
