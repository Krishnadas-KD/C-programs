#include <iostream> 
using namespace std;
int rev(int x);
int main()
{
	int n,f;
	cout<<"enter a number";
	cin>>n;
	f=rev(n);
	cout<<"reverse="<<f;
	return 0;
}
int rev(int x) 
{  
	int d,s=0;
	while(x!=0)
	{
		d=x%10;
		s=(s*10)+d;
		x=x/10;
	}
	return s;
}

