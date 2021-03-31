#include <iostream>
int largest (int,int,int);
using namespace std;
int main()
{
	int a,b,c,s;
	cout<<"enter 3 number";
	cin>>a>>b>>c;
	s=largest(a,b,c);
	cout<<"max="<<s;
	return 0;
}
int largest(int x,int y,int z)
{
	int max=x;
	if(max<y)
		max=y;
	if(max<z)
		max=z;
	return max;
}
	
