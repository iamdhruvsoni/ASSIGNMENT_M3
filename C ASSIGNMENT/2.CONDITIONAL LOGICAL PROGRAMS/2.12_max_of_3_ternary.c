
#include<stdio.h>
main()
{
	int num1,num2,num3,max;
	
	printf("\n\n\t Enter three numbers : ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	max=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
	
	printf("\n\n\t The maximum number among %d, %d, and %d is: %d\n", num1, num2, num3, max);
	
}
