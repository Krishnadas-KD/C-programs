#include <iostream>
using namespace std;
main()
{ 
	int a,b,c;
	cout<<"enter 3 number";
	cin>>a>>b>>c;
	int max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
	cout<<"the latgest naumber: "<<max;
	return 0;
}
	
