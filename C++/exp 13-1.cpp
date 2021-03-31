#include <iostream>
using namespace std;

void check();
int a=5;

int main()
{
	a+=4;
	check();
	return 0;
}
void check()
{
	++a;
	cout<<"value of a="<<a<<endl;
}
