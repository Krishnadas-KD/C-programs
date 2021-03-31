#include <iostream> 
using namespace std; 
int main() 
{ 
	int n,i=0,a[32],j;
	cout<<"enter the number";
	cin>>n;
    while(n!=0)
    { 
		
        a[i]=n%2; 
        n=n/2; 
        i++;
    } 
    cout<<"equal binary=";
    for (j=i-1;j!=-1;j--) 
        cout<<a[j];
    return 0; 
}


