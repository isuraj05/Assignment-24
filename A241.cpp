#include<iostream>
using namespace std;
void isPrime(int);

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	isPrime(n);
	return 0;
}

void isPrime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==n/2+1)
		cout<<"It is a prime number";
	else
		cout<<"It is not a prime number";
}
