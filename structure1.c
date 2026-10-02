#include <stdio.h>
#include <string.h>

// Define the structure
struct Customer {
    char customerName[50];
    int customerID;
    char panNo[15];
};

int main() {
    // Sample data
    struct Customer customers[] = {
        {"Amar Singh", 123432, "AQGBA32345W"},
        {"Abhay Kumar", 365289, "APDBC36745U"},
        {"Anish Agarwal", 265785, "AWHBC45623W"},
        {"Aman Shaw", 765234, "ARDEB56894U"},
        {"Abir Banerjee", 956742, "BQCBH37954W"}
    };
    int numCustomers = sizeof(customers) / sizeof(customers[0]);

    int searchID;
    printf("Enter Customer ID to search: ");
    scanf("%d", &searchID);

    // Search for the customer
    int found = 0;
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].customerID == searchID) {
            printf("Customer Name: %s\n", customers[i].customerName);
            printf("Customer ID: %d\n", customers[i].customerID);
            printf("PAN No: %s\n", customers[i].panNo);
            found = 1;
            break; // Exit loop after finding the customer
        }
    }

    if (!found) {
        printf("Customer with ID %d not found.\n", searchID);
    }

    return 0;
}
