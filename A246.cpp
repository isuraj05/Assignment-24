#include<iostream>
using namespace std;
void swap(int&,int&);

int main()
{
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	swap(x,y);
	cout<<endl<<"After swapping the given two numbers, x="<<x<<" and y="<<y;
	return 0;
}

void swap(int &p,int &q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}
