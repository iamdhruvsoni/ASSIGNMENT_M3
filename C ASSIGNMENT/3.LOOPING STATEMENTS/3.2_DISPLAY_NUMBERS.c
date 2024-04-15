#include <stdio.h>

 main() {
    int numbers[5],i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("dipslay numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

 
}

