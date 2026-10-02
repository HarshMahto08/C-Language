//Question 2: Return Two Values (Min & Max)
//Problem: C functions can only return ONE value. Use pointers to "return" two results (Min and Max) from a list of two numbers.

#include <stdio.h>

// This function takes two numbers (n1, n2) 
// AND two pointers (minPtr, maxPtr) where it will write the answers.
void findMinMax(int n1, int n2, int *minPtr, int *maxPtr) {
    if (n1 > n2) {
        *maxPtr = n1; // Write n1 into the address of max
        *minPtr = n2; // Write n2 into the address of min
    } else {
        *maxPtr = n2;
        *minPtr = n1;
    }
}

int main() {
    int a = 45, b = 12;
    int big, small; // Empty boxes waiting for answers
    
    // We pass 45, 12, and the ADDRESSES of our empty boxes
    findMinMax(a, b, &small, &big);
    
    printf("Larger number: %d\n", big);
    printf("Smaller number: %d\n", small);
    
    return 0;
}
// Output:
// Larger number: 45
// Smaller number: 12