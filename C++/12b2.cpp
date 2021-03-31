#include <iostream>
using namespace std;
class avrage;
class student
{
	char name[20];
	float avg;
	int m1,m2,m3;
	public:
	void getdata()
	{
		cout<<"Enter name";
		cin>>name;
		cout<<"Enter 3 marks:";
		cin >>  m1 >> m2 >> m3;
	}
	void display()
	{
		cout<<"Name:"<<name;
		cout<<"\nMark:"<<m1<<","<<m2<<","<<m3;
		cout<<"\nAvg="<<avg;
	}
	friend class avrage;
	
};
class avrage
{
	public:
	int markavg(student x)
	{
		x.avg=(x.m1+x.m2+x.m3)/3.0;
		return 5;
	}
};
int main()
{
	student s1;
	avrage m1;
	s1.getdata();
	m1.markavg(s1);
	s1.display();
	cout<<endl;
}
