#include<iostream>
using namespace std;
void sum(int, int);

int main(){
   int row, col;
   cout<<"Enter the number of rows: ";
   cin>>row;
   cout<<"Enter the number of column: ";
   cin>>col;
   sum(row, col);
   return 0;
}
void sum(int r, int c)
{
   int m1[r][c], m2[r][c], s[r][c],i,j;
   cout << "Enter the elements of  first 1st matrix: ";
   for (i = 0;i<r;i++ ) 
   {
     for (j = 0;j < c;j++ ) 
     {
       cin>>m1[i][j];
     }
   }

   cout << "Enter the elements of  first 2st matrix: ";
   for (i = 0;i<r;i++ ) 
   {
     for (j = 0;j<c;j++ ) 
     {
       cin>>m2[i][j];
     }
   }
   cout<<"Output: \n";
   for (i=0;i<r;i++ ) 
   { 
     for (j=0;j<c;j++ ) 
     {
       s[i][j]=m1[i][j]+m2[i][j];
       cout<<s[i][j]<<"\t";
     }
     cout<<"\n";
   }
}
