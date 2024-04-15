#include<stdio.h>

main(){
	
	float circ,a,b,c;
	
	printf("Enter the value of a : ");
	scanf("%f",&a);
	
	printf("Enter the value of b : ");
	scanf("%f",&b);
	
	printf("Enter the value of c : ");
	scanf("%f",&c);
	
	circ= a+b+c;
	
	printf("Circumference of a triangle : %.2f",circ);
}
