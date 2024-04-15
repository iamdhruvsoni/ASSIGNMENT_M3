#include<stdio.h>

main()
{
	char ch;
	
	printf("Input a Character to check vowel or consonant : ");
	scanf("%c",&ch);
	
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("\n\n\t It is a Vowel...");
	}
	else{
		printf("\n\n\t It is a consonant...");
	}
}
