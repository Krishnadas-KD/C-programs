//Dearness Allowance (DA) = 52% of Basic and Income Tax (IT) = 30% of the gross salary. Net_Salary = Basic + DA - IT)
#include <iostream>
using namespace std;
class employee
{
	protected:
	float salary;
	public:
	void get()
	{
		cout<<"Enter the salalry:";
		cin>>salary;
	}
	
};
class tax:public employee
{
	protected:
	float da,gsalary,Itax;
	public:
	void calculate()
	{
		da=((0.52)*salary );
		gsalary=da+salary;
		Itax=((0.3)*gsalary);
		
	}
};
class net_pay:public tax
{
	public:
	void display()
	{
		cout<<"\nThe base salary:"<<salary<<endl;
		cout<<"The income tax:"<<Itax;
		cout<<"\nThe net pay:"<<gsalary-Itax;
	}
	
};
int main()
{
	net_pay  E;
	E.get();
	E.calculate();
	E.display();
}
