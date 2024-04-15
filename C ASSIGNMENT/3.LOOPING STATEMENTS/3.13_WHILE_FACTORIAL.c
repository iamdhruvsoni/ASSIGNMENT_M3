#include<stdio.h>

main()
{
	int n,i,fact=1;
	
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("%d",i);
}
