#include <stdio.h>

int main() {
    char line[150];

    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);

    int i, j;
    for (i = 0, j = 0; line[i] != '\0'; ++i) {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            line[j++] = line[i];
        }
    }
    line[j] = '\0';

    printf("Output String: %s", line);
    return 0;
}

