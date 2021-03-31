#include <iostream>
using namespace std;
template <class T>
class Sample
{
	T a,b;
	public:
	Sample(T first,T second)
	{
		a=first;
		b=second;
	}
	T maxvalue();
};

template <class T> 
T Sample<T>::maxvalue()
{
	if (a>b)
		return a;
	else
		return b;
}
int main()
{
	int b;
	Sample <int>  S1(100,75);
	cout<<"Maximam of 100 and 75=";
	b=S1.maxvalue();
	cout<<b;
	Sample <char>  S2('A','a');
	cout<<"Maximam of 'A' and 'a'=";
	cout<<S2.maxvalue();
	
}
