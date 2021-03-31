#include <iostream>
using namespace std;
class Baseclass2;
class Baseclass1
{
	int n1,n2;
	public:
	void getdata()
	{
			cout<<"enter 2 numbers:";
			cin>>n1>>n2;
	}
	friend int avg(Baseclass1,Baseclass2);
};
class Baseclass2
{
	int n3,n4,n5;
	public:
	void getdata()
	{
			cout<<"enter 3 numbers:";
			cin>>n3>>n4>>n5;
	}
	friend int avg(Baseclass1,Baseclass2);
};
int avg(Baseclass1 obj1,Baseclass2 obj2)
{
	int A;
	A=((obj1.n1+obj1.n2+obj2.n3+obj2.n4+obj2.n5)/5);
	return A;
}
int main()
{
	int T;
	Baseclass1 d1;
	Baseclass2 d2;
	d1.getdata();
	d2.getdata();
	T=avg(d1,d2);
	cout<<"\nAverage of 5 nymber:"<<T;
	
}
