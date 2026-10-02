//Bro, did you know Arrays are always passed by reference automatically? You don't need the &."


#include <stdio.h>

// When you pass an array, you are actually passing the address of the first element.
// You don't need '&' here.
void changeArray(int arr[]) {
    arr[0] = 999; // This will change the original array in main!
}

int main() {
    int myNumbers[3] = {1, 2, 3};
    
    changeArray(myNumbers); // Just pass the name 'myNumbers'.
    
    printf("First number is: %d", myNumbers[0]); 
    // Output: 999. (It changed!)
    return 0;
}

//Recursion (The "Inception" Concept)
//Keep it simple: It’s a function calling itself until it hits a stop sign.

//Code Snippet 6: Factorial

#include <stdio.h>

int factorial(int n) {
    // 1. THE STOP SIGN (Base Case)
    // If we don't have this, the computer runs out of memory and crashes (Stack Overflow).
    if (n == 0) {
        return 1;
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