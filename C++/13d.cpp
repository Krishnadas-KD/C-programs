#include <iostream>
using namespace std;
template <class T>
class sum
{
	T a,b,s;
	public:
	void getdata()
	{
		cout<<"Enter 2 data";
		cin>>a>>b;
	}
	void dispaly()
	{
		s=a+b;
		cout<<"\nsum="<<s;
}
};
int main()
{
	cout<<"intiger number\n";
	sum <int> s1;
	s1.getdata();
	s1.dispaly();
	cout<<"\n\nFloating point number\n";
	sum <float> s2;
	s2.getdata();
	s2.dispaly();
}
