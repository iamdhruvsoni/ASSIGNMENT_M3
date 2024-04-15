#include <stdio.h>

 factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int numbers[5];
    long long factorials[5];
    int i;

    
    printf("Enter 5 numbers:\n");
    for ( i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for ( i = 0; i < 5; i++) {
        factorials[i] = factorial(numbers[i]);
    }

    printf("\nFactorials of the numbers entered by the user:\n");
    for ( i = 0; i < 5; i++) {
        printf("Factorial of %d: %lld\n", numbers[i], factorials[i]);
    }

    return 0;
}

