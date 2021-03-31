#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int l,i,j,c=0;
	char s[20],v[]="AEIOUaeiou";
	cout<<"enter a string : ";
	gets(s);
	l=strlen(s);
	for(i=0;i<10;i++)
	{
		for(j=0;j<=l;j++)
		{
			if(s[j]==v[i])
			{
				c=c+1;
			}
		}
	}
	cout<<"vowels="<<c;
	return 0;
}
	
