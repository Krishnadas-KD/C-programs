#include <iostream> 
using namespace std; 
int main() 
{ 
 int n,a[5],d,i; 
 cout<<" how many voters"; 
 cin>>n; 
 for(i=1;i<=5;i++) 
 { 
  a[i]=0; 
 } 
 for(i=0;i<n;i++) 
 { 
  cout<<"enter the candidate number (1 to 5)"; 
  cin>>d; 
 switch(d) 
 { 
  case 1: 
   a[1]++; 
   break; 
  case 2: 
   a[2]++; 
   break; 
  case 3: 
   a[3]++; 
   break; 
  case 4: 
   a[4]++; 
   break; 
  case 5: 
   a[5]++; 
   break; 
  default: 
   cout<<"\nenter invalied number\n"; 
   break; 
 } 
 } 
 for(i=1;i<=5;i++) 
 { 
  cout<<"\ncandudate "<<i<<" get "<<a[i]<<" votes\n"; 
 } 
 return 0; 
} 
