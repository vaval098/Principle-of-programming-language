#include<iostream>
using namespace std;
int main()
{
	int num,cube,final=0,rem;
	cout<<"enter a number"<<endl;
	cin>>num;
	int n=num;
	while(num!=0)
	{
		rem=num%10;
		cube=rem*rem*rem;
		final=cube+final;
		num=num/10;
	}
	if(final==n)
	{
		cout<<"result is: "<<final<<endl;
	}
	else
	{
		cout<<"............."<<endl;
	}
	return 0;
}
