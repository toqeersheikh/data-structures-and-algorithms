#include<iostream>
using namespace std;

int main()
{
	// Arithmetic Operators: + - / * %
	
	// + - / *  operators are overloaded to work with multiple types such as int, double, etc -+
	
	
	
	int result =100/200;
	
	// although the answer is 0.5 but because of int data type we get 0 
	
	cout<<result<<endl;
	
	// % is only for integers
	
	// % Oprator only return remainder after division
	
	// ===============
	
	// Order of Precedence:
	
	// In USA PEMDAS:
	
	// P: ()
	
	// E: Exponent 
	
	// M: *
	
	// D: /
	
	// A: +
	
	// S: -
	
	
	cout<<5/10<<endl; // 0: Integer Division
	
	cout<< 5.0/10.0<<endl; // 0.5: Double Division 
	
	return 0;
}