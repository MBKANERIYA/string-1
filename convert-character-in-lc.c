#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter character = ");
	scanf("%c",&ch);
	
	if(ch>=97 && ch<=122)
	{
		printf("%c",ch);
	}
	else
	{
		printf("%c",ch+32);
	}
	
	
}