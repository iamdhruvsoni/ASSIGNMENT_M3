#include <stdio.h>
#include <string.h>

int main() {
    char str[50]=" ";
    int l,i ;
    printf("Enter the string : ");
   fgets (str, sizeof str,stdin);
    l=strlen(str);
    for (i=l; i>=0; i--){
        printf ("%c ",str[i]);
    }
    return 0;
}
