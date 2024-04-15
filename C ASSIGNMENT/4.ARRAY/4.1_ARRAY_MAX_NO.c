#include<stdio.h>

main()
{
	int arr[]= {10,24,34,147,89};
	
	int length = sizeof(arr)/sizeof(arr[0]);
	
	int max = arr[0];
	
	int i;
	for( i = 0;i < length;i++)
	
	{
		if (arr[i]>max)
		max=arr[i];
		
	}
	printf("largest number present in given array is : %d\n",max);
}
