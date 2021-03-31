#include <iostream>
using namespace std;
class vector
{
	public:
	int a[5];
	public:
	void getdata()
	{
		cout<<"Enter 5 data vector:";
		for(int i=0;i<5;i++) cin>>a[i];
	}
	void display()
	{
				cout<<"The 5 data vector:";
		for(int i=0;i<5;i++) cout<<a[i]<<"\t";
		cout<<"\n";
	}
	friend void operator - (vector &v);
};
 void operator - (vector &v)
	{
		for(int i=0;i<5;++i)v.a[i]=-v.a[i];
	}
int main()
{
	vector obj;
	obj.getdata();
	obj.display();
	
	-obj;
	cout<<"After negation:";
	obj.display();
	
}
