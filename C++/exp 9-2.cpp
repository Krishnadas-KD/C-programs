#include <iostream>
using namespace std;
class reve
{
	int m;
	public:
	void procedure1()
	{
		int n,d,r=0;
		n=m;
		while(n!=0)
		{
			d=n%10;
			r=(r*10)+d;
			n=n/10;
		}
		cout<<"revers="<<r<<endl;
	}
	int procedure2()
	{
			int n,d,r=0;
		n=m;
		while(n!=0)
		{
			d=n%10;
			r=(r*10)+d;
			n=n/10;
		}
		return r;
	} 
		void getdata()
		{
			cout<<"enter a number";
			cin>>m;
		}
};
int main()
{
	int r;
	reve r1;
	r1.getdata();
	r1.procedure1();
	r=r1.procedure2();
	cout<<"revers"<<r;
}
		
		
		
		
