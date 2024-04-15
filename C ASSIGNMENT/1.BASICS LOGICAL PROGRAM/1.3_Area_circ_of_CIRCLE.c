#include<stdio.h>
main(){
	
	float r,area,circ;
	
	
	
	printf("Enter Radius : ");
	scanf("%f",&r);
	
	area = 3.14*r*r;
	printf("Area of a circle: %.2f",area);
	
	circ=2*3.14*r;
	printf("\n\nCircumference of circle is: %.2f",circ);
	
}
