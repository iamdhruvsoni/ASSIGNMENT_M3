#include<stdio.h>
#include<stdio.h>

main()
{
  char str[50];
  
  printf("\n\n\t enter school name : ");
  gets(str);
  
  printf("\n\n\t %s",str);
  puts(str);
  
  printf("\n\n\t %c%c%c",str[0],str[8],str[18]);	
}
