#include <iostream>
using namespace std;

class Check
{
  private:
    int i;
  public:
    
	void getdata()
	{
		cout<<"Enter a number";
		cin>>i;
	}
    // Return type is Check
    Check operator ++()
    {
       i=i+1;


    }
	Check operator --()
    {
       i=i-1;

    }
    void Display()
    { cout << "i = " << i << endl; }
};

int main()
{
    Check obj, obj1;
    obj.getdata();
    obj1.getdata();


    obj.Display();
    obj1.Display();

    return 0;
}
