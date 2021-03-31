#include <iostream>
#include <cstring>
using namespace std;
class emp
{
	char ename[20];
	int eid,salary;
	public:
		emp(int i,int b,char s[])
		{
			eid=i;
			salary=b;
			strcpy(s,ename);
		}
		~emp()
		{
			cout<<"\n===============\nEmployee id:"<<eid;
			cout<<"\n employee name:"<<ename;
			cout<<"\n salary:"<<salary;
		}
};
int main()
{

	char name[20];
	int sal,id;
	cout<<"enter the name:";
	cin>>name;
	cout<<"\nEntert the employe id:";
	cin>>id;
	cout<<"\nEntert tne salary:";
	cin>>sal;
	emp e1(id,sal,name);
}
