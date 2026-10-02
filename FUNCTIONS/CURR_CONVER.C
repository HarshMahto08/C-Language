//Question 2: The Currency Converter
//Problem: Create a function that takes an amount in Dollars and returns the value in Rupees (Assume $1 = 85 INR).

#include <stdio.h>

// Function definition
float convertToRupees(float dollars) {
    float rate = 85.0;
    float inr = dollars * rate;
    return inr; // Returns the calculated value
}

int main() {
    float usd = 10.0;
    float rupees;
    
    // Call the function
    rupees = convertToRupees(usd);
    
    printf("$%.2f is equal to ₹%.2f", usd, rupees);
    
    return 0;
}
// Output: $10.00 is equal to ₹850.00