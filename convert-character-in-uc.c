#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter character = ");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90)
	{
		printf("%c",ch);
	}
	else
	{
		printf("%c",ch-32);
	}
	
	
}