#include<iostream>    
using namespace std;      
void fibo(int);
int main()
{    
    int n;
    cout<<"enter the limit";
    cin>>n;
    cout<<"Fibonacci Series: ";    
    cout<<"0 "<<"1 ";  
    fibo(n-2);   
    return 0;  
}
void fibo(int n)
{    
    static int n1=0, n2=1, n3;    
    if(n>0)
    {    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
		 cout<<n3<<" ";    
         fibo(n-1);    
    }    
}

