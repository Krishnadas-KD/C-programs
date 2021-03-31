#include <iostream> 
using namespace std;
  
int main() 
{ 
    int n;
    cout<<"enter a number";
    cin>>n 
    if (isPrime(n)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
}
bool prime(int n, int i = 2) 
{ 
    if (n <= 2) 
        return (n == 2) ? true : false; 
    if (n % i == 0) 
        return false; 
    if (i * i > n) 
        return true; 
    return isPrime(n, i + 1); 
} 

