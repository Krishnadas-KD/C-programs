#include <iostream>
using namespace std;
float Average(float );
int sum(int,int,int);
int main() 
{
    int m1,m2,m3,s,reg;
    float avg;
    char name[20];
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter regno number: ";
    cin >> reg;
    cout << "Enter mark of 3 subject: ";
    cin >> m1>>m2>>m3;
	s=sum(m1,m2,m3);
	avg=Average(s);
    cout << "\nDisplaying Information," << endl;
    cout << "Name: " <<name << endl;
    cout << "Reg no: " <<reg<< endl;
    cout << "total Marks: " <<s<< endl;
     cout << "avrage Marks: " <<avg<< endl;
    return 0;
}
int sum(int a,int b,int c)
{
	int t;
	t=a+b+c;
	return t;
}
float Average(float t)
{
	float a;
	a=t/3;
	return a;
}
