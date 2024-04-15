#include<stdio.h>

main()

void reverse(char *str,int index,int n)
{
	if(index==n)
	return ;
	
	char temp = str[index];
	
	reverse(str,index+1,n);
	
	printf("%c",temp);
	
	
}

main()
{
	char a[] = "Hello I AM DHRUV";
	int n = sizeof(a) / sizeof(a[0]);
	reverse(a,0,n);
	
}
