#include <iostream>
using namespace std;
struct length
{
	int feet;
	float inch;
};
int main()
{
	length d1,d2,sum;
	cout<<"enter the frist distance\n";
	cout<<"enter feet";
	cin>>d1.feet;
	cout<<"enter the inch:";
	cin>>d1.inch;
	cout<<"enter the second distance\n";
	cout<<"enter feet";
	cin>>d2.feet;
	cout<<"enter the inch:";
	cin>>d2.inch;
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if(sum.inch>12)
	{
		sum.feet++;
		sum.inch=sum.inch-12;
	}
	cout<<"\n sum of the distacnce "<<sum.feet<<"feet "<<sum.inch<<"inches";
	return 0;
}
