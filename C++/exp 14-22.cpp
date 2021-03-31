#include <iostream>
using namespace std;
class objcount
{
    public:
     static int c;

    public:
    objcount(int i)
    {
        if(i==1)
        {
			c++;
			cout<<"Object created. ";
		}
		if(i==2)
		{
			c--;
			cout<<"Latest object is delected";
		}
    }
    ~objcount()
    {

        cout<<"\ncurrent object count ="<<c<<endl<<endl;
        
    }
};
int objcount::c=0;
int main()
{
    int ch;
    cout<<"--------------- || OBJECT COUNTER || ----------------"<<endl;

    do {
        cout<<"1. Create Object\n2. Delete Object\n3.Exit";
        cout<<endl<<"Enter your choice: ";
        cin>>ch;
		objcount ob(ch);
    }while(ch!=3);
}
