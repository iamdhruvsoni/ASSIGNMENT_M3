#include <stdio.h>

int main() {
    int count = 1;
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("%02d ", count++);
        }
        printf("\n");
    }

    return 0;
}

