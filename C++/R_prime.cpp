#include <bits/stdc++.h> 
using namespace std; 
  
int isPrime(int n, int i = 2) 
{ 
 
    if (n<=2) 
        return (1); 
    if (n%i==0) 
        return 0; 
    if (i*i>n) 
        return 1;
    return isPrime(n, i + 1); 
} 
  
int main() 
{ 
    int n;
    cout<<"enter a number";
    cin>>n; 
    if (isPrime(n)==1) 
        cout << "prime number "; 
    else
        cout << "not prime number"; 
  
    return 0; 
}
