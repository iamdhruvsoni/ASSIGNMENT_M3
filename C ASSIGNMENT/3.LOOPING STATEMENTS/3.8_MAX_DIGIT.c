#include<stdio.h>
main()
{
	int number,maxDigit = -1;
    printf("\n\n\t Enter an integer: ");
    scanf("%d", &number);


    number = (number < 0) ? -number : number;

    while (number != 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    printf("\n\n\t Max number is: %d\n", maxDigit);

    return 0;
}
