#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int c=0,s=0,w=0,i,l;
	char a[200];
	cout<<"enter a paraghraph:";
	gets(a);
	l=strlen(a);
	for(i=0;i<=l;i++)
	{
		if(a[i]==32)
			w++;
		else if(a[i]==46)
		{
			s++;
			w++;
		}
		else
			c++;
	}
cout<<"\ncharacter="<<c<<"\nwords="<<w<<"\nsentence="<<s;
	return 0;
}
