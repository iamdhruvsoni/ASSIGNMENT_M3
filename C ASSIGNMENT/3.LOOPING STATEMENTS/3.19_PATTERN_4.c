#include <stdio.h>

int main() {
    int row_length = 1;
    char current_char = 'A';
    int i,j;
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < row_length; j++) {
            printf("%c", current_char++);
        }
        printf("\n");
        current_char = 'A'; 
        row_length++;
    }

    return 0;
}

