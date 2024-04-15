#include<stdio.h>

main(){
	
	float length,width,area;
	
	printf("Enter the value of length:");
	scanf("%f",&length);
	
	printf("Enter the value of width:");
	scanf("%f",&width);
	
	area = length*width;
	printf("Area of a rectangle is : %.2f",area);
}
