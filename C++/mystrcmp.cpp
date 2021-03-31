#include <iostream>
using namespace std;

int main()
{
	char s1[20],s2[20];
	void mystrcat(char*,char *);
	cout<<"Enter string 1?";
	cin>>s1;
	cout<<"Enter string 2?";
	cin>>s2;
	cout<<"String 1="<<s1<<endl;
	cout<<"String 2="<<s2<<endl;
	mystrcat(s1,s2);
	cout<<"String 1="<<s1<<endl;
	cout<<"String 2="<<s2<<endl;
}
void mystrcat(char* p1,char * p2)
{
	while(p1!='\0') ++p1;
	
	while (p2!='\0')
	{
		*p1=*p2;
		++p1;
		++p2;
	}
		
}
