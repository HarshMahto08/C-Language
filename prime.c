#include <stdio.h>

int main() {
    int num, flag = 1; // flag will indicate if the number is prime

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num <= 1) {
        flag = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for factors from 2 to the square root of num
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 0; // Found a factor, not prime
                break;
            }
        }
    }

    // Output the result
    if (flag == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}