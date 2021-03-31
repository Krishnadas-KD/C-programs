#include <iostream>
using namespace std;
void swap(int *x,int*y)  
{ 
	int temp=*x;  
	*x=*y;  
	*y=temp;
	
} 
int main()
{
	int m,n;
	cout<<"The value of i before swapping is :";
	cin>>m;
	cout<<"The value of j before swapping is :";
	cin>>n;
	swap(&m,&n);
	cout<<"\nThe value of i after swapping is :"<<m;
	cout<<"\nThe value of j after swapping is :"<<n;
	
}
