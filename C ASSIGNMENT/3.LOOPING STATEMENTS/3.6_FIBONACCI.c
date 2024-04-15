#include<stdio.h>

main()
{
	int n,i,a=0,b=1,c;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	printf("\n\n\t %d %d",a,b);
	
	for(i=1;i<=n;i++)
	
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d", c);
	}
	    printf("\n");
}
