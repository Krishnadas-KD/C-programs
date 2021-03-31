#include <iostream>
using namespace std;
int search(int [],int ,int);
int main()
{
	int i;
	int a[100];
	int s,n;
	int c;
	cout<<"enter the value of n:";
	cin>>n;
	cout<<"Enter 5 numbers?:";
	for(i=0;i<n;++i) cin>>a[i];
	cout<<"Enter the number dor search?";
	cin>>s;
	c=search(a,s,n);
	cout<<"Total count="<<c<<endl;
}
int search(int b[],int fo, int m)
{
	int i;
	int count=0;
	for(i=0;i<m;++i)
	{
			if(b[i]==fo)
			{
					cout<<"Found..."<<fo<<endl;
					++count;
			}
	}
	return count;
}

