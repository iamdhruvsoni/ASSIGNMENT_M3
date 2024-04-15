#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;
    int i;

    printf("Enter 5 numbers:\n");
    for ( i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for ( i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("\nSum of the numbers in the array: %d\n", sum);

    return 0;
}

