#include <iostream>
using namespace std;
class student
{
	int regno;
	char name[20];
	int m1;
	int m2;
	int m3;
	int total;
	float avg;
public:
void getdata()
{
cout<<"\nenter the name: " ;
cin>>name;
cout<<"enter the regno: ";
cin>>regno;
cout<<"enter the m1,m2,m3: \n";
cin>>m1>>m2>>m3;
}
void calculate()
{
	total=m1+m2+m3;
	avg=total/3.0;
}
void display()
{
cout<<"******************\n";
cout<<"\nName: "<<name;
cout<<"\nRegno: "<<regno;
cout<<"\nMark1: "<<m1;
cout<<"\nMark2: "<<m2;
cout<<"\nMark3: "<<m3;
cout<<"\nAvg: "<<avg;
cout<<"\n******************\n";
}
};
int main()
{

student r;
r.getdata();
r.calculate();
r.display();
}
