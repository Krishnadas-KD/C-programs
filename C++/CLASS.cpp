#include <iostream>
#include <cmath>
using namespace std; 
void area(float r);
void area(float a,float b);
void area(float a,float b,float c);
int main() 
{
	float R,l,b,A,B,C;
	cout<<"enter the redius of th circle";
	cin>>R;
	area(R);
	cout<<"enter the length and bridh";
	cin>>l>>b;
	area(l,b);
	cout<<"enter the 3 sides";
	cin>>A>>B>>C;
	area(A,B,C);
	return 0;
}
void area(float r)
{
	float AR;
	AR=3.14*(r*r);
	cout<<"the area of circle ="<<AR;
}
void area(float a,float b)
{
	float AR;
	AR=a*b;
	cout<<"the area of rectangle ="<<AR;
}
void area(float a,float b,float c)
{
	float AR,s;
	s=(a+b+c)/2;
	AR=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"the area of triangle ="<<AR;
}
