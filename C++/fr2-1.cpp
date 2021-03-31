#include<iostream>
using namespace std;
int main()
{
	int x,z,result;
	char operand;
	do 
	{ 
		cout<<"Please enter the operand of the problem you would like to solve:"<<endl;  
		cout<<"+ for addition"<<endl;  
		cout<<"- for subtraction"<<endl;   
		cout<<"* for multiplication"<<endl;   
		cout<<"/ for division"<<endl;   
		cout<<"Enter q to quit"<<endl;   
		cout<<"Enter your choice ==> ";   
		cin>>operand;   
		cout<<"Please enter the two numbers ==> ";   
		cin>> x >> z; 
		switch (operand)   
		{    
			case '+':     
result = x+z;     
cout<<"The answer is: " << result <<endl;         
break;    
case '-':    
result = x-z;     
cout<<"The answer is: " << result <<endl;    
break;    case '*':     
result = x*z; 
cout<<"The answer is: " << result <<endl;    
break;    
case '/':     
if (z ==0 )     
{      
cout<<"That is an invalid operation" <<endl;     
}     
else     
{     
result = x/z;     
cout<<"The answer is: " << result <<endl;     
}    
break;    
default :    
cout<<"That is an invalid operation" <<endl;    
break;   
}     
}while (operand != 'q'); 
}
