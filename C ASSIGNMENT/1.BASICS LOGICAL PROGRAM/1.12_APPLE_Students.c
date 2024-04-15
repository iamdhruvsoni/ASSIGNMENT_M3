#include <stdio.h>

int main() {
    int num_students, apples_per_student, total_apples;

    printf("\n\n\t Enter the number of students:");
    scanf("%d", &num_students);

    apples_per_student = 5;

    total_apples = num_students * apples_per_student;

    printf("\n\n\t Total number of apples required = %d", total_apples);

    return 0;
}

