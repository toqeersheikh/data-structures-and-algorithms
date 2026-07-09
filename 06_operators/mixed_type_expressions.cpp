#include<iostream>
using namespace std;

int main()
{
	// C++ Operations occur on same type of operands 
	
	// If operands are of different type, C++ will convert one into other 
	
	// For example: Integer + Double 
	
	// And it's important because it could affect calculation 
	
	// C++ will attempt to automatically convert types (Coercion)
	
	// If it can't compiler will throw an error 
	
	
	// How these conversions work we need to understand higher Vs lower types.
	
	// Higher VS lower types are based on the size of the value the type can hold 
	
	// The lower types are those that holds smaller values 
	
	// The Higher types hold larger values.
	
	// We can convert from a lower type to larger type automatically
	
	// But the opposite may not be true. 
	
	
	// Short and Char types are always converted to integers 
	
	
    // ======================
	
	
	// Type Coercion / Conversion :
	
	// Conversion of one data type to another data type.
	
	// . Implicit (automatic)
	// . Explicit (manually) 	
	
	
	// Promotion:
	
	// Conversion of a lower type to higher type, used in math expressions 
	
	// For example : int + double 
	
	double sum = 3+3.7;
	cout<<"Promotion : int + double: "<<sum<<endl;
	
	// Int will be converted to Double and Calculation will be performed 
	
	
	// Demotion: 
	
	// Converting a higher type to a lower type.
	
	// For example :   
	
	int add = 12+12.5;
	
	cout<<"Demotion : int + double: "<<add<<endl;
	
	// So in this case we are loosing some information and precision.
	
	// And compiler may warn you about this.
	
	// Lets understand this with an example:
	
	int total_amount{100};
	int total_number{8};
	
	// double average=total_amount/total_number;
	
	// cout<<average<<endl; 12 
	
	// But thats not true.
	
	// And since both are integers the compiler will do integer division and result is 12 which is wrong 
	
	// The solution of this problem is to tell the compiler to type caste total amount from integer to double 
	
	// =============
	
	// Explicit type casting:
	
	// Syntax:
	
	// static_cast<type>(value/variable)
	
	// So:
	
	double average =static_cast<double>(total_amount)/total_number;
	
	cout<<average<<endl;
	
	// Now one operand is double so it will be a double division : Promotion happened 
	  
	
	return 0;
}