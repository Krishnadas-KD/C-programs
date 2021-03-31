#include <iostream>
#include <cmath>
using namespace std;
main()
{ 
	float a,b,c,d,r1,r2;
	cout<<"enter a,b,c values";
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c); 
	if(d>0) 
	{	 
		cout<<"Two real and distinct roots";      
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		cout<<"\nRoots are "<<r1<<" and "<<r2;
	} 
	else
	{
		if(d==0) 
		{ 
			cout<<"\nTwo real and equal roots";
			r1=-b/(2*a);
			r2=r1;
			cout<<"\nRoots are "<<r1<<" and "<<r2;
		} 
		else 
			cout<<"\n |complex root|"; 
	}
	return 0;
}
	
