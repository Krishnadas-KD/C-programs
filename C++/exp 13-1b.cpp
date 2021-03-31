#include <iostream>
using namespace std;

void check();

int main()
{
	check();
	check();
	check();
}
void check()
{
	static int c=0;
	cout<<"value of c="<<c<<endl;
	c+=5;
}

