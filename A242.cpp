#include<iostream>
using namespace std;
void highDigit(int);

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	highDigit(n);
	return 0;
}

void highDigit(int n)
{
	int hd;
	hd=n%10;
	
	while(n!=0)
	{
		if( hd < (n/10)%10 )
			hd=(n/10)%10;
			
		n=n/10;
	}
	cout<<endl<<"Highest digit in the given number is "<<hd;
}
