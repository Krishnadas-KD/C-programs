#include <iostream>
using namespace std;
class AS
{
	public:
		int a,b;
	public:
		void getdata()
		{
			cout<<"Enter 2 number";
			cin>>a>>b;
		}
		virtual int  add()
		{
			return 0;
		}
		virtual int sub()
		{
			return 0;
		}
};
class add:public AS
{
	public:
	int add()
	{
		return (a+b);
	}
};
class sub:public AS
{
	public:
		int sub()
		{
			return(a-b);
		}
};
int main()
{
	add a;
	sub s;
	AS *p1;
		p1=&a;
	p1->getdata();
	cout<<"Area of Reactangle="<<p1->add();
	cout<<endl;
	p1=&s;
	p1->getdata();
	cout<<"Area of triangle="<<p1->sub();
	cout<<endl;

}
