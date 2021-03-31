#include <iostream>
using namespace std;
int main()
{
	int n,i=1,num;
	cout<<"enter a number";
	cin>>num;
	cout<<"enter the limit";
	cin>>n;
	i=1;
	while(i<=n)
	{
		cout<<i<<"*"<<num<<"="<<i*num<<endl;
		i++;
	}

	return 0;
}
