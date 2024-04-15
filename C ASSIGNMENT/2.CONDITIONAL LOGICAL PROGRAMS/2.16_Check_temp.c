#include<stdio.h>

main()
   
{
	int temp;
	printf("Enter the temp : ");
	scanf("%d",&temp);
	
	if(temp<0)
	{
		printf("It is freezing temperature");
	}
	else if(temp>=0 && temp<=10)
	{
		printf("It is Very cold temperature");
	}
		else if(temp>=10 && temp<=20)
	{
		printf("It is cold temperature");
	}
		else if(temp>=20 && temp<=30)
	{
		printf("It is normal temperature");
	}
		else if(temp>=30 && temp<=40)
	{
		printf("It is hot temperature");
	}
		else if(temp>=40)
	{
		printf("It is very hot temperature");
	}
	else{
		printf("Invalid temp");
	}
}
