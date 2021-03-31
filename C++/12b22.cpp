#include <iostream>
using namespace std;
class avrage;
class student
{
	char name[20];
	int m1,m2,m3;
	public:
	void getdata()
	{
		cout<<"Enter name";
		cin>>name;
		cout<<"Enter 3 marks:";
		cin >>  m1 >> m2 >> m3;
	}
	friend class avrage;
	
};
class avrage
{
	float avg;
	public:
	float markavg(student x)
	{
		avg=(x.m1+x.m2+x.m3)/3.0;
		cout<<"Name:"<<x.name;
		cout<<"\nMark:"<<x.m1<<","<<x.m2<<","<<x.m3;
		cout<<"\nAvg="<<avg;
		return avg;
	}
};
int main()
{
	student s1;
	avrage m1;
	s1.getdata();
	m1.markavg(s1);
	cout<<endl;
}
