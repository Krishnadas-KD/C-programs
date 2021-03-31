#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c=0,i,n;
	cout<<"enter the limit";
	cin>>n;
	cout<<a;
	for(i=2;c<n;i++)
	{
		cout<<"\t"<<b;
		c=a+b;
		a=b;
		b=c;
		
	}
	return 0;
}
