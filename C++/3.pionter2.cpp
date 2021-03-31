#include <iostream>
#include <cstring> 
using namespace std;
int main()
{
	char *ptr;
	int i,j,k=0,l;
	char w[20],v[]="aeiouAEIOU";
	cout<<"enter a word  ";
	cin>>w;
	l=strlen(w);
	ptr=w;

	for(j=0;j<l;j++)
	{
	for(i=0;i<9;i++)
	{
		if(*ptr==v[i])
		{
			k++;
		}
	}
	ptr++;
	}
	cout<<"\nnumber of vowels = "<<k;
	return 0;
}
