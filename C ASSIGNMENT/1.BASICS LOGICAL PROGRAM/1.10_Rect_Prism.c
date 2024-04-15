#include<stdio.h>

main(){
	
	float area,h,w,l;
	
	printf("Enter the value of length : ");
	scanf("%f",&l);
	
	
	printf("Enter the value of width : ");
	scanf("%f",&w);
	
	printf("Enter the value of height : ");
	scanf("%f",&h);
	
	area =2 * (w*l+h*l+h*w) ;
	
	printf("Area of the Rectangle Prism :%.2f",area);
	
}
