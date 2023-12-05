#include <stdio.h>
#include <string.h>

int main() {
    // Scenario (i): Using String Library Functions

    // Declaring and initializing two strings
    char str1[50] = "Hello";
    char str2[50] = "World";

    // 1. String Comparison
    int compareResult = strcmp(str1, str2);
    if (compareResult == 0) {
        printf("Scenario (i): Strings are equal.\n");
    } else {
        printf("Scenario (i): Strings are not equal.\n");
    }

    // 2. String Concatenation
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Scenario (i): Concatenated String: %s\n", str1);

    // 3. String Reversal
    strrev(str1);
    printf("Scenario (i): Reversed String: %s\n", str1);

    // 4. Length Comparison
    if (strlen(str1) == strlen(str2)) {
        printf("Scenario (i): Strings have the same length.\n");
    } else {
        printf("Scenario (i): Strings have different lengths.\n");
    }

    // Scenario (ii): Using Character Arrays

    // Declare and initialize two character arrays
    char arr1[50] = "Hello";
    char arr2[50] = "World";

    // 1. String Comparison
    int i = 0, flag = 0;
    while (arr1[i] != '\0' && arr2[i] != '\0') {
        if (arr1[i] != arr2[i]) {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0) {
        printf("\nScenario (ii): Strings are equal.\n");
    } else {
        printf("\nScenario (ii): Strings are not equal.\n");
    }

    // 2. String Concatenation
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    for (int j = 0; j < len2; j++) {
        arr1[len1 + j] = arr2[j];
    }
    arr1[len1 + len2] = '\0';
    printf("Scenario (ii): Concatenated String: %s\n", arr1);

    // 3. String Reversal
    int start = 0, end = len1 + len2 - 1;
    while (start < end) {
        // Swap characters
        char temp = arr1[start];
        arr1[start] = arr1[end];
        arr1[end] = temp;
        start++;
        end--;
    }
    printf("Scenario (ii): Reversed String: %s\n", arr1);

    // 4. Length Comparison
    if (len1 == len2) {
        printf("Scenario (ii): Strings have the same length.\n");
    } else {
        printf("Scenario (ii): Strings have different lengths.\n");
    }

    return 0;
}
