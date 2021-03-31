#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, d;
	float r1, r2;
	cout << "Enter the Coefficients a, b, c ? ";
	cin >> a >> b >> c;
	d=b*b-4*a*c;
	cout << "Descriminent = " << d << endl;
	if (d>0)
	{
		cout << "Real and Different Roots" << endl;
		r1= ( -b+sqrt(d) ) / ( 2*a );
		r2= ( -b-sqrt(d) ) / ( 2*a );
		cout << "Root1 = " << r1 << endl;
		cout << "Root2 = " << r2 << endl;
	}
	else if (d==0)
	{
		cout << "Identical Roots" << endl;
		r1= -b/2*a;
		r2= -b/2*a;
		cout << "Root1 = " << r1 << endl;
		cout << "Root2 = " << r2 << endl;
	}
	else
	{
		cout << "Imaginary Roots" << endl;
		d=-d;
		r1= -b/2*a;
		r2= sqrt(d)/2*a;
		cout << "Real Part = " << r1 << endl;
		cout << "Imaginary Part = " << r2 << endl;
	}
}	
