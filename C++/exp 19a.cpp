#include <iostream>
using namespace std;
class complex
{
	public:
	int x,y;
	public:
	void getdata()
	{
		cin>>x>>y;
	}
	void display()
	{
		cout<<x<<"+"<<y<<"i";
		cout<<"\n";
	}
	friend complex operator +(complex,complex);
	 
};
complex operator +(complex c1,complex c2)
	 {
		 complex sum;
		 sum.x=c1.x+c2.x;
		 sum.y=c1.y+c2.y;
		 return sum;
	 }
int main()
{
	complex obj1,obj2;
	cout<<"Enter X & y complex no.1=";
	obj1.getdata();
	cout<<"Enter X & y complex no.2";
	obj2.getdata();
	cout<<"Complex No.1=";
	obj1.display();
	cout<<"Complex No.2=";
	obj2.display();
	complex obj3;
	obj3=obj1+obj2;
	cout<<"sum of complex nos=";
	obj3.display();
}

