/* Write a C++ Program To Find Electricity Bill Of A Person with the following unit tarrif Unit tarrif >100 RS.1.20 per unit  >200 RS.2 per unit  >300 RS.3 per unit */
#include <iostream>
using namespace std;
int main()
{
	int m,s;
	cout<<"enter the unit";
	cin>>m;
	switch(m/100)
	{
		case 0:
			s=m*1.2;
			break;
		case 1:
			s=m*1.2;
			break;
		case 2:
			s=m*2;
			break;
		default:
			s=m*3;
			break;
			
	}
	cout<<"total bill "<<s;
	return 0;
}
