#include <stdio.h>
int main() {
    int X[] = {3, 5, 7, 9, 11, 13, 17, 19, 23, 29};
    int F[] = {2, 3, 2, 3, 4, 2, 4, 3, 4, 2};
    int n = sizeof(X) / sizeof(X[0]); // Calculate the number of elements
    double weightedSum = 0.0;
    int frequencySum = 0;
    for (int i = 0; i < n; i++) {
    weightedSum += X[i] * F[i];
    frequencySum += F[i];
    }
    double weightedAverage = weightedSum / frequencySum;
    printf("The weighted average is: %.2lf\n", weightedAverage);
    return 0;
}
