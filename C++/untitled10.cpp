/*
An electricity board charges the following rates to domestic users ti discourage large consumption of energy: For the first 100 units - 60P per unit For next 200 units - 80P per unit Beyond 300 units - 90P per unit All users are charged a minimum of Rs.50.00. if the total amount is more than Rs.300.00 than an additional surcharge of 15% is added Write a C++ program to read the names of users and number of units consumed and print out the charges with names*/
#include <iostream>
using namespace std;
int main()
{
	float s,n;
	cout<<"enter the unit";
	cin>>n;
	if(n<=100)
	{
		s=n*.6;
		if(s<50)
		{
			s=50;
		}
	}
	if(n<=200&&n>100)
	{
		s=n*.8;
	}
	if(n>200)
	{
		s=n*.9;
		if(s>=300)
		{
			s=s+((s*15)/100);
		}
	}
	cout<<"the bill="<<s<<"rs";
	return 0;
}
		
