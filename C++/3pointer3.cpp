#include <iostream>
#include <cstring> 
using namespace std;
int main()
{
	char *ptr;
	int f=0,l=0;
	char w[20];
	cout<<"enter a string  ";
	cin>>w;
	ptr=w;
	while(f==0)
	{
		if(*ptr=='\0')
		{
			f=1;
		}
		else
		{
			l++;
			ptr++;
		}
	}
	cout<<"the length "<<l;
	return 0;
}
