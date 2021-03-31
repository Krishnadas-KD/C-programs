#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int t;
	char s[20],s2[20];
	cout<<"enter a string:";
	cin>>s;
	strcpy(s2,s);
	strrev(s);
	t=strcmp(s,s2);
	if(t==0)
		cout<<"the string is palindrome";
	else
		cout<<"the string not palindrome";
	return 0;
}

	
