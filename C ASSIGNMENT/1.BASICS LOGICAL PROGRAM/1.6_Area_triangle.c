#include<stdio.h>

main(){
	
	float base,height,area;
	
	printf("Enter the value of Base : ");
	scanf("%f",&base);
	
	printf("Enter the value of Height : ");
	scanf("%f",&height);
	
	area = (base + height)/2;
	printf("Area of a triangle is %.2f",area);
	
	
}
