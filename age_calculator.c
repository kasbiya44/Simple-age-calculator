#include <stdio.h>

int calculateAge(int birthYear) {
    int currentYear = 2024;  // Update this to the current year
    return currentYear - birthYear;
}

int main() {
    int birthYear, age;

    // Get user input
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    // Calculate age
    age = calculateAge(birthYear);

    // Display result
    if (age >= 0) {
        printf("You are %d years old.\n", age);
    } else {
        printf("Invalid birth year! Please enter a valid year.\n");
    }

    return 0;
}
