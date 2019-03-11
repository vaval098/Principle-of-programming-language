#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	printf("Enter number ");
	scanf("%d",&n);
	for(i=0;i<=n-2;i++)
	{
		
		if(a==0 && b==1)
		{
			printf("%d, %d",a,b);
		}
		c=a+b;
		printf(", %d",c);
		a=b;
		b=c;
		
	}
}
