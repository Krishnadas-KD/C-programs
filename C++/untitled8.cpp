#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int i,l,f=0;
	char s[20],s2[20];
	cout<<"enter 1st string:";
	cin>>s;
	cout<<"enter 2nd string:";
	cin>>s2;
	for(i=0;s[i]!='\0';i++)
	{
		l=l+1;
		
	}
	for(i=0;i<l;i++)
	{
		if(s[i]!=s2[i])
			f++;
	}
	if(f==0)
		cout<<"the string is same.";
	else
		cout<<"the string is not same.";
	return 0;
}
