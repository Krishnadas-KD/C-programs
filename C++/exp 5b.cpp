#include <iostream>
using namespace std;
struct student{
	int regno;
	char name[20];
	int mark1;
	int mark2;
	int mark3;
	int total;
	float avg; 
	};
int main()
{
	int n, i;
	student stud[56];
	cout << "EXP 5 - Average Mark using Structure" << endl;
	cout << "...................................." << endl;
	cout << "Enter the No. of Students ? ";
	cin >> n;
	for ( i=0; i<n; ++i )	
	{
		cout << "Student " << i+1 << endl;
		cout << "Enter Reg.No., Name, Mark1, Mark2, Mark3 ? ";
		cin >> stud[i].regno >> stud[i].name; 
		cin >> stud[i].mark1 >> stud[i].mark2 >> stud[i].mark3;
		stud[i].total = stud[i].mark1 + stud[i].mark2 + stud[i].mark3;
		stud[i].avg = stud[i].total / 3.0;
	}
	cout << "Student Mark Details" << endl;
	cout << "....................." << endl;
	for ( i=0; i<n; ++i)	
	{
		cout << stud[i].regno << "  " << stud[i].name << "  ";
		cout << stud[i].total << "  " << stud[i].avg << endl;
	}
}

