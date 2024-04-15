#include<stdio.h>

main()
{
	int num[5],i;
	
	
	for(i=1;i<=5;i++)
	
	{
		printf("\n\n\t Enter the number [%d] :",i);
		scanf("%d",&num[i]);
	}
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Enter the number [%d] :%d",i,num[i]);
	
	}
	
}
