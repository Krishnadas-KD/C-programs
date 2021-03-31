#include <iostream>
#include <fstream>
using namespace std;
int main()
{ 
fstream ele;
int Consumer_Number,i;
char Name[20];
float Number_of_Unit,total;
ele.open("Consumer",ios::int);
for(i=1;i<=5;i++)
{
	ele>>Consumer_Number>>Name>>Number_of_Unit;
	total=Number_of_Unit*3;
	cout<<"Consumer_Number"<<"Name"<<"Total Bill";
	cout<<Consumer_Number<<Name<<total;
	total=0;
}
ele.close();
}
