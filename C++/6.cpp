#include <iostream>
using namespace std;
double power(int x,int y);
int main()
{
	int n,p,r;
	cout<<"Enter X,Y";
	cin>>n>>p;
	r=power(n,p);
	cout<<n<<" TO THE POWER "<<p<<" IS "<<r;
}
double power(int x,int y)
{
	double p;
	p=1.0;
	if(y>=0)
	{
		while(y--)
		p*=x;
	}
	else
	{
		while(y++)
		p/=x;
	}
	return p;
}
