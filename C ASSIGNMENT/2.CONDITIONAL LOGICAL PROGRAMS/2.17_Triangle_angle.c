#include<stdio.h>

main()
{
	int angle1,angle2,angle3;
	
	printf("Enter the value of angle1 :");
	scanf("%d",&angle1);
	printf("Enter the value of angle2 :");
	scanf("%d",&angle2);
	printf("Enter the value of angle3 :");
	scanf("%d",&angle3);
	
	if(angle1+angle2+angle3==180)
	{
		printf("Triangle can be formed with the given angle");
	}
	else
	{
	printf("Triangle cannot be formed with the given angle");	
	}
}
