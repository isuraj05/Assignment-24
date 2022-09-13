#include<iostream>
using namespace std;
int factorial(int);
int comb(int n,int r);
void pascal(int);

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	pascal(n);
	return 0;
}

int factorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
		f=f*i;
	
	return f;
}

int comb(int n,int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));
}

void pascal(int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			k=0;
			if(j==0)
			{
				while(k<(n-1)-i)
				{
					cout<<" ";
					k++;
				}
			}
			
			cout<<comb(i,j)<<" ";
		}
		cout<<endl;
	}
}
