#include <iostream>
using namespace std;
class Box
{
	int l,b,h;
	public:
	Box(int x,int y,int z)
	{
		l=x;
		b=y;
		h=z;
	}
	int Volume()
	{
		return (l*b*h);
	}
	int compare(Box box)
	{
		return this->Volume() > box.Volume();
	}
};

int main()
{
	int l1,b1,h1;
	int  l2,b2,h2;
	cout<<"enter length,breadth, height of box1 ?";
	cin>>l1>>b1>>h1;
	Box box1(l1,b1,h1);
	cout<<"enter length,breadth, height of box2 ?";
	cin>>l2>>b2>>h2;
	Box box2(l2,b2,h2);
if(box1.compare(box2))
{
	cout<<"Box2 is smaller than box1";

}
else
{
cout<<"Box2 is largert than box1";

}
}
