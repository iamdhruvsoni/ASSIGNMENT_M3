#include <stdio.h>

int main() {
    int nums[10];
    int even = 0, odd = 0;
    int sumEven = 0, sumOdd = 0;
    int i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < 10; i++) {
        if (nums[i] % 2 == 0) {
            even++;
            sumEven += nums[i];
        } else {
            odd++;
            sumOdd += nums[i];
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("SumE: %d\n", sumEven);
    printf("SumO: %d\n", sumOdd);

    return 0;
}

