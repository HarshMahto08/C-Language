//Question 3: The "Variable Scope" Trap (Important)
//Problem: Prove that changing a variable inside a function does NOT change it in main.

#include <stdio.h>

void tryToChange(int x) {
    x = 500; // This changes the COPY only
    printf("[Function] Inside function, x is: %d\n", x);
}

int main() {
    int x = 10;
    
    printf("[Main] Before function, x is: %d\n", x);
    
    tryToChange(x); // Pass by Value
    
    printf("[Main] After function, x is: %d\n", x); 
    // Show him this line specifically! It proves Call by Value.
    
    return 0;
}
// Output:
// [Main] Before function, x is: 10
// [Function] Inside function, x is: 500
// [Main] After function, x is: 10

