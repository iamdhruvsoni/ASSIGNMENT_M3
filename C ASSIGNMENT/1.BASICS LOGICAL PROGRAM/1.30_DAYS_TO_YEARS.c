#include <stdio.h>

int main() {
    int choice;
    float years, days, result;

    printf("\n\n\t Choose conversion:\n");
    printf("\n\n\t 1.Years to Days\n");
    printf("\n\n\t 2.Days to Years\n");
    scanf("%d", &choice);

    printf("\n\n\t Enter value: ");
    scanf("%f", &result);

 
    float conversionFactors[2] = {365.25, 1.0 / 365.25};

    result *= conversionFactors[choice - 1];

    printf("\n\n\t Result: %.2f\n", result);

    return 0;
}

