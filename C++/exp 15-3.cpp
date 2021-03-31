#include <iostream>
using namespace std;
class large
{
	int max,n;
	public:
	large(int x)
	{
		n=x;
	}
	int maxim()
	{
		return this ->max=n;
	}
	void compare(large l)
	{
	 if(this->maxim() > l.maxim())
		{
			cout<<"The largest number"<<maxim();		
		}
		else
			cout<<"The largest number"<<l.maxim();
		
	}
	
};

int main()
{
	int a;
	int  b;
	cout<<"enter fist number ?";
	cin>>a;
	large l1(a);
	cout<<"enter second number ?";
	cin>>b;
	large l2(b);
	l1.compare(l2);

}
