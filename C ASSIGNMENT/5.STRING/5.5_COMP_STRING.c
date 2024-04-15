#include<stdio.h>
#include<string.h>

main()
{
	char str1[50],str2[50];
	int result ,i;
	
	printf("\n Enter the first string : ");
	gets(str1);
	
	printf("\n Enter the second string : ");
	gets(str2);
	
	for(i = 0; str1[i] == str2[i] && str1[i] == '\0'; i++);
		   
  	if(str1[i] < str2[i])
   	{
   		printf("\n Str1 is Less than Str2");
	}
	else if(str1[i] > str2[i])
   	{
   		printf("\n Str2 is Less than Str1");
	}
	else
   	{
   		printf("\n Str1 is Equal to Str2");
	}
  	
  

	
	
	
}
