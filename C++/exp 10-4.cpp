#include<iostream>
using namespace std;
class rectangle
{
   int length,breadth;
   public:
   void read();
   int operation();
   void display();
};
inline void rectangle::read()
{
	cout<<"Enter length and breadth\n";
	cin>>length>>breadth;
}
inline int rectangle::operation()
{
	return(length*breadth);
}
inline void rectangle::display()
{
	 cout<<"Area is : "<<operation();
}int main()
{
    rectangle r1;
    r1.read();
    r1.display();

}
