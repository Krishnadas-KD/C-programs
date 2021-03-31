#include <iostream>
using namespace std;
template <class T>
class datalist
{
	T a[5];
	T data;
	public:
	void getlist()
	{
		for(int i=0;i<5;++i)
		{
			cin>>a[i];
		}
	}
	void showlilst()
	{
		cout<<"Enter data to search";
		cin>>data;
	}
	int searchlist();
};
template <class T>
int datalist<T>:: searchlist()
{
		int found=0;
		for(int i=0;i<5;++i)
		{
			if(a[i]==data)
			{
				found=1;
				break;
			}

		}
	return found;
}
int main()
{
	datalist <int> d1;
	cout<<"Enter 5 list data";
	d1.getlist();
	d1.showlilst();
	if(d1.searchlist()==1)
	{
		cout<<"Data Found."<<endl;
		
	}
	else
	{
		cout<<"Data not found";
	}
}

