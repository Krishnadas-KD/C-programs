
#include <iostream>
using namespace std;

int main()
{
	char s1[20],s2[20];
	void mystrcpy(char*,char *);
	void mystrrev(char *);
	int mystrcmp(char *, char *);
	cout<<"Enter string 1?";
	cin>>s1;
	cout<<"String ="<<s1<<endl;
	mystrcpy(s1,s2);
	mystrrev(s2);
	if(mystrcmp(s1,s2)==0)
		cout<<"string is palinerom";
	else
		cout<<"string is not palinerom";
	
}
void mystrcpy(char* p1,char * p2)
{
	while(*p1!='\0') *p2++=*p1++;
	*p2='\0';
	
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
void mystrrev(char *p1)
{	
	char *p2;
	p2=p1;
	while (*p2!='\0') ++p2;
	--p2;
	while (p1<=p2)
	{
		char temp;
		temp=*p1;
		*p1=*p2;
		*p2=temp;
		++p1;
		--p2;
	}
}

