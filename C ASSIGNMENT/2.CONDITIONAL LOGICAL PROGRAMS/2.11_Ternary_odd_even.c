#include<stdio.h>

main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	(num%2==0)?printf("\n\n\t The no is even") : printf("\n\n\t The no is odd");	
}

