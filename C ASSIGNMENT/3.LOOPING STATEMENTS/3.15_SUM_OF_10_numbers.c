#include<stdio.h>

main()
{
	int i,sum=0;

	i=0;
	while(i<=10)
	{
		sum=sum+i;
		i++;
		
	}
	printf("Sum of the first 10 natural numbers: %d\n", sum);
}
