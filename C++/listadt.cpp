#include <iostream>
using namespace std;
int get(int*,int);
void insert(int*,int,int);
void remove(int*);
int removeat(int*,int);
void replace(int*,int,int); 
int size(int*); 
int isEmpty(int*); 
int isFull(int*);
int main()
{
	int a[50];
	int p;
	int data;
	int n=0;
	//int s;
	cout<<"Enter the limit:";
	cin>>n;
	cout<<"\nEnter the elment:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	/*cout<<"\nEnter the postion:";
	cin>>p;
	data=get(&a[0],p);
	cout<<"\nElement:"<<data<<endl;
	cout<<"\nEnter the inserting elment and posion:";
	cin>>data>>p;
	insert(&a[0],p,data);
	cout<<"\n";
	for(int i=0;a[i]!=0;i++)
	{
		cout<<"\t"<<a[i];
	}*/
	cout<<"\n";
	remove(&a[0]);
	cout<<"\n==============\n";
	for(int i=0;a[i]!=0;i++)
	{
		cout<<"\t"<<a[i];
	}
	cout<<"\n==============\n";
}
int get(int *a,int p)
{
	int temp;
	for(int i=0;*a!=0;i++)
	{
		if(i==(p-1))
		{
			temp=*a;
			break;
		}
		a++;
		
	}
	return temp;
}
void insert(int *a,int p,int data)
{
	for(int i=0;*a!=0;i++)
	{
		if(i==p-1)
		{
			
			*a=data;
		}
		a++;
	}
	
}
void remove(int *a)
{	int *temp;
	for(int i=0;*a!=0;i++)
	{
		temp=a++;
		a--;
		*a=*temp;
		a++;
	}
}
int removeat(int *a,int p)
{
	for(int i=0;*a==0;i++)
	{
		if(i>=p)
		{
		int *temp=a++;
		a--;
		*a=*temp;
		a++;
	   }
	}
	return 0;
}
