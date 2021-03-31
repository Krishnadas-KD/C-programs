#include <iostream>
using namespace std;
inline int add(int a, int b)
{
return a+b;
}
inline float divi(float x, float y)
{

return x/y;
}
inline int dif(int a, int b)
{
return a-b;
}
inline int mod(int x, int y)
{
return x%y;
}
inline long int mult(int a, int b)
{
return a*b;
}
int main()
{
int a,b;
float i,j;
cout<<"\nEnter 2 values to calculating there sum:\n";
cin>>a>>b;
cout<<"\nSum of "<<a<<"and "<<b<<" = "<<add(a,b)<<"\n";
cout<<"\nEnter 2 values to calculating there division:\n";
cin>>i>>j;
cout<<"\nValue of "<<i<<" divided by "<<j<<" = "<<divi(i,j)<<"\n";
cout<<"\nEnter 2 values to calculating there difference :\n";
cin>>a>>b;
cout<<"\nDifference between "<<a<<" and "<<b<<" = "<<dif(a,b)<<"\n";
cout<<"Enter 2 values to calculating there modulus:\n";
cin>>a>>b;
cout<<a<<"%"<<b<<"="<<mod(a,b);
cout<<"\nEnter 2 values for calculating there product:\n";
cin>>a>>b;
cout<<"\nProduct of "<<a<<" and "<<b<<" = "<<mult(a,b)<<"\n";
return 0;
}
