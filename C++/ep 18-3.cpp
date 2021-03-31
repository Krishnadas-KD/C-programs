#include <iostream>
using namespace std;
class matrix
{
	public:
	int m,n,a[10][10];
	public:
	void read()
	{
		cout<<"Enter teh order od materix";
		cin>>m>>n;
		cout<<"emter the element of matrix";
		for(int i=0;i<m;++i)
		{
			for(int j=0;j<n;++j)
			{
				cin>>a[i][j];
			}
		}
	}
	void write()
	{
		cout<<"+";
		for(int i=0;i<m;++i)
		{
			cout<<"+";
			for(int j=0;j<n;j++)
			{
				cout<<"---";
			}
			cout<<"+";
			cout<<endl;
			cout<<"|\t";
			for(int j=0;j<n;++j)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<"\t|";
		}
	}
};
int mian()
{
	matrix m;
	m.read();
	m.write();
	return 0;
}

