#include<iostream>
using namespace std;
inline int Larg(int a,int b)
{
        int m;
        if(a>b)
			m=a;
		else
			m=b;
        return(m);
}
 
int main()
{
        int a,b;
        cout<<"\nEnter 1st number :: ";
        cin>>a;
        cout<<"\nEnter 2nd number :: ";
        cin>>b;
        cout<<"\nLargest of two numbers is : "<<Larg(a,b);
}
