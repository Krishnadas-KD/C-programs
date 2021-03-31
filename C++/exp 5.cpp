#include <iostream>
using namespace std;
struct student
{
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
	student s1;

	cout << "Enter Reg.No., Name ? ";
	cin >> s1.regno >> s1.name;
	cout << "Enter Marks of 3 Subjects ? ";
	cin >> s1.mark1 >> s1.mark2 >> s1.mark3;
	s1.total = s1.mark1 + s1.mark2 + s1.mark3;
	s1.avg = s1.total / 3.0;
	cout << "Total Marks of 3 Subjects = " << s1.total << endl;
	cout << "Average Marks of 3 Subjects = " << s1.avg << endl;	

}

