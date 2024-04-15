#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; string[i] != '\0'; i++) {
        
        if (isalpha(string[i])) {
            char ch = tolower(string[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}

