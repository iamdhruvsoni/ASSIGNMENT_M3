#include<stdio.h>

main()
{
	int num,i,fact=1;
	
	printf("Input the no for factorial : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;

		
	}
		printf("\n\n\t %d",fact);
}
