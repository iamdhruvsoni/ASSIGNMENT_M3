#include <stdio.h>

main() {
    int current_num = 1;
    int row_length = 1;
    int i,j;
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < row_length; j++) {
            printf("%d ", current_num++);
        }
        printf("\n");
        row_length++;
    }

    
}

