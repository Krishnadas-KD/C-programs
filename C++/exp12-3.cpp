#include <iostream>
using namespace std;
int multi(int* p1)
{
return(3* *p1);
}
int main()
{
	int a,m;
	cout<<"enter  a number";
	cin>>a;
	m=multi(&a);
	cout<<"The 3 time of the given number is:"<<m;
	
}

