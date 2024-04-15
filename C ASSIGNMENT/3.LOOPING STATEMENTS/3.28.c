#include <stdio.h>

main() {
    int n,i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("1 ");
    int current = 1;
    for ( i = 1; i < n; i++) {
        if (i % 2 == 1) {
            current *= 2;
        } else {
            current *= 3;
        }
        printf("%d ", current);
    }

    printf("\n");

    return 0;
}

