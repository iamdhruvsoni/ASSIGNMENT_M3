#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    int max_chars = 0;
    int i;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    int length = strlen(str);

    for ( i = 0; i < length; i++) {
        if (str[i] != ' ') 
            max_chars++;
    }

    printf("Maximum number of characters in the string: %d\n", max_chars);

    return 0;
}

