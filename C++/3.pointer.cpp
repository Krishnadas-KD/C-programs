#include <iostream> 
using namespace std;
int main()
{
int num[]={ 56,75,22,18,90},j=25; 
int *ptr,*m;
m=&j;
cout<<"\n\nj"<<*m<<"\n\n";
ptr=&num[0];
cout<<"value of ptr "<<*ptr<<endl;
ptr++; 
cout<<"value of ptr++ "<<*ptr<<endl; 
ptr--;
cout<<"value of ptr-- "<<*ptr<<endl;
ptr=ptr+2; 
cout<<"value of ptr+2 "<<*ptr<<endl; 
ptr=ptr-1; 
cout<<"value of ptr-1 "<<*ptr<<endl;
return 0;
}
