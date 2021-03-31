#include <iostream> 
using namespace std;
int sum(int x);
int main()
{
	int a,f;
	cout<<"enter a number";
	cin>>a;
	f=sum(a);
	cout<<"sum of natural numbers="<<f;
	return 0;
}
int sum(int x) 
{  
	int f;
	if(x==1)
		return(x);
	else  
	{
		f=x+sum(x-1);   
		return(f);  
	}
}
