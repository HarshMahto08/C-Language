#include <stdio.h>

// Function Declaration
// Returns an integer (1 or 0)
int checkEven(int num) {
    // If remainder when divided by 2 is 0, it's even
    if (num % 2 == 0) {
        return 1; // True
    } else {
        return 0; // False
    }
}

int main() {
    int number, result;
    
    printf("Enter a number: ");
    scanf("%d", &number); // Let's say user enters 4
    
    // CALL BY VALUE: We pass a COPY of 4 to the function
    result = checkEven(number);
    
    // Logic check based on what the factory returned
    if (result == 1) {
        printf("The number %d is Even.", number);
    } else {
        printf("The number %d is Odd.", number);
    }
    
    return 0;
}
// Output: 
// Enter a number: 4
// The number 4 is Even.