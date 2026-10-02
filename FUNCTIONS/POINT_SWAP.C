//Question 3: The Pointer Swap (Classic)
//Problem: Swap x and y using pointers. (This is the ultimate test).

#include <stdio.h>

void swap(int *p1, int *p2) {
    int temp;
    // 1. Save value at address p1
    temp = *p1;
    // 2. Overwrite value at address p1 with value at address p2
    *p1 = *p2;
    // 3. Overwrite value at address p2 with saved temp
    *p2 = temp;
}

int main() {
    int x = 100, y = 200;
    printf("Before: x=%d, y=%d\n", x, y);
    
    swap(&x, &y); // Pass addresses!
    
    printf("After:  x=%d, y=%d\n", x, y);
    return 0;
}
// Output:
// Before: x=100, y=200
// After:  x=200, y=100