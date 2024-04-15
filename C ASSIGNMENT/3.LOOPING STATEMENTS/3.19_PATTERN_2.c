#include <stdio.h>

int main() {
    int row_length = 1;
    char current_char = 'A';
    int i,j;
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < row_length; j++) {
            printf("%c", current_char++);
            if (current_char > 'O') 
                current_char = 'A';
        }
        printf("\n");
        row_length++;
    }

    return 0;
}

