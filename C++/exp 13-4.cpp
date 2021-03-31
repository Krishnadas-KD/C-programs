#include <iostream>
using namespace std;
int sumFactors(int);
int main()
{
	int n,s;
	cout<<"enter the value of n:";
	cin>>n;
	s=sumFactors(n);
	cout<<"sum of Factors="<<s<<endl;
}
int sumFactors(int m)
{
	
	int i,d,sum=0;
	for(i=1;i<=m;++i)
	{
		if((m%i)==0)
		{
			d=m/i;
			cout<<i<<"x"<<d<<"="<<m<<endl;
			sum=sum+i;
		}
			
	}

	return sum;
}

