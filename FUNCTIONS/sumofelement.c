//Question 2: Sum of Elements
//Problem: Calculate the sum of all elements in an array using a function.

#include <stdio.h>

int calculateSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum; // Throw the total back to main
}

int main() {
    int data[4] = {10, 20, 30, 40};
    
    int total = calculateSum(data, 4);
    
    printf("Total Sum: %d", total);
    return 0;
}
// Output: Total Sum: 100