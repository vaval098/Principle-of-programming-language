#include<stdio.h>
int main()
{
	char a;
	printf("Enter a charecter...\n");
	scanf("%c",&a);
	
	if(a>=65 && a<=90)
	{
		printf("\t%c in UPPERCASE ",a);
	}
	else if(a>=97 && a<=122)
	{
		printf("\t%c in lowercase ",a);
	}
	else if(a>= 48 && a<= 57)
	{
		printf("\t%c is a Digit ",a);
	}
	else
		printf("\t%c is a special symbol...",a);
	
}
