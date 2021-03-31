/*An election is contested by five candidates. The candidates are numbered 1 to 5 and a voting is done by marking the candidate number in a ballot paper. Write a C++ program to read the ballot and count the votes cast for each candidate using an array 
variable count. In case, a number read is outside the range 1 to 5 the ballot should be considered as a ‘spoilt ballot’, and the program should also count the number of spoilt ballots. 
*/
#include <iostream>
using namespace std;
int main()
{
	int n,a[5],d,i;
	cout<<" how many time";
	cin>>n;
	for(i=1;i<=5;i++)
	{
		a[i]=0;
	}
	for(i=0;i<n;i++)
	{
		cout<<"enter the candidate number (1 to 5)";
		cin>>d;
	switch(d)
	{
		case 1:
			a[1]++;
			break;
		case 2:
			a[2]++;
			break;
		case 3:
			a[3]++;
			break;
		case 4:
			a[4]++;
			break;
		case 5:
			a[5]++;
			break;
		default:
			cout<<"\nenter invalied number\n";
			break;
	}
	}
	for(i=1;i<=5;i++)
	{
		cout<<"\ncandudate "<<i<<" get "<<a[i]<<" votes\n";
	}
	return 0;
}	
