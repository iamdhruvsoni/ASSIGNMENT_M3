#include <stdio.h>

 main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int power1 = num;       
    int power2 = num * num; 
    int power3 = num * num * num; 

    printf("First power: %d\n", power1);
    printf("Second power: %d\n", power2);
    printf("Third power: %d\n", power3);

    return 0;
}

