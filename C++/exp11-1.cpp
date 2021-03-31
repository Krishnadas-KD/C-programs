#include <iostream>
using namespace std;
double npower(int x,int y)
{
	int d=x;
	for(int i=1;i<y;i++)
	{
		d=d*x;
	}
	return d;
}
int main()
{
	int a,b,s;
	cout<<"Enter base and exponent :";
	cin>>a>>b;
	s=npower(a,b);
	cout<<"\npower="<<s;
}
