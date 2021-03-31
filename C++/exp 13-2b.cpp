#include <iostream>
using namespace std;

void oddcount();
int main()
{
	int i,n;
	int a[100];
	cout<<"enter the value of n:";
	cin>>n;
	cout<<"Enter numbers?:";
	for(i=0;i<n;++i) cin>>a[i];
	for(i=0;i<n;i++)
	{
		int r=a[i]%2;
		if(r==1) oddcount();
	}
	
}
void oddcount()
{
	 int count=0;
	++count;
	cout<<"Odd Count="<<count<<endl;
}

