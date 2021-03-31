# include <iostream>
using namespace std; 
 
int main() 
{ 
	char op;
	float num1, num2; 
	cout << "Enter 2 Numbers ? ";
	cin >> num1 >> num2; 
	cout << "Enter Operator +, -, * or / ? "; 
	cin >> op; 
	
	switch(op) 
	{ 
  		case '+':
  			cout << "Sum = " << num1+num2;
  			break;
  	
  		case '-':
  			cout << "Difference = " << num1-num2;
  			break;
  	
  		case '*':
  			cout << "Product = " << num1*num2;
  			break;
  	
  		case '/':
  			cout << "Quotient = " << num1/num2;
  			break;
  	
  		default:
  			cout << "Error!";
  			break;
	} 
	cout << endl;
 	return 0; 
} 
