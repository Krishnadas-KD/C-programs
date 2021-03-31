#include <iostream>
using namespace std;
int main()
{
	int n, d, s=0, r=0, temp;
	cout << "Enter the Number ? ";
	cin >> n;				
	temp = n;
	while (n!=0)
	{
		d = n % 10;
		r = r * 10 + d;
		s = s + d;
		n = n / 10;
	}
	cout << "Reverse of Number = " << r << endl;
	cout << "Sum of Digits = " << s << endl;
	if (r==temp)
	{
		cout << "Palindrome..!" << endl;
	}
	else
	{
		cout << "Not a Palindrome..!" << endl;
	}

}
