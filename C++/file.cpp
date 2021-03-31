#include <iostream>
#include <fstream>
using namespace std;
int i;
int main()
{ 
fstream fout;
int regno;
char sname[20];
float mark;
fout.open("Employee",ios::out);
for(i=1;i<=5;++i)
{
cout<<"Enter Registerno,Name and Mark?";
cin>>regno>>sname>>mark;

fout<<regno<<"   "<<sname<<"	"<<mark<<"	"<<endl;
}
fout.close();

}
