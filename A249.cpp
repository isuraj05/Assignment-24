#include<iostream>
using namespace std;

int max(int,int);
float max(float,float);

int main()
{
	int a,b;
	cout<<"Enter two integer numbers: ";
	cin>>a>>b;
	cout<<"Maximum between the two given integer numbers is "<<max(a,b);
	
	float x,y;
	cout<<endl<<endl<<"Enter two real numbers: ";
	cin>>x>>y;
	cout<<"Maximum between the two given real numbers is "<<max(x,y);
	return 0;
}

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

float max(float x,float y)
{
	if(x>y)
		return x;
	else
		return y;
}
