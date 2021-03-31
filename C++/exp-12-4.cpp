#include <iostream>
using namespace std;
int mystrlen(char *p1)
{
	int i;
	for(i=0;*p1!='\0';p1++)
	{
		i++;
	}
	return i;
}
void mystrrev(char *p2,int *n)
{
	int i;
	char t;
	for(i=0 ; i!=*n/2;i++)
	{
		t=p2[i];
		p2[i]=p2[*n-i-1];
		p2[*n-i-1]=t;
	}
}
void mycopy(char *p1,char *p2)
{
	for(;*p1!='\0';p1++)
	{
		*p2=*p1;
		p2++;
	}
	*p2='\0';
	
}
int palin(char *p1, int *n)
{
	int i;
	char p2[20];
	mycopy(p1,p2);
	mystrrev(p2,n);
	for(i=0;i<=*n;i++)
	{
		if(p1[i]!=p2[i])
			return 0;
	}
	return 1;
}
void mystrcon(char *p1,char *p2)
{
	while(p1!='\0') ++p1;
	
	while (p2!='\0')
	{
		*p1=*p2;
		++p1;
		++p2;
	}
	cout<<"\nThe merged string is="<<p1;
}
int main()
{
	int l,f;
	char s1[20],s2[20],s3[20];
	cout<<"Enter a string:";
	cin>>s1;
	cout<<"\n============\n";
	l=mystrlen(s1);
	cout<<"\nThe length of the string="<<l;
	cout<<"\n============\n";
	mycopy(s1,s2);
	mystrrev(s2,&l);
	cout<<"\n reverse of The string="<<s2;
	cout<<"\n============\n";
	f=palin(s1,&l);
	if(f==0)
		cout<<"\n Thes tring is not palindrome.";
	else
			cout<<"\nThe string is palindrome";
	cout<<"\n============\n";
	cout<<"enter the sencond string for concatenation:";
	cin>>s3;
	mystrcon(s1,s3);
	cout<<"\n============\n";
}
