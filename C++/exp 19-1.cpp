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
	 complex operator +(complex c)// complex c is copy the value of obj2 values
	 {
		 complex s;//temp class to store result of x and y values
		 s.x=x+c.x;// x=obj1 value c.x= obj2 value
		 s.y=y+c.y;// same as above
		 return s;//go to main() last complex sum
	 }
};
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
	complex sum;
	sum=obj1+obj2;
	cout<<"sum of complex nos=";
	sum.display();
}
