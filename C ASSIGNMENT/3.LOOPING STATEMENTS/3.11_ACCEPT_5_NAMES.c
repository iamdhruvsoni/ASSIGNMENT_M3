#include <stdio.h>
#include <string.h>

int main() {
    const int maxNameLength = 50;
    const int numNames = 5;
    int i;
    
    char names[numNames][maxNameLength];
    
    printf("Enter 5 names:\n");
    for ( i = 0; i < numNames; i++) {
        printf("Name %d: ", i+1);
        fgets(names[i], sizeof(names[i]), stdin);
        
  
        if (names[i][strlen(names[i]) - 1] == '\n')
            names[i][strlen(names[i]) - 1] = '\0';
    }
     
    printf("\nNames entered by the user:\n");
    for ( i = 0; i < numNames; i++) {
        printf("%d. %s\n", i+1, names[i]);
    }
    
    return 0;
}

