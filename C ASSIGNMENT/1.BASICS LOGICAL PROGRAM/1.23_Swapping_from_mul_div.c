#include <stdio.h>

int main() {
    int num1, num2;

    
    printf("\n\n\t Enter first number: ");
    scanf("%d", &num1);
    printf("\n\n\t Enter second number: ");
    scanf("%d", &num2);

    
    printf("\n\n\t Swapping using multiplication and division:\n");
    printf("\n\n\t Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    printf("\n\n\t After swapping: num1 = %d, num2 = %d\n", num1, num2);

    
}

