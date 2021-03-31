
#include <iostream>
using namespace std;
class operation
{
	int a,b;
	public:
	void getdata()
	{
		cout<<"Enter 2 number:";
		cin>>a>>b;
	}
	friend int add(operation);
	friend int multi(operation);
};
int add(operation a1)
{
	return (a1.a+a1.b);
}
int multi(operation a)
{
	return (a.a*a.b);
}
int main()
{
	int s,m;
	operation a;
	a.getdata();
	s=add(a);
	m=multi(a);
	cout<<"sum="<<s;
	cout<<"MUlti="<<m;
}
