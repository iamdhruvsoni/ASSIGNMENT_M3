#include<stdio.h>

main(){
	
	float kilometers,meters;
	
	printf("Enter the Kilometers : ");
	scanf("%f",&kilometers);
	
    meters = kilometers*1000;
    
    printf("%.2f Kilometers is equal to %.2f meters\n",kilometers,meters);
	
}
