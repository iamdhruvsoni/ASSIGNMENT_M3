#include<stdio.h>
#include<stdio.h>

main()
{
  char str[50];
  
  printf("\n\n\t enter counrty name : ");
  gets(str);
  
  printf("\n\n\t %s",str);
  puts(str);
  
  printf("\n\n\t %c%c%c",str[0],str[1],str[2]);	
}
