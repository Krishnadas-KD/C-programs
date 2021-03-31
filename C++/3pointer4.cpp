#include <iostream> 
using namespace std;
int main()
{
	int a[20],i,n,sum=0;
	int *ptr;
	cout<<"enter length of array";
	cin>>n;
	cout<<"enter array element";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	ptr=a;
	for(i=0;i<n;i++)
	{
		sum=sum+*ptr;
		ptr++;
	}
	cout<<"sum of array="<<sum;
	return 0;
}
