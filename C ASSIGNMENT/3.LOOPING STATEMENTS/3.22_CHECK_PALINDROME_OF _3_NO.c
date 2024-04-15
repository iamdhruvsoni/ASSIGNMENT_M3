#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

main() {
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);

   
    printf("Enter the second number: ");
    scanf("%d", &num2);
 
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (isPalindrome(num1))
        printf("%d is a palindrome.\n", num1);
    else
        printf("%d is not a palindrome.\n", num1);

    if (isPalindrome(num2))
        printf("%d is a palindrome.\n", num2);
        
    else
        printf("%d is not a palindrome.\n", num2);

    if (isPalindrome(num3))
        printf("%d is a palindrome.\n", num3);
    else
        printf("%d is not a palindrome.\n", num3);

    
}

