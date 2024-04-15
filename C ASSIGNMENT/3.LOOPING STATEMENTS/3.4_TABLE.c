#include<stdio.h>

main()
{
	int n,i;
	
	printf("Enter a number for table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	
	{
		printf("\n\n\t %d * %d = %d",n,i,n*i);
	}
}
