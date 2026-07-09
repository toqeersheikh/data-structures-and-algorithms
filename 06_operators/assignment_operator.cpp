#include<iostream>
using namespace std;

int main()
{
	// The Assignment Operator (=):
	
	// Used to assign a value to a variable.
	
	// in programming: = : do not represent equility 
	
	// Does not mean: LHS = RHS 
	
	// Nor it is a comparison
	
	// RHS is an expression that is evaluated to a value.
	
	// The Value of RHS is stored into LHS.
	
	int x = 3+4; // x = 7 
	
	
	// C++ is statically typed.
	
	// The value of RHS must be Type Compatible with LHS 
	
	// The LHS must be assignable (ie a variable ) for instance we cant do this:
	
	// 3 = 4/2 or 7 = "String" ; not allowed 
	
	
	// Associativity : Right to Left 
	
	// We can chain operators together:
	 
	int num1,num2;
	
	num1 =  num2 = 1000;
	
	// As we know it associates from Right To Left:
	
	// So value 1000 is returned to num2 and value of num2 will be assigned to num1 at last.
	
	// But this is not a good practice.
	
	
	// And 
	
	// 100 = num1 : is not allowed 
	
	// because 100 is a literal, it has no location or address in memory.
	
	// and num1 has a value so we cannot assign a value to it.
	
	// we need to store it at some valid memory location 
	
	cout<<num1<<endl;
	
	cout<<num2<<endl;
	
	
	
	
	return 0;
}