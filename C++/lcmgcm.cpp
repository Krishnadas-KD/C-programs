#include <iostream>
using namespace std;
int main()
{
	int a,b,i,g,l,r;
	cout<<"enter a number ";
	cin>>a>>b;
	i=a;
	g=b;
	r=i%g;
	while(r>0)
	{
		i=g;
		g=r;
		r=i%g;
	}
	cout<<"the greatest common divison us"<<g<<endl;
	l=(a*b)/g;
	cout<<"the leat common multiple is"<<l<<endl;
	return 0;
}

