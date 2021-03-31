/*Using a C++ program check whether a student passed the exam or not based on total mark which shall be above 40%*/
#include <iostream>
using namespace std;
int main()
{
	int n,d,s;
	cout<<"enter your mark";
	cin>>n;
	cout<<"enter total mark";
	cin>>s;
	d=(s*40)/100;
	if(d<=n)
	{
		cout<<"you passed";
	}
	else
	{
		cout<<"you failed";
		
	}
	return 0;
}

	
	
	
