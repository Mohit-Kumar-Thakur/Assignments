#include <stdio.h>

int main() {
    // Declare a variable to store the input number
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking divisibility by 3
    if (number % 3 == 0) {
        printf("%d is divisible by 3.\n", number);
    } else {
        printf("%d is not divisible by 3.\n", number);
    }

    // Checking divisibility by 7
    if (number % 7 == 0) {
        printf("%d is divisible by 7.\n", number);
    } else {
        printf("%d is not divisible by 7.\n", number);
    }

    // Checking divisibility by 5
    if (number % 5 == 0) {
        printf("%d is divisible by 5.\n", number);
    } else {
        printf("%d is not divisible by 5.\n", number);
    }

    // Checking divisibility by 8
    if (number % 8 == 0) {
        printf("%d is divisible by 8.\n", number);
    } else {
        printf("%d is not divisible by 8.\n", number);
    }

    // Checking divisibility by 6
    if (number % 6 == 0) {
        printf("%d is divisible by 6.\n", number);
    } else {
        printf("%d is not divisible by 6.\n", number);
    }

    return 0;
}
