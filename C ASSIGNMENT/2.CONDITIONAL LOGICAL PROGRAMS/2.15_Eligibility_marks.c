#include<stdio.h>

main()
{
	int phy_marks,chem_marks,maths_marks,total_marks,total_maths_phy;
	
	printf("Enter the marks obtained in Physics : ");
	scanf("%d",&phy_marks);
	printf("Enter the marks obtained in Chemistry : ");
	scanf("%d",&chem_marks);
	printf("Enter the marks obtained in Maths  : ");
	scanf("%d",&maths_marks);
	printf("Enter the marks obtained in Total Marks : ");
	scanf("%d",&total_marks);
	printf("Enter the marks obtained in Maths and physics : ");
	scanf("%d",&total_maths_phy);
	
	if(phy_marks >= 55 && chem_marks >= 50 && maths_marks >= 65 && total_marks >= 190)
	
	{
		printf("The candidate is eligible");
		
	}
	else if (total_maths_phy>=140)
	{
		printf("The candidate is eligible");
	}
	else
	{
		printf("The candidate is not eligible");
	}
}
