#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n>0)
		{
			r=n%10;			
			sum=r+sum;			
			n=n/10;		
		}
	}
	printf("Sum is: %d.",sum);
}
