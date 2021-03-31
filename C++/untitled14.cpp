/* Develop a C++ Program that reads marks obtained by a student in a test of 100 marks and computes his grade according to the following criteria. Marks>=80 grade=A Marks>=70 &<80 grade=B Marks>=60 &<70 grade=C Marks>=50 &<60 grade=D Otherwise grade=F 
 */
 #include <iostream>
using namespace std;
int main()
{
	int m;
	cout<<"enyter the mark";
	cin>>m;
	switch(m/10)
	{
		case 10:
		{
			cout<<"grade A ";
			break;
		}
		case 9:
		{	cout<<"grade A ";
			break;
		}
		case 8:
		{
			cout<<"grade A ";
			break;
		}
		case 7:
		{	cout<<"grade B  ";
			break;
		}
		case 6:
		{	cout<<"grade C ";
			break;
		}
		case 5:
		{	cout<<"grade D";
			break;
		}
		default : 
		{    
		cout<<"grade F ";    
		break;
		}
	}
	return 0;
	
}
