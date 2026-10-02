//Topic 4: Recursion
//Question 1: Power FunctionProblem: Calculate $x^y$ (e.g., $2^3$) using recursion

#include <stdio.h>

int power(int base, int exp) {
    // BASE CASE: Any number to the power of 0 is 1.
    if (exp == 0) {
        return 1;
    }
    // RECURSIVE CASE: 2^3 = 2 * (2^2)
    else {
        return base * power(base, exp - 1);
    }
}

int main() {
    int b = 2, e = 3;
    printf("%d to the power %d is: %d", b, e, power(b, e));
    return 0;
}
// Output: 2 to the power 3 is: 8


//Question 2: Sum of Natural Numbers
//Problem: Calculate sum of first n numbers (e.g., if n=3, sum = 3+2+1 = 6).

#include <stdio.h>

int sum(int n) {
    // BASE CASE: If we reach 0, stop adding.
    if (n == 0) {
        return 0;
    }
    // RECURSIVE CASE: 3 + sum(2) -> 3 + (2 + sum(1))...
    else {
        return n + sum(n - 1);
    }
}

int main() {
    int n = 5;
    printf("Sum of first %d numbers is: %d", n, sum(n));
    return 0;
}
// Output: Sum of first 5 numbers is: 15


//Question 3: Fibonacci Series (Nth Term)
//Problem: Find the nth term of the Fibonacci sequence (0, 1, 1, 2, 3, 5...).

#include <stdio.h>

int fib(int n) {
    // BASE CASES: 
    // Term 0 is 0. Term 1 is 1.
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // RECURSIVE CASE: Term(n) = Term(n-1) + Term(n-2)
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 6;
    printf("The %dth term in Fibonacci is: %d", n, fib(n));
    return 0;
}
// Output: The 6th term in Fibonacci is: 8
