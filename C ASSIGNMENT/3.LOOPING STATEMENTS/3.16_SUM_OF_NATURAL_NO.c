#include <stdio.h>

int main() {
    int i, num , sum = 0;

    printf("Enter the number: ");
    scanf("%d",&num);
     
    i = 1;
    while(i <= num) {
        sum += i;
        i++;
    }

    printf("Sum of the first %d natural numbers: %d\n", num, sum);

    return 0;
}

