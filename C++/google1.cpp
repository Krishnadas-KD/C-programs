#include <iostream>
using namespace std;
int main()
{
	int a[100],i,n,j,k,v1,v2,m;
	cout<<"enter the number of ellemnt in array:";
	cin>>n;
	cout<<"enter the array element:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the K value :";
	cin>>k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			m=a[i]+a[j];
			if(k==m)
			{
				v1=a[i];
				v2=a[j];
			}
		}
	}
	cout<<"THE 2 VALUES :"<<v1<<"+"<<v2<<"="<<k;
}
