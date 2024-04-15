#include <stdio.h>

int main() {
    char names[5][50];
    float salaries[5];
    float totalSalary = 0, averageSalary;

    printf("Enter name of employee 1: ");
    scanf("%s", names[0]);
    printf("Enter salary of employee 1: ");
    scanf("%f", &salaries[0]);
    totalSalary += salaries[0];

    printf("Enter name of employee 2: ");
    scanf("%s", names[1]);
    printf("Enter salary of employee 2: ");
    scanf("%f", &salaries[1]);
    totalSalary += salaries[1];


    printf("Enter name of employee 3: ");
    scanf("%s", names[2]);
    printf("Enter salary of employee 3: ");
    scanf("%f", &salaries[2]);
    totalSalary += salaries[2];

    printf("Enter name of employee 4: ");
    scanf("%s", names[3]);
    printf("Enter salary of employee 4: ");
    scanf("%f", &salaries[3]);
    totalSalary += salaries[3];

  
    printf("Enter name of employee 5: ");
    scanf("%s", names[4]);
    printf("Enter salary of employee 5: ");
    scanf("%f", &salaries[4]);
    totalSalary += salaries[4];

  
    averageSalary = totalSalary / 5;

    printf("\nTotal salary of all employees: $%.2f\n", totalSalary);
    printf("Average salary of all employees: $%.2f\n", averageSalary);

    return 0;
}

