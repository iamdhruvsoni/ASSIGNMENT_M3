#include<stdio.h>
main()
{
	int amnt,p,ci,r,t;
	
	printf("enter principle: ");
	scanf("%d",&p);
	printf("enter time: ");
	scanf("%d",&t);
	printf("enter rate: ");
	scanf("%d",&r);
	
	amnt=(p*((1+r/100),t));
	
	printf("amnt=%d",amnt);
	
	ci=amnt-p;
	printf("ci=%d",ci);
	
	printf("compound interest is : %f",ci);
	
	
}
