
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
	friend void operator ++(complex &);
	friend void operator --(complex &);
};
void operator ++ ( complex &obj)
{
		obj.x=obj.x+1;
		obj.y=obj.y+1;
} 
void operator--(complex &fc)
	{
		fc.x=fc.x-1;
		fc.y=fc.y-1;
	}
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
