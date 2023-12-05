#include <stdio.h>

int main() {
    // Declareing variables to store the input number and remainder
    int number, remainder;

    // Prompting the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating the remainder using the modulus operator
    remainder = number % 6;

    // Using switch-case to perform actions based on the remainder
    switch (remainder) {
        case 0:
            printf("%d is divisible by 6. The remainder is 0.\n", number);
            break;
        case 1:
            printf("%d divided by 6 leaves a remainder of 1.\n", number);
            break;
        case 2:
            printf("%d divided by 6 leaves a remainder of 2.\n", number);
            break;
        case 3:
            printf("%d divided by 6 leaves a remainder of 3.\n", number);
            break;
        case 4:
            printf("%d divided by 6 leaves a remainder of 4.\n", number);
            break;
        case 5:
            printf("%d divided by 6 leaves a remainder of 5.\n", number);
            break;
        default:
            printf("Error: Invalid remainder.\n");
    }

    return 0;
}
