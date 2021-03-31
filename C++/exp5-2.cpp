#include <iostream>
using namespace std;
struct employee
{
	char name[20];
	int age;
	char desig[20];
	float salary;
};
int main()
{
	int i, n;
	employee emp[100];
	
	cout << "Enter the No. of Employees ?";
	cin >> n;
	for ( i=0; i<n; ++i )	// Reading Employee Data
	{
		cout << "Employee " << i+1 << endl;
		cout << "Enter Name, Age, Designation, Salary ? ";

		cin >> emp[i].name >> emp[i].age;
		cin >> emp[i].desig >> emp[i].salary;
	}
	
	cout << "Employee Details" << endl;
	cout << "................" << endl;

	for ( i=0; i<n; ++i )	
	{
		cout << emp[i].name << "\t" << emp[i].age << "\t";
		cout << emp[i].desig << "\t" << emp[i].salary << endl;
	}
}	// end of main()

