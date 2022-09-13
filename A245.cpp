#include<iostream>
using namespace std;
void isFib(int);

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	isFib(n);
	return 0;
}

void isFib(int n)
{
	int a=-1,b=1,f,i;
	for(i=0;i<=n+1;i++)
	{
		f=a+b;
		if(f==n)
		{
			cout<<"It is a term";
			break;
		}
		a=b;
		b=f;
	}
	if(f!=n)
		cout<<"It is not a term";
}
