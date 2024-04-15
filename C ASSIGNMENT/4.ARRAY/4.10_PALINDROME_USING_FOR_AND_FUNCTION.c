#include <stdio.h>

int isPalindrome(int num) {
    int reverse = 0, remainder, originalNum;

    originalNum = num;

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
    }

    if (originalNum == reverse)
        return 1;
    else
        return 0;
}

 main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);

    
}

