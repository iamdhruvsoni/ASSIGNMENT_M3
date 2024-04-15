#include <stdio.h>

int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;
    int i;
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        int temp = remainder;
        for ( i = 1; i < n; ++i) {
            remainder *= temp;
        }
        result += remainder;
        originalNum /= 10;
    }
    if (result == num)
        return 1;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}

