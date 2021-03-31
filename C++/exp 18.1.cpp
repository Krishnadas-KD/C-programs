#include <iostream>
using namespace std;
class complex
{
	public:
	int x,y;
	public:
	void getdata()
	{
		cout<<"Enter X & y complex =";
		cin>>x>>y;
	}
	void display()
	{
		cout<<"comlex no.=";
		cout<<x<<"+"<<y<<"i";
		cout<<"\n";
	}
	void operator++()
	{
		x=x+1;
		y=y+1;
	} 
	void operator--()
	{
		x=x-1;
		y=y-1;
	}
};
int main()
{
	complex obj;
	obj.getdata();
	obj.display();
	
	++obj;
	cout<<"increment=";
	obj.display();
	
	--obj;
	cout<<"dicriment=";
	obj.display();
}
