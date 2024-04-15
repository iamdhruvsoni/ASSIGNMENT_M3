#include<stdio.h>

main()
{
	int bs,li,ip,Rs;
	
	printf("\n\n\t Enter basic Salary : ");
	scanf("%d",&bs);
	
	ip=bs*10/100;
	li=bs*10/100;
	Rs=bs-ip-li;
	
	printf("\n\n\t");
	printf("\n\n\t Basic Salary Insurance Premium Loan Installment Remaining Salary");
	printf("\n\n\t");
	printf("\n\n\t %d \t\t\t%d\t\t%d",bs,ip,li,Rs);
}
