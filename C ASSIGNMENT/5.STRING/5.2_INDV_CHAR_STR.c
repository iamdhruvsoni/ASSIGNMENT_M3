#include <stdio.h>  
#include <string.h>  

main()
{
	 char str[50];
	 int i;
	 
	 printf("Enter a string : ");
	 fgets(str,sizeof(str),stdin);
	 
	 printf("Individual characters from the string : ");
	 
	 for(i=0;i<strlen(str);i++)
	 {
	 	 if(str[i] != ' ' && str[i] != '\n') {
            printf("%c\n", str[i]);
	         }
    } 
	 
} 
