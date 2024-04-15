
#include<stdio.h>
main()
{
	int principle,rate,time,amount,c_interest;
	
	printf("enter the principle : ");
	scanf("%d",&principle);
	
	printf("enter the rate: ");
	scanf("%d",&rate);
	
	printf("enter the time: ");
	scanf("%d",&time);
	
	amount = ((principle *((1+ rate/100),time)));
	printf("the amount is %d",amount);
	
	c_interest=amount-principle;
	printf("the compound interest is %d",c_interest);
	
}
