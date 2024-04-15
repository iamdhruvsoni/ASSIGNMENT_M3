#include<stdio.h>

main()
{
	int n1,n2,n3;
	
	printf("Enter the value of n1 : ");
	scanf("%d",&n1);
	   
	printf("Enter the value of n2 : ");
	scanf("%d",&n2);
	
	printf("Enter the value of n3 : ");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3){
		printf("\n\n\t number1 is maximuum");
	}
	
	else if(n2>n1 && n2>n3){
		printf("\n\n\t number2 is maximum ");
	}
	
	else{
		printf("\n\n\t number3 is maximum");
	}
}
