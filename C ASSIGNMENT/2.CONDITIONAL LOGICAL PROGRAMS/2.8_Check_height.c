#include<stdio.h>

main()
{
	int height;
	
	printf("Input height in cm : ");
	scanf("%d",&height);
	
	if(height<150)	
	{
		printf("person is short");
	}
	else if(height>=150 && height<=170)
	
	{
		printf("person is Average");
	}
	else if (height>170)
	
	{
		printf("person is tall");
	}
	else
	{
		printf("Invalid height entered");
	}
	
}
