#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s1[20],s2[20];
	int i;
	cin>>s1>>s2;
	cout<<"\n=====\n";
	strcat(s1,s2);
	cout<<"||";
	for(i=0;s1[i]!='\0';i++)
	{
		cout<<s1[i];
	}
}
