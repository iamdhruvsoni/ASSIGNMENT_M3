#include<stdio.h>

main(){
	float avg,n1,n2,n3,n4,n5;
	
	
	printf("Enter the value of first expense : ");
	scanf("%f",&n1);
	
	printf("Enter the value of second expense : ");
	scanf("%f",&n2);
	
	printf("Enter the value of third expense : ");
	scanf("%f",&n3);
	
	printf("Enter the value of fourth expense : ");
	scanf("%f",&n4);
	
	printf("Enter the value of fifth expense : ");
	scanf("%f",&n5);
	
	avg= (n1+n2+n3+n4+n5)/5 ;
	
	printf("Average of five expenses are : %.2f",avg);
	
}
