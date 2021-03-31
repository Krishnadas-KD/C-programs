#include <iostream>
using namespace std;
int main()
{
	int n,v,i,cd,ft,sum=0;
	cout<<"enter teh number of terms AP";
	cin>>n;
	cout<<"enter the frist teram and common differnt AP";
	cin>>ft>>cd;
	sum=ft;
	v=ft;
	for(i=2;i<=n;i++)
	{
		v=v+cd;
		sum=sum+v;
	}
	cout<<n<<"the term of AP is  "<<v<<endl;
	cout<<"sumof "<<n<<" tems of AP= "<<sum<<endl;
	cout<<"enter the number of terms GP";
	cin>>n;
	cout<<"enter the frist teram and common differnt GP";
	cin>>ft>>cd;
	v=ft;
	for(i=1;i<n;i++)
	{
		v=v*cd;
		sum=sum+v;
		
	}
	cout<<n<<"the term of gp is"<<v<<endl;
	cout<<"sumof "<<n<<" tems of gp="<<sum;
	return 0;
}

