#include <iostream>
using namespace std;
class operation
{
		public:
				int a,b;
		public:
			void getdata()
			{
					cout<<"Enter 2 number";
					cin>>a>>b;
			}
			virtual int result()
			{
					return 0;
			}
};
class sum:public operation
{
		public:
			int result()
			{
					return (a+b);
			}
};
class substract:public operation
{
		public:
			int result()
			{
					return(a-b);
			}
};
int main()
{
		sum s;
		substract sub;
		operation *o1;
		o1=&s;
		o1->getdata();
		cout<<"Sum="<<o1->result();
		cout<<endl;
		o1=&sub;
		o1->getdata();
		cout<<"subtraction="<<o1->result();
		cout<<endl;
}

