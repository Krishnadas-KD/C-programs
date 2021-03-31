#include <iostream>
#include <fstream>
using namespace std;
main()
{ 

fstream file;
int i;
char author[20],bid[20],bname[20];
float price;
file.open("Library",ios::out);
for(i=0;i<3;i++)
{
cout<<"Enter author,book id ,book name,price?";
cin>>author>>bid>>bname>>price;
file<<author<<"\t"<<bid<<"\t"<<bname<<"\t"<<price<<"\t"<<endl; 
}
file.close();
file.open("Library",ios::in);
cout <<"author"<<"\t"<<"book id"<<"\t"<<"name"<<"book name"<<"price"<<endl;
for(i=0;i<3;i++)
{
file>>author>>bid>>bname>>price;
if(price>=500)
{
cout<<author<<"\t"<<bid<<"\t"<<bname<<"\t"<<price<<"\n";
}

}
file.close();
}
