#include <iostream>
using namespace std;
union employee
{
	int empno;
 	char name[20];
	int age;
	int salary;
};
int main()
{
	employee emp;
 	cout << "Enter Employee ID ? ";
    cin >> emp.empno;
	cout << "Enter Employee Name ? ";
 	cin >> emp.name;
  	cout << "Enter salary ? ";
  	cin >> emp.salary;
 	cout << "Enter Employee age ? ";
	cin >> emp.age;
	cout << "\nEmployee Details";
 	cout << "\n.................";
 	cout << "\nEmployee Salary : " << emp.salary;
 	cout << "\nEmployee ID : " << emp.empno;
  	cout << "\nEmployee Name : " << emp.name;
  	cout << "\nEmployee Age : " << emp.age;
	cout << "\n";

}	// end of main()
