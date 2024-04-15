#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i, numerator = 1, denominator = 2, sign = 1; 

    for (i = 1; i <= n; i++) {
        if (i == n) {
          
            printf("%d/%d", numerator, denominator);
        } else {
            if (sign == 1) {
                printf("%d/%d + ", numerator, denominator);
            } else {
                printf("%d/%d - ", numerator, denominator);
            }
        }

        numerator = numerator + 1;
        denominator = denominator + 1;
        if (i != n) 
            sign = -sign;
    }

    printf("\n");

    return 0;
}

