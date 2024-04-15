#include <stdio.h>

int main() {
    int num1, num2;

    printf("\n\n\t Enter the first integer: ");
    scanf("%d", &num1);

    printf("n\n\t Enter the second integer: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("\n\n\t The two integers are equal.\n");
    } else {
        printf("\n\n\t The two integers are not equal.\n");
    }

    return 0;
}

