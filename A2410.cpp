#include<iostream>
using namespace std;

float add(int,float);
float add(float,int);

int main()
{
	int a;
	float b;
	cout<<"Enter an integer and a real number: ";
	cin>>a>>b;
	cout<<"Sum is "<<add(a,b);
	
	float x;
	int y;
	cout<<endl<<endl<<"Enter a real and an integer number: ";
	cin>>x>>y;
	cout<<"Sum is "<<add(x,y);
	return 0;
}

float add(int a,float b)
{
	return a+b;
}

float add(float x,int y)
{
	return x+y;
}
