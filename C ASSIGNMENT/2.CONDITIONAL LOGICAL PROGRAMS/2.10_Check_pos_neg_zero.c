#include<stdio.h>

int num;
  
main(){
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(num>0){
		printf("\n\n\t Num is positive");
	}
	
	else if(num<0){
		printf("\n\n\t Num is negative");
	}
	
	else {
		printf("\n\n\t Num is zero");
	}
}
