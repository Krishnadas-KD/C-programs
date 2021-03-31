#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int i,l=0,l2=0,j=0;
	char s[40],s2[20];
	cout<<"enter 1st string :";
	gets(s);
	cout<<"enter 2nd string :";
	gets(s2);
	for(i=0;s[i]!='\0';i++)
	{
		l=l+1;
		
	}
	
	for(i=0;s2[i]!='\0';i++)
	{
		l2=l2+1;
		
	}
	l2=l2+l;
	for(i=l;i<l2;i++)
	{
		s[i]=s2[j];
		j++;
	}
	s2[l2]='\0';
	cout<<"the string is="<<s;
	return 0;
}
	
