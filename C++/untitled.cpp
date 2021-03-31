#include <iostream>
using namespace std;
int main()
{
	int i,l=0;
	char s[20];
	cout<<"enter a string ";
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		l=l+1;
	}
	cout<<"length ="<<l;
	return 0;
} 
