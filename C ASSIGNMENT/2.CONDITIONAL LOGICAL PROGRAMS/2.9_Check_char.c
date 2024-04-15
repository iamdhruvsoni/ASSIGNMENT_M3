#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter a character : ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	
	{
		printf("\n\n\t It is Uppercase");
	}
	else if(ch>='a' && ch<='z')
	{
	printf("\n\n\t It is Lowercase");	
	}
	else if (ch>='0' && ch<='9')
	
	{
		printf("\n\n\t It is a digit");
	}
	else
	{
		printf("It is a special character ");
	}
	
	
	
}
