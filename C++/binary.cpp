#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,i,d;
	char a[50];
	cout<<"enter the number";
	cin>>n;
	i=0;
	while(n!=0)
	{
		d=n%2;
		if(d==0)
			a[i]='0';
		else
			a[i]='1';
		n=n/2;
		i++;
	}
	a[i]='\0';
	strrev(a);
	cout<<"equal binary="<<a;
	return 0;
}
