#include <iostream>
using namespace std;
class sphere
{
	int r;
	float ar,v;
	public:
	void getdata()
	{
		cout<<"enter the Radius of the sphere";
		cin>>r;
	}
	void compute()
	{
		ar=4*3.14*(r*r);
		v=4/3*3.14*r*r*r;
	}
	void display()
	{
		cout<<"\nsurface of the sphere="<<ar;
		cout<<"\nvolume of the sphere="<<v;
	}
};
int main()
{
	sphere s;
	s.getdata();
	s.compute();
	s.display();
}
