#include <iostream>
using namespace std;
class student
{
	int regno,m1,m2,m3;
	char name[20];
	float avg;
	public:
	void getdata()  
	{ 
		cout<<"\nenter the name: " ;
		cin>>name;
		cout<<"enter the regno: ";
		cin>>regno;
		cout<<"enter the m1,m2,m3: \n";  
		cin>>m1>>m2>>m3;  
	} 
	void calculate()  
	{ 
		avg=(m1+m2+m3)/3;  
	} 
	void display()  
	{ 
		cout<<"******************\n";  
		cout<<"\nName: "<<name;  
		cout<<"\nRegno: "<<regno;  
		cout<<"\nMark1: "<<m1;  
		cout<<"\nMark2: "<<m2;  
		cout<<"\nMark3: "<<m3;  
		cout<<"\nAvg: "<<avg;  
		cout<<"\n******************\n";  
	}
};
	int main()  
	{ 
		
		student r; 
		r.getdata(); 
		r.calculate(); 
		r.display(); 
		return 0;
	}
