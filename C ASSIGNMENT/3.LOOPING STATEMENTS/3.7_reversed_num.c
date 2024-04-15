#include<stdio.h>

main()
{
	int number,reversednumber=0,remainder;
	
	printf("Enter an integer : ");
	scanf("%d",&number);
	
	while(number!=0)
	{
		remainder = number % 10;
		reversednumber=reversednumber*10+remainder;
		number/=10;
		
	}
	printf("Reversed number : %d\n",reversednumber);
	
}
