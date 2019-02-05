#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int eo=(n%2==0)?0:1;
	if(eo==0)
	printf("even...");
	else
	printf("odd...");
	return 0;
	
}


