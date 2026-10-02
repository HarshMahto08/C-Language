#include <stdio.h>

// NOTICE 1: The arguments have '*' (int *a). 
// This means: "I don't want numbers. I want ADDRESSES of numbers."
void realSwap(int *a, int *b) {
    int temp;

    // NOTICE 2: We use '*' everywhere here.
    // *a means "Go to the address of the first number".
    
    temp = *a;  // Take value at Address A, save it in temp.
    *a = *b;    // Take value from Address B, put it into Address A.
    *b = temp;  // Take value from temp, put it into Address B.
    
    // We are literally editing the memory of main() directly from here!
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d", x, y);

    // NOTICE 3: We use '&'.
    // We are NOT passing 10 and 20. We are passing "Address of x" and "Address of y".
    realSwap(&x, &y); 
    
    printf("\nAfter swap: x = %d, y = %d", x, y); 
    // Output: x = 20, y = 10. IT WORKED!
    
    return 0;
}