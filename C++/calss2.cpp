#include <iostream> 
using namespace std; 
class Consumer
{  
	int cn;   
	char name[20]; 
	float unit,total; 
	public:   
	void getdata(); 
	void display(); 
};
void Consumer::getdata()
{
	cout<<"enter the consumer number:";
	cin>>cn;
	cout<<"\nenter the name:";
	cin>>name;
	cout<<"\nenter the unts of electricity consumed:";
	cin>>unit;
	total=unit*3;
}
void Consumer::display()
{
	cout<<"Consumer Number:"<<cn<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Units of Electricity Consumed:"<<unit<<endl;
	cout<<"Total charge:"<<total<<endl;
}
int main()
{
Consumer s1[10]; 
int i;
for(i=0;i<10;i++)  
{
cout<<"\n**enter the "<<i+1<<" constmer details**\n";
s1[i].getdata(); 
s1[i].display();
}
}
