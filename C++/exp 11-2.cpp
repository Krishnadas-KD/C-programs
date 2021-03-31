#include <iostream>
using namespace std;
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
		cout<<"\n Value of A = "<<a<<"\tB = "<<b<<"\n";
}
int main()
{
	int a,b;
	cout<<"enter A&B number repactivly";
	cin>>a>>b;
	swap(a,b);

}

