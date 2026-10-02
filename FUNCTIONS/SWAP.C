#include <stdio.h>

// Function definition taking two POINTERS
void swapRealValues(int *x, int *y) {
    int temp; // A temporary storage box
    
    // Step 1: Store value of x into temp
    // Read: "Go to address x, take the value, put in temp"
    temp = *x; 
    
    // Step 2: Put value of y into x
    // Read: "Go to address y, take value, put it into address x"
    *x = *y;   
    
    // Step 3: Put temp into y
    // Read: "Take value from temp, put it into address y"
    *y = temp; 
    
    printf("\n[Function] Swapped values inside memory.");
}

int main() {
    int a = 10;
    int b = 20;
    
    printf("Before Swap: a = %d, b = %d\n", a, b);
    
    // Pass the ADDRESSES
    swapRealValues(&a, &b);
    
    printf("After Swap:  a = %d, b = %d\n", a, b);
    
    return 0;
}