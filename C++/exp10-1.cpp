#include <iostream>
using namespace std;
inline float mul(float x,float y)
 {
              return(x*y);
  }
  inline float cube(float x)
   {
               return(x*x*x);
    }
int main()
{
              float val1,val2;
              cout<<"Enter two values:";
              cin>>val1>>val2;
              cout<<"\nMultiplication value is:"<<mul(val1,val2);
              cout<<"\n\nCube value is          :"<<cube(val1)<<"\t"<<cube(val2);
}
