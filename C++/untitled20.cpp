#include <iostream>
#include <fstream>
using namespace std;
main()
{ 

fstream file;
int i,j;
char author[20],bid[20],bname[20];
float price;
file.open("Library",ios::in);
for(
{ 
	cout<<"Enter author,book id ,book name,price?";
cin>>author>>bid>>bname>>price;
file<<author<<"    "<<bid<<"   "<<bname<<"    "<<price<<"    "<<"\n";
}
file.open("Library",ios::out);
cout <<"author"<<"\t"<<"book id"<<"\t"<<"name"<<"book name"<<"price"<<endl;
for(j=1;j<=3;j++)
{

file>>author>>bid>>bname>>price;
cout<<author<<"\t"<<bid<<"\t"<<bname<<"\t"<<price<<"\n";

}
file.close();
}
