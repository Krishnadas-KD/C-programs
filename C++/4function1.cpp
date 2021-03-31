#include <iostream> 
using namespace std;
int fact(int x);
int main()
{
	int a,f;
	cout<<"enter a number";
	cin>>a;
	f=fact(a);
	cout<<"factorial="<<f;
	return 0;
}
int fact(int x) 
{  
	int f;
	if(x==1)
		return(x);
	else  
	{
		f=x*fact(x-1);   
		return(f);  
	}
}
