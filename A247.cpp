#include<iostream>
using namespace std;
int add(int,int,int=0);

int main()
{
	int x,y,z;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	cout<<endl<<"Addition of the given two numbers is "<<add(x,y);
	
	cout<<endl<<endl<<"Enter three numbers: ";
	cin>>x>>y>>z;
	cout<<endl<<"Addition of the given three numbers is "<<add(x,y,z);
	return 0;
}

int add(int a,int b,int c)
{
	return a+b+c;
}
