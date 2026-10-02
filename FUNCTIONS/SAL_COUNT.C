//Question 1: The Salary Bonus Updater
//Problem: Write a function that takes a salary variable and adds a $500 bonus directly to it using pointers

#include <stdio.h>

// We accept a POINTER (int *s) because we want the address
void addBonus(int *s) {
    // *s means: "Go to the address stored in s and look at the value"
    // We add 500 to the value AT that address
    *s = *s + 500; 
    printf("[Function] Bonus added successfully.\n");
}

int main() {
    int salary = 5000;
    
    printf("Old Salary: %d\n", salary);
    
    // CALL BY REFERENCE: We pass the ADDRESS (&salary)
    addBonus(&salary);
    
    // The original salary variable is now changed!
    printf("New Salary: %d\n", salary);
    
    return 0;
}
// Output:
// Old Salary: 5000
// [Function] Bonus added successfully.
// New Salary: 5500