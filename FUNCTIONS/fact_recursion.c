#include <stdio.h>

int factorial(int n) {
    // 1. THE STOP SIGN (Base Case)
    // If we don't have this, the computer runs out of memory and crashes (Stack Overflow).
    if (n == 0) {
        return 1
        ;
    }
    
    // 2. THE LOOP (Recursive Step)
    // 5 * factorial(4) ... which is 4 * factorial(3)... etc.
    return n * factorial(n - 1);
}

int main() {
    int result = factorial(5); // 5 * 4 * 3 * 2 * 1
    printf("Factorial of 5 is: %d", result);
    return 0;
}