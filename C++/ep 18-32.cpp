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
		for(int i=0;i<m;++i)
		{
			cout<<endl;
			for(int j=0;j<n;++j)
			{
				cout<<a[i][j]<<"\t";
			}
		}
	}
	void operator ~()
};
int main()
{
	matrix m;
	m.read();
	m.write();
	~m;
	return 0;
}

