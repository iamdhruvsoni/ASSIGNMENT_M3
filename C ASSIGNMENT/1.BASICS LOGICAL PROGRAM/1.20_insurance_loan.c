#include <stdio.h>

int main() {
    float salary, remaining_salary, insurance_premium, loan_installment;

   
    printf("\n\n\t Enter your monthly salary: ");
    scanf("%f", &salary);

    
    insurance_premium = 0.1 * salary;

    
    remaining_salary = salary - insurance_premium;

    
    loan_installment = 0.1 * remaining_salary;

    
    remaining_salary -= loan_installment;


    printf("\n\n\t Salary: %.2f\n", salary);
    printf("\n\n\t Insurance Premium (10%%): %.2f\n", insurance_premium);
    printf("\n\n\t Loan Installment (10%% of remaining salary): %.2f\n", loan_installment);
    printf("\n\n\t Remaining Salary: %.2f\n", remaining_salary);

   
}

