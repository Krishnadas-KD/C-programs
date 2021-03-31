#include <iostream>
using namespace std;
struct times
{
	int hour;
	int minute;
	int second;
};
int main()
{
	times t1, t2, t3;
	cout << "Enter Time 1 in hh mm ss ? ";
	cin >> t1.hour >> t1.minute >> t1.second;
	cout << "Enter Time 2 in hh mm ss ? ";
	cin >> t2.hour >> t2.minute >> t2.second;
	cout << "Time 1 = " << t1.hour << ":" << t1.minute << ":" << t1.second;
	cout << endl;
	cout << "Time 2 = " << t2.hour << ":" << t2.minute << ":" << t2.second;
	cout << endl;
    t3.second = t1.second - t2.second;
    t3.minute = t1.minute-t2.minute;
    t3.hour = t1.hour-t2.hour;
    if(t2.second>t1.second)
	{
		t3.minute--;
		t3.second=60-t2.second;
	}
	if(t2.minute>t1.minute)
	{
		t3.hour--;
		t3.minute=60-t2.minute;
	}
    while(t3.second>60)
    {
		t3.minute=t3.minute+t3.second/60;
		t3.second=t3.second-60;
	}
	 while(t3.minute>60)
    {
		t3.hour=t3.hour+t3.minute/60;
		t3.minute=t3.minute-60;
	}
    cout<<"the time differnce::: "<<t3.hour<<":"<<t3.minute<<":"<<t3.second;

}


