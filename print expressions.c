#include<stdio.h>
void main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	float div=(float)(x+y)/(x-y);
	int mult=(x+y)*(x-y);
	printf("%f   %d",div,mult);
}
