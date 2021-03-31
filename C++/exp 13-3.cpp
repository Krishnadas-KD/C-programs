#include <iostream>
using namespace std;
void search();
int a[100];
int s,n;
int c=0;
int main()
{
	int i;
	cout<<"enter the value of n:";
	cin>>n;
	cout<<"Enter numbers?:";
	for(i=0;i<n;++i) cin>>a[i];
	cout<<"Enter the number dor search?";
	cin>>s;
	search();
	cout<<"Total count="<<c<<endl;
}
void search()
{
	int i;
	for(i=0;i<n;++i)
	{
			if(a[i]==s)
			{
					cout<<"Found..."<<s<<endl;
					++c;
			}
	}
}
