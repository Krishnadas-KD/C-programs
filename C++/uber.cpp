#include <iostream>
using namespace std;
int main()
{
	int a[100],i,n,j,b[100];
	cout<<"enter the number of ellemnt in array";
	cin>>n;
	cout<<"enter the array element";
	for(int i=0;i<;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		b[i]=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
			b[i]=b[i]*a[j];
			}
		}
	}
	cout<<"==========="<<"\n";
	
	for(i=0;i<n;i++)
	{
		cout<<b[i]<<"\t";
	}
	
}
