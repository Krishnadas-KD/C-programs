#include <iostream>
using namespace std;
class matrix
{
	public:
	int m,n,a[10][10];
	public:
	void read()
	{
		cout<<"Enter 3x3 matrix";
		for(int i=0;i<3;++i)
		{
			for(int j=0;j<3;++j)
			{
				cin>>a[i][j];
			}
		}
	}
	void write()
	{
		for(int i=0;i<3;++i)
		{
			cout<<endl;
			for(int j=0;j<3;++j)
			{
				cout<<a[i][j]<<"\t";
			}
		}
	}
		friend void operator ~ (matrix &);
};
 void  operator ~(matrix &fm)
{
	for(int i=0;i<2;++i)
		{
			cout<<endl;
			for(int j=0;j<3;++j)
			{
				if(i<=j)
				{
				int temp=fm.a[i][j];
				fm.a[i][j]=fm.a[j][i];
				fm.a[j][i]=temp;
			}
			}
		}
 }
int main()
{
	matrix m;
	m.read();
	cout<<"The oruginal matrix";
	m.write();
	~m;
	cout<<"The transpose matrix";
	m.write();
	return 0;
}


