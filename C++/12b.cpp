#include <iostream>
using namespace std;
class squa;
class rectangle
{
	int w,h;
	public:
		int area()
		{
			return (w*h);
		}
		void con(squa a)
		{
			w=a.side;
			h=a.side;
		}
		
};
class squa
{
	friend class rectangle;
	private:
		int side;
	public:
		square(int y)
		{
			side=y;
		}
};
int main()
{
	int x;
	rectangle r1;
	cout<<"Enter th side of square:";
	cin>>x;
	squa s1(x);
	r1.con(s1);
	cout<<"Area od quare="<<r1.area();
	cout<<endl;
	}
