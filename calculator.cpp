#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"enter a charecter"<<endl;
	cin>>ch;
	switch (ch)
	{
		case '+':
				cout<<"result is: "<<a+b<<endl;
				break;
		case '-':
				cout<<"result is: "<<a-b<<endl;
				break;
		case '*':
				cout<<"result is: "<<a*b<<endl;
				break;
		case '/':
				cout<<"result is: "<<a/b<<endl;
				break;
		case '%':
				cout<<"result is:"<<a%b<<endl;
				break;
		default:
				cout<<"you entered wrong data..."<<endl; 
	}
}
