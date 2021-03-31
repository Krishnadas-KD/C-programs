#include <iostream>
using namespace std;
int main()
{
	int n, a=0, b=1, c;
	cout << "Enter the Limit ? ";
	cin >> n;

	if (n>=1)
	{	
		cout << a << endl;
		cout << b << endl;
	}
	
	for (c=a+b; c<=n; c=a+b)
	{
		cout << c << endl;
		a=b;
		b=c; 
	}

}	
