# include <iostream>
using namespace std;
class bank
	{
	char name[20];
	int acno;
	int amount;
public:
	void getdata()
	{
		cout<<"\nenter the account no:";
		cin>>acno;
		cout<<"\nenter the name:";
		cin>>name;
		cout<<"\nenter the amount in account:";
		cin>>amount;
	}
	void deposit()
	{
		int n;
		cout<<"\nhow many emount depositing?";
		cin>>n;
		amount=amount+n;
	}
	void withdraw()
	{
		int n;
		cout<<"\nhow many amount withdrawing?";
		cin>>n;
		amount=amount-n;
	}
	void balance()
	{
		cout<<"\n=====================\n";
		cout<<"\nAccount no:"<<acno;
		cout<<"\nName:"<<name;
		cout<<"\ntotal amount:"<<amount;
		cout<<"\n=====================\n";
	}
};
int main()
{
	bank b1;
	b1.getdata();
	b1.balance();
	b1.deposit();
	b1.balance();
	b1.withdraw();
	b1.balance();
}


