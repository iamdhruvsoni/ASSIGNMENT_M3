#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int ctr, i;

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    ctr = strlen(str);

    printf("The given sentence is: %s", str);

    printf("After Case changed the string is: ");
    for (i = 0; i < ctr; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    printf("%s\n\n", str);

    return 0;
}

