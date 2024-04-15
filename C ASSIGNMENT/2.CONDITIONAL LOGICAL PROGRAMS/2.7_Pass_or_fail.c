#include<stdio.h>

main(){
	
	int marks;
	
	printf("\n\n\t Enter the marks : ");
	scanf("%d",&marks);
	
	if(marks>=40){
		printf("\n\n\t Student is pass...");
	}
	else{
		printf("\n\n\t Student is fail...");
	}
}
