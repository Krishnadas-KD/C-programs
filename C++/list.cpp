#include <iostream>
using namespace std;
class list{
public:
		int a[10];
		int n;
public:
	void insert(int b)  
	{
		n=n+1;
		a[n-1]=b;
	}
	void deleter(int b)
	{
		int i;
		for (i=0; i<n; i++)
		{
			if (a[i] == b) 
			{
				for (int j=i; j<n; j++) 
				{
					a[j] = a[j+1]; 
	
				}
				n=n-1;
			}
	
		}
	}	
	void travaser()
	{
		cout<<"\n";
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
	}
	void search(int b)
	{
	for(int i=0 ;i<n ;i++)
	{
		if(a[i]==b)
		{
			cout<<b<<" found in ";
			cout<<i<<" postion"<<"\n";
		}
	}
	}
	int isemtyorfull()
	{
		if(n==10)
		{
			cout<<"List is full";
			return 1;
		}
		else if(n==0)
		{
			cout<<"List is empty";
			return 2;
		}
		else
		{
			return 3;
		}
	}
	
};






int main()
{
	list as;
	int a=0;
	int checker;
	int b;
	int c;
	as.n=0;
	do
	{
		if(a==1)
		{
				cout<<"how many element to insert:";
				cin>>b;
				cout<<"enter element:";
				for( int i=0;i<b;i++)
				{
					cin>>c;
					as.insert(c);
				}
		}
		if(a==2)
		{
			checker=as.isemtyorfull();
			if(checker!=2)
			{
			cout<<"Enter deleting element deleteing :";
			cin>>b;
			as.deleter(b);
		}
		}
		if(a==3)
		{
			cout<<"enter serching elemet:";
			cin>>b;
			as.search(b);
		}
		if(a==4)
		{
			as.travaser();
		}
		cout<<"\n 1 to instert.\n 2 to delete .\n 3 to search.\n 4 to dispaly.\n 5 to exit.\n";
		cin>>a;
		cout<<"\n";
	}while(a!=5);
}
	

	
