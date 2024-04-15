#include<stdio.h>

main(){
	
	int days;
	float months;
	
	printf("Enter the number of days : ");
	scanf("%d",&days);
	
	months = days/30.00;
	
	printf("Equivalent months : %.2f\n",months);
}
