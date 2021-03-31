#include <iostream>
using namespace std;
void printrevers(int b[],int m)
{
	int i;
	cout<<"revers of the array:\n";
	for(i=m-1;i>=0;i--)
	{
	cout<<b[i]<<"\t";
      }
}
int main()
{
	int a[100],i,n;
	cout<<"enter how many element:";
	cin>>n;
	cout<<"enter the arry element:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	printrevers(a,n);
}
