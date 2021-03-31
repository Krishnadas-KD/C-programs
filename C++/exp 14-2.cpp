#include <iostream>
using namespace std;
class objectCount
{
    protected:
    static int c;

    public:
    objectCount(int i)
    {
        if(i==1)
        {
			c++;
			cout<<"Object created.\n current object count ="<<c;
		}
		if(i==2)
		{
			c--;
			cout<<"Latest object is delected .\n"<<c;
		}
    }
    ~objectCount()
    {

        cout<<"now current object count ="<<c<<endl;
        
    }
};
int main()
{
    int ch;
    cout<<"--------------- || OBJECT COUNTER || ----------------"<<endl;

    do {
        cout<<"1. Create Object\n2. Delete Object\n3.Exit";
        cout<<endl<<"Enter your choice: ";
        cin>>ch;
		objectCount ob(ch);
    }while(ch!=3);
}
