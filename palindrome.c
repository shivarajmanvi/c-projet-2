#include <stdio.h>

void palindrome() {
    int num, reversed = 0, remainder, original;

    // Get user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; // Store the original number for comparison

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    // Check if the number is a palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

   // return 0;
}
