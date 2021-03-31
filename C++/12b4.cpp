#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  try
  {
      cout<<"enter 2 num";
      cin>>a>>b;
      if(b!=0)
      {
		  
          c=a/b;
          cout<<"qotiant="<<c<<endl;
      }
      else
      {
          throw(b);
      }
      
  }
  catch(int i)
  {
      cout<<"not posible divition with="<<i<<endl;
  }
  
}
