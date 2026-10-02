#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
void isPalindrome(char str[]) {
    int l = 0; // Low index
    int h = strlen(str) - 1; // High index

    while (h > l) {
        if (str[l++] != str[h--]) {
            printf("%s is not a palindrome string\n", str); // Print that it's not a palindrome
            return; // Exit the function early
        }
    }
    printf("%s-is a palindrome string", str); // If all characters matched
}

// Driver program
int main() {
    char str[100]; // Declare an array to hold the input string

    // Prompt the user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line of input from the user

    // Remove the newline character from the input if present
    str[strcspn(str, "\n")] = '\0'; 

    // Check if the input string is a palindrome
    isPalindrome(str);
    
    return 0; // Indicate that the program ended successfully
}
