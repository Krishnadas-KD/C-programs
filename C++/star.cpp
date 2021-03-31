#include <iostream>
using namespace std;

int main()
{
    int space,rows,i=0,k;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(i = 1; i <= rows; ++i )
    {
		k=0;
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k!=2*i-1)
        {
            cout<<" *";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
