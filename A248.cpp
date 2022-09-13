#include<iostream>
using namespace std;

float area(int);
int area(int,int);
float area(float,float);

int main()
{
	int r;
	cout<<"Enter radius: ";
	cin>>r;
	cout<<"Area of circle is "<<area(r);
	
	int l,w;
	cout<<endl<<endl<<"Enter length and width: ";
	cin>>l>>w;
	cout<<"Area of rectangle is "<<area(l,w);
	
	float b,h;
	cout<<endl<<endl<<"Enter base and height: ";
	cin>>b>>h;
	cout<<"Area of triangle is "<<area(b,h);
	return 0;
}

float area(int r)
{
	return 3.14*r*r;
}

int area(int l,int w)
{
	return l*w;
}

float area(float b,float h)
{
	return (0.5*b*h);
}
