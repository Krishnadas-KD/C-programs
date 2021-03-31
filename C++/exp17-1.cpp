#include <iostream>
using namespace std;
class polygon
{
	public:
		float a,b;
	public:
		void getdata()
		{
			cout<<"Enter 2 floating valus";
			cin>>a>>b;
		}
		virtual float area()
		{
			return 0;
		}
};
class rectangle:public polygon
{
	public:
	float area()
	{
		return (a*b);
	}
};
class triangle:public polygon
{
	public:
		float area()
		{
			return(a*b/2);
		}
};
int main()
{
	rectangle r;
	triangle t;
	polygon *p1;
	p1=&r;
	p1->getdata();
	cout<<"Area of Reactangle="<<p1->area();
	cout<<endl;
	p1=&t;
	p1->getdata();
	cout<<"Area of triangle="<<p1->area();
	cout<<endl;
}

