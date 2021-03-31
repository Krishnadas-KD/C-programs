#include <iostream>
using namespace std;
struct distance1
{
	int feet;
	int inch;
};
int main()
{
	distance1 d1, d2, d3;
	cout << "Distance in FEET-INCH System" << endl;
	cout << "............................" << endl;
	cout << "Enter Distance 1 ? ";
	cin >> d1.feet >> d1.inch;
	cout << "Enter Distance 2 ? ";
	cin >> d2.feet >> d2.inch;
	cout << "D1 = " << d1.feet << " ft " << d1.inch << " in" << endl;
	cout << "D2 = " << d2.feet << " ft " << d2.inch << " in" << endl;
	d3.feet = d1.feet + d2.feet;
	d3.inch = d1.inch + d2.inch;
	if ( d3.inch>=12 )
	{
		d3.feet = d3.feet + d3.inch / 12;
		d3.inch = d3.inch % 12;
	}
	cout << "D3 = " << d3.feet << " ft " << d3.inch << " in" << endl;
}


