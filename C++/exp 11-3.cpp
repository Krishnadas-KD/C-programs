# include <iostream>
using namespace std;
void inc(int b[10][10] , int x, int y)
{
	cout<<"\nThe incrimented matrix:\n";
		for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cout<<"\t"<<b[i][j]+1;
		}
		cout<<"\n";
	}
	
}
int main()
{
	int a[10][10],m,n;
	cout<<"enter the row and columan:";
	cin>>m>>n;
	cout<<"enter the matrix element";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	inc(a,m,n);
}

