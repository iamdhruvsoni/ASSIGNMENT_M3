#include <stdio.h>
#include <string.h>

int main() {
    int ctr = 0, i, freq = 0;
    int i_val, s_val, spc;
    char str[100];

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    ctr = strlen(str);

    for (i = 0; i <= ctr - 2; i++) {
        i_val = (str[i] == 'i' || str[i] == 'I');
        s_val = (str[i + 1] == 's' || str[i + 1] == 'S');
        spc = (str[i + 2] == ' ' || str[i + 2] == '\0');

        if ((i_val && s_val && spc) == 1)
            freq++;
    }

    printf("The frequency of the word 'is' is : %d\n\n", freq);

    return 0;
}

