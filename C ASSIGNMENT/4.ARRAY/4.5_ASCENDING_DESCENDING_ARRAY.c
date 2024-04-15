#include <stdio.h>

int main() {
    int num[20];
    int i, j, a, n;
    int choice;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; ++i)
        scanf("%d", &num[i]);

    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Sorting in ascending order
        for (i = 0; i < n; ++i) {
            for (j = i + 1; j < n; ++j) {
                if (num[i] > num[j]) {
                    a = num[i];
                    num[i] = num[j];
                    num[j] = a;
                }
            }
        }

        printf("The numbers in ascending order are:\n");
        for (i = 0; i < n; ++i)
            printf("%d\n", num[i]);
    } else if (choice == 2) {
        // Sorting in descending order
        for (i = 0; i < n; ++i) {
            for (j = i + 1; j < n; ++j) {
                if (num[i] < num[j]) {
                    a = num[i];
                    num[i] = num[j];
                    num[j] = a;
                }
            }
        }

        printf("The numbers in descending order are:\n");
        for (i = 0; i < n; ++i)
            printf("%d\n", num[i]);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

