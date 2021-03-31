#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int l=0,i;
	char s[20],te;
	cout<<"enter a string ";
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		l=l+1;
		
	}
	for(i=0;i<l/2;i++)
	{
		te=s[i];
		s[i]=s[l-i-1];
		s[l-i-1]=te;
	}
	cout<<endl<<s;
	return 0;
}

