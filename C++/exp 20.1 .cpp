#include <iostream>
using namespace std;
class Baseclass
{
	int n1,n2;
	public:
		void getdata()
		{
			cout<<"enter 2 valur";
			cin>>n1>>n2;
		}
		friend int mean(Baseclass);
};
int mean(Baseclass obj)
{
	int m;
	m=((obj.n1+obj.n2)/2);
	return m;
}
int main()
{
	Baseclass obj1;
	int mn;
	obj1.getdata();
	mn=mean(obj1);
	cout<<"mean of 2 number=";
	cout<<mn<<endl;
}
