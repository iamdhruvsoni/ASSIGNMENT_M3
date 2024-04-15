#include <stdio.h>

// Define structure for employee
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to print information of a single employee
void printEmployeeInfo(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    // Declare an array of structures for five employees
    struct Employee employees[5];

    // Input employee information
    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf("%s", employees[i].empname);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    // Print information of all employees
    printf("\nInformation of all employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nDetails of employee %d:\n", i+1);
        printEmployeeInfo(employees[i]);
    }

    return 0;
}

