#include <stdio.h>

int main() {
    float monthlySalary, annualSalary;

    printf("\n\n\t Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    annualSalary = monthlySalary * 12;

    printf("\n\n\t Your annual salary is: $%.2f\n", annualSalary);

   
}

