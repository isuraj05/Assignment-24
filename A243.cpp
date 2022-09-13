#include<iostream>
using namespace std;
void power(int,int);

int main()
{
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	power(x,y);
	return 0;
}

void power(int x,int y)
{
	int i,pow=1;
	for(i=1;i<=y;i++)
		pow=pow*x;
	
	cout<<endl<<x<<" Raised to the power "<<y<<" -> "<<pow;
}
