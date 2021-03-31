#include <iostream>
using namespace std;
int larg(int* x,int* y,int* z)
{
	int t;
	t=*x;
	if(t<*y)
		t=*y;
	if(t<*z)
		t=*z;
	return t;
}
int main()
{
	int a,b,c,m;
	cout<<"enter 3 number";
	cin>>a>>b>>c;
	m=larg(&a,&b,&c);
	
	cout<<"largest="<<m;
	
}

