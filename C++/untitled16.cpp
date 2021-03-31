/*1. Write a C++ program to print the following by reading number of rows to be printed from the user * * * * * * * * * */
#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<"*\t";
		}
		cout<<endl;
	}
	return 0;
	
}
			
