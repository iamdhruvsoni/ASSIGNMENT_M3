#include <stdio.h>
#include <string.h>

int main() {
    char students[5][50];
    int i; 

    printf("Enter the names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i]);
    }

    printf("\nNames of students stored in array:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, students[i]);
    }

    return 0;
}

