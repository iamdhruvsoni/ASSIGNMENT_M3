#include <stdio.h>

int main() {
    int num1, num2, temp;

  
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swap using a third variable
    printf("Swapping using a third variable:\n");
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap without using a third variable
    printf("\nSwapping without using a third variable:\n");
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

