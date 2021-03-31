#include <iostream>
using namespace std;
class list{
	public:
		int a[10];
		int n=0;
	public:
		int get(int b)
		{
			return a[b-1];
		}
		void insert(int b,int i)
		{
			a[i-1]=a;
		}
		void remove()
		{
			
		}
		void removeat()
		{
			
		}
		void replace()
		{
		}
		void size()
		{
		}
		void isempty()
		{
		}
		void isfull()
		{
		}
		
	
};
int main()
{
	list as;
	int a,b,c;
	as.n=0;
	do
	{
		if(a==1)
		{
			cout<<"Enter position:";
			cin>>a;
			b=as.get(a);
			Cout<<a<<"th position element "<<b;
		}
		
		if(a==2)
		{
			cout<<"Enter element:"
			cin>>a;
			cout<<"Enter possition:"
			cin>>b;
			as.insert(a,b);
		}
		
		if(a==3)
		{
			
		}
		if(a==4)
		{
			
		}
		if(a==5)
		{
			
		}
		if(a==6)
		{
			
		}
		if(a==7)
		{
			
		}
		if(a==8)
		{
			
		}
		
		
		cout<<"\n 1 to get.\n 2 to insert .\n 3 to remove.\n 4 to removeat.\n 5 to replace.\n 6 to size.\n 7 to isEmpty \n 8 to isFull.\n 9 to exit";
		cin>>a;
		cout<<"\n";
	}while(a!=9);


}


