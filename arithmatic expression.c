#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
	float exp=(a+(float)b/c*d-e)*(f-g);
	printf("%f",exp);
	return 0;
}
