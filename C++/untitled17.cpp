#include <iostream>
#include <fstream>
using namespace std;
int main()
{ 
ofstream ccc;
int i,en;
char jt[30],ename[20];
float s;
ccc.open("Employee");
for(i=1;i<=3;i++)
{
cout<<"Enter Employee number,Employee name,salary,job titel?";
cin>>en>>ename>>s>>jt;

ccc<<en<<"   "<<ename<<"	"<<jt<<"	"<<s<<endl;
}
ccc.close();

}


