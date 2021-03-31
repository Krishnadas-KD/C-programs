#include <iostream>
using namespace std;
inline float cube(float x);
inline float mul(float x,float y);
int main()
{
	int n,f;
	cout<<"enter the number";
	cin>>n;
	cout<<"how many tmies multipaly";
	cin>>f;
	cout<<n<<"*"<<f<<"="<<mul(n,f);
	cout<<"\ncube of "<<n<<"="<<cube(n);
	
}
inline float mul(float x,float y)
    {                            
    return(x*y);
    }
inline float cube(float x)               
   {                             
	   return(x*x*x);               
	} 
