#include<iostream>
using namespace std;
class prime
{
              int num,p;
              public:
              prime(int );
			~prime();

};
 prime::prime(int x)
 {
	 num=x;
	 for(int i=2;i<=num/2;++i)
	 {
		 if(num%i==0)
		 {
			 p=0;
			 break;
		 }
		 else
		 {
				p=1;
			}
	}
}
prime::~prime()
{
	if(p==1)
		cout<<num<<" is Prime Number.."<<endl;
	else
		cout<<num<<" is not Prime  Number.."<<endl;
}
int main()
{
    int a;
    cout<<"\nEnter any Number: ";
    cin>>a;
    prime p1(a);
 
    return 0;
}
