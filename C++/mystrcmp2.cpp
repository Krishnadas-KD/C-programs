#include <iostream>
using namespace std;

int main()
{
	char s1[20],s2[20];
	int mystrcmp(char*,char *);
	cout<<"Enter string 1?";
	cin>>s1;
	cout<<"Enter string 2?";
	cin>>s2;
	cout<<"String 1="<<s1<<endl;
	cout<<"String 2="<<s2<<endl;
	if(mystrcmp(s1,s2)==0)
		cout<<"string is same";
	else
		cout<<"string is not same";
}
int mystrcmp(char *p1, char *p2)
{
	while(*p1!='\0')
	{
		if(*p1!=*p2)
			return 1;
		p1++;
		p2++;
	}
	return 0;
}
