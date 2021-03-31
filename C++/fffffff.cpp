#include <iostream> 
using namespace std; 
class con 
{  
	int m,n,s; 
	public: 
	con() 
	{  
		m=0; 
		n=0; 
	}  
	con(int x, int y) 
	{
		  m=x;
		  n=y; 
	} 
 void display() 
 {  
	 cout << m<<"*" << n <<"="<<s<< endl; 
}
 void calculate() 
 {  
	 s=m*n ;
 } 
 con( con &ptr)
 {
	 m=ptr.m;
	 n=ptr.n;
 }
	 
}; 
 main() 
 { 
	con i1, i2(10, 30);
	con i3=i2;
	i1.display();
	i2.calculate(); 
	i2.display();
	i3.calculate();
	i3.display(); 
 }
