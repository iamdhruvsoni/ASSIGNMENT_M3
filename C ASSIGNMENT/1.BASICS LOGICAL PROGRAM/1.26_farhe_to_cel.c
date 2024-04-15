#include<stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("\n\n\t Enter the Temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    
    printf("\n\n\t The value of Celsius is: %.2f\n", celsius);
    
    return 0;
}

