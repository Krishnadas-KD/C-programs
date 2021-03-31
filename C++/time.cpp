#include <iostream>
using namespace std;
struct time
{
	int h,m,s;
};
int main()
{
	time t1,t2,d;
	cout<<"enter the frist time\n";
	cout<<"enter hours,minites and seconds";
	cin>>t1.h>>t1.m>>t1.s;
	cout<<"enter the second time\n";
	cout<<"enter hours,minites and seconds";
	cin>>t2.h>>t2.m>>t2.s;
	if(t2.s>t1.s)
	{
		t1.m--;
		t1.s=t2.s+60;
	}
	d.s=t1.s-t2.s;
		if(t2.m>t1.m)
	{
		t1.h--;
		t1.m=t2.m+60;
	}
	d.m=t1.m-t2.m;
	d.h=t1.h-t2.h;
	cout<<"the time differnce::: "<<d.h<<":"<<d.m<<":"<<d.s;
	return 0;
}
