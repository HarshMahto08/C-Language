#include <stdio.h>

int main() {
    int A, B, Y;

    printf("Enter the value of A (0 or 1): ");
    scanf("%d", &A);

    printf("Enter the value of B (0 or 1): ");
    scanf("%d", &B);

    if (A == 0 && B == 0) {
        Y = 1;
    } else if (A == 0 && B == 1) {
        Y = 1;
    } else if (A == 1 && B == 0) {
        Y = 0;
    } else if (A == 1 && B == 1) {
        Y = 1;
    } else {
        printf("Invalid input. A and B must be 0 or 1.\n");
        return 1; // Exit with an error code
    }

    printf("Y = %d\n", Y);

    return 0;
}
