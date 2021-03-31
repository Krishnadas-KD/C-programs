#include <iostream>
using namespace std;
class employee
{
	int eno;
	char name[25];
	float salary;
	public:
	employee()
	{
		eno=0;
		strcpy(name,"not named");
		salary=0;
	}
	void(dispaly)
	{
		cout<<"\nemployee number: "<<eno;
		cout<<"\nemployee name: "<<name;
		cout<<"\nsalary: "<<salary;
	}
	~employee()
	{
		cout<<"enter 
	
