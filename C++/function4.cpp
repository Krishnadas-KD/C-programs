#include<iostream>
using namespace std;
void sum(int,int,int,int);
int main()
{
int r,c;
   int m1[r][c],m2[r][c],i,j;
   cout<<"Enter the number of rows(should be >1 and <10): ";
   cin>>r;
   cout<<"Enter the number of column(should be >1 and <10): ";
   cin>>c;
   cout << "Enter the elements of  first 1st matrix: ";
   for (i=0;i<r;i++) 
   {
     for (j=0;j<c;j++) 
     {
       cin>>m1[i][j];
     }
   }
   cout << "Enter the elements of  first 1st matrix: ";
   for (i=0;i<r;i++ ) 
   {
     for (j=0;j<c;j++ ) 
     {
       cin>>m2[i][j];
     }
   }
   sum(m1[r][c],m2[r][c],r,c);
   return 0;
}
void sum(int n[20][20],int n1[20][20],int row,int col)
{
	int s[20][20],k,l;
   cout<<"Output: ";
   for (k=0;k<row;k++ ) 
   { 
     for (l=0;l<col;l++ ) 
     {
       s[k][l]=n[k][l]+n1[k][l];
       cout<<s[k][l]<<" ";
     }
   }
}
