#include<stdio.h>

main()
{
	int n,sum=0,firstdigit,lastdigit;
	
	printf("Enter number to find the sum of firstdigit and lastdigit : ");
	scanf("%d",&n);
	
	lastdigit=n%10;
	
	 while(n >= 10)
    {
        n = n / 10;
    }
    firstdigit = n;
    
    sum = firstdigit+lastdigit;
    
    printf("\n\n\t Sum of first and last digit number = %d",sum);
}
