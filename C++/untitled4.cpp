#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int l,c=0,i;
	char s[20],t;
	cout<<"enter a string :";
	cin>>s;
	cout<<"enter a value :";
	cin>>t;
	l=strlen(s);
	for(i=0;i<=l;i++)
	{
		if(s[i]==t)
			c++;
	}
	cout<<"number of "<<t<<"="<<c;
	return 0;
}
