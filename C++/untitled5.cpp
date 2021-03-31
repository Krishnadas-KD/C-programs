#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int l=0,i,flag=0;
	char s[20],s2[20];
	cout<<"enter a string ";
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		l=l+1;
		
	}
	for(i=0;i<l;i++)
	{
		s2[i]=s[i];
	}
	s2[l]='\0';
	for(i=0;i<l;i++)
	{
		if(s2[l-i-1]==s[i])
			flag=flag;
		else
			flag=1;
		
	}
	
	if(flag==0)
		cout<<"the string is palinrom";
	else
		cout<<"the string not palinerom";
	return 0;
}
