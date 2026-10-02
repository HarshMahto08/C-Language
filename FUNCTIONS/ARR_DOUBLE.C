//Topic 3: Arrays & Functions
//Concept: Arrays are weird. They are always passed by reference automatically. You don't need the &.

//Question 1: The Array Doubler
//Problem: Write a function that takes an array and doubles every number inside it.

#include <stdio.h>
// Accepting an array 'arr[]' and its size
void doubleArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        // We modify the array directly. 
        // This affects the original array in main!
        arr[i] = arr[i] * 2;
    }
}
int main() {
    int numbers[3] = {1, 2, 3};
    
    // Pass the array name 'numbers' (which acts as a pointer)
    doubleArray(numbers, 3);
    
    printf("Modified Array: %d %d %d", numbers[0], numbers[1], numbers[2]);
    return 0;
}
// Output: Modified Array: 2 4 6