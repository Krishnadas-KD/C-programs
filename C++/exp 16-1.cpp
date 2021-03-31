#include <iostream>
using namespace std;
class student
{
	protected:
	int regno,m1,m2;
	public:
		void get()
		{
			cout<<"Enter Regno,mark1,mark2?";
			cin>>regno>>m1>>m2;
			
		}
};
class sports
{
	protected:
	int sm;
	public:
		void getsm()
		{
			cout<<"Enter Sport Mark?";
			cin>>sm;
		}
	
};
class marklist:public student,public sports
{
	int tot,avg;
	public:
		void dispaly()
		{
			tot=m1+m2+sm;
			avg=tot/3;
			cout<<"Total Mraks="<<tot<<endl;
			cout<<"Avarage mark="<<avg<<endl;
		}
};
int main()
{
	marklist m1;
	m1.get();
	m1.getsm();
	m1.dispaly();
}
