#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a,b;
	cout<<"Enter 2 number:";
	cin>>a>>b;
	
	cout<<"before swapping a="<<a<<"\tb"<<b<<endl;
	swap(&a,&b);
	cout<<"After swaping a="<<a<<"\tb="<<b<<endl;
	
}
