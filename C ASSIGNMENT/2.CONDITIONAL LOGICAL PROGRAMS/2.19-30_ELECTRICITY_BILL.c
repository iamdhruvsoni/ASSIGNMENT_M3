#include<stdio.h>

int main() {
    int cust_id, unit_cons, total_amt = 0; // Initialize total_amt to zero
    char cust_name[50];
    
    // Input customer details
    printf("Enter the name of customer: ");
    scanf("%s", cust_name);
    
    printf("Enter the ID of customer: ");
    scanf("%d", &cust_id);
    
    printf("Enter the units consumed by the customer: ");
    scanf("%d", &unit_cons);

    // Calculate total amount based on units consumed
    if (unit_cons <= 350) {
        total_amt = unit_cons * 1.20;
    } else if (unit_cons < 600) {
        total_amt = unit_cons * 1.50;
    } else if (unit_cons < 800) {
        total_amt = unit_cons * 1.80;
    } else {
        total_amt = unit_cons * 2.00;
    }

    // Apply surcharge if total amount exceeds Rs. 800
    if (total_amt > 800) {
        total_amt += total_amt * 0.18; // 18% surcharge
    }

    // Ensure the minimum bill is Rs. 256
    if (total_amt < 256) {
        total_amt = 256;
    }

    // Display the electricity bill
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", cust_id);
    printf("Customer Name: %s\n", cust_name);
    printf("Units Consumed: %d\n", unit_cons);
    printf("Total Amount to be Paid: Rs. %d\n", total_amt);

    return 0;
}

