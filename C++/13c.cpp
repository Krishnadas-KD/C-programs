#include <iostream>
using namespace std;
template <class T>
class vector
{
	T a[20];
	T size;
	
	public:
		void create()
		{
			cout<<"Enter the intx of vector:";
			cin>>size;
			cout<<"Enter the elemebnet of metrix:";
			for(int i=0;i<size;++i)
			{
				cin>>a[i];
			}
		}
		void dispaly()
		{
			cout<<"The current vector element: "<<endl;
			for(int i=0;i<size;++i)
			{
				cout<<a[i]<<"\t";
			}
			cout<<"\n\n";
		}
		void modify();
		void multi();
};

template <class T>
void vector<T>:: modify()
{
	int n,r;
		cout<<"which element want to modify?";
		cin>>n;
		cout<<"the value of new element:";
		cin>>r;
		for(int i=0;i<size;++i)
		{
			if(n==a[i])
			{
				a[i]=r;
			}
			
		}
}
template <class T>
void vector<T>:: multi()
{
	int n;
	cout<<"Enter the scaler for multi play:";
	cin>>n;
	for(int i=0;i<size;++i)
	{
			a[i]=a[i]*n;
			
	}
}
int main()
{
	int a=0;
	vector <int> v1;
	while(a!=5)
	{
	cout<<"\n\t--Enter which operation want to perfom--\n";
	cout<<"1-(to create a vector)\n";
	cout<<"2-(To modify the value of a given element.)\n";
	cout<<"3-(To multiply the vector by a scalar value.)\n";
	cout<<"4-(To dispaly the vector.)\n";
	cout<<"5-(To exit the program)";
	cout<<"\nEnter the chocies number:";
	cin>>a;
	switch(a)
        {
            case 1:
                v1.create();
                v1.dispaly();
                break;
               
            case 2:
				v1.modify();
                v1.dispaly();
                break;
               
            case 3:
                v1.multi();
                v1.dispaly();
                break;
               
            case 4:
                v1.dispaly();
                break;
               
            case 5:
                cout<<"exit";
                break;
               
        }
}
	
}
