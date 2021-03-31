#include <iostream>
using namespace std;
class student
{
	public:
	int regno;
	char name[20];
	void getstudent()
	{
		cout<<"\nEnter teh regno";
		cin>>regno;
		cout<<"\nEntre the sudent name";
		cin>>name;
	}
	void showstudent()
	{
		cout<<"\nStudent Regno:"<<regno;
		cout<<"\nName:"<<name;
	}
};
class mark: public student
{
	public:
	int phy,che,mat;
	public:
	 void getmark()
	 {
		 cout<<"\nEnter mark:";
		 cin>>phy>>che>>mat;
		 
	 }
	void showmark()
	 {
	 cout<<"\nshow mark:"<<phy<<che<<mat;
	 }
};

class sports 
{
	public:
	int sm;
	public:
	void getsm()
	{
		cout<<"\nsport mark:";
		cin>>sm;
	}
	void showsm()
	{
		cout<<"\nsport mark:"<<sm;
		
	}
};

class result: public mark,public sports
{
	public:
	int total,per;
	public:
	void showtotal()
	{
		cout<<"\ncomput mark:";
		total=phy+che+mat+sm;
		cout<<total;
	}
	void showpercent()
	{
		cout<<"\ncomput persent:";
		per=total/400*100;
		cout<<per<<"%";
	}
};

int main()
{
	result r1;
	r1.getstudent();
	r1.getmark();
	r1.getsm();
	r1.showstudent();
	r1.showmark();
	r1.showsm();
	r1.showtotal();
	r1.showpercent();
	
}
