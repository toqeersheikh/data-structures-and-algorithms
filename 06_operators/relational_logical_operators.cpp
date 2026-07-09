#include<iostream>
//#include<compare>
using namespace std;

int main()
{
	// Relational Operators 
	
	// > greater than
	// < Less than
	// >= greater than or equal to
	// <= less than or equal to 
	// <=> three way comparison : commonly called the spaceship operator (introduced in C++20).
	
	// compares two expressions and evaluates to zero if they are equal 
	
	// cout<<(10<=>10);
	
	// Instead of returning a simple true or false, it returns a special object that represents how the two values compare. 
	// When comparing standard integers like 10 and 10, it returns an object of type std::strong_ordering.
	
	// To fix this and see the result, you have to compare the output of the spaceship operator against 0 (or against 
	// the specific ordering type). 
	// Here is how it works:
	// // This evaluates to true because 10 is equal to 10
    
	cout << ((10 <=> 10) == 0) << "\n"; // Outputs: 1 (true)
	
	// Logical Operators:
	
	// not !
	// And &&
	// or ||
	
	// Evaluates to a boolean value 
	
	
	// Short Circuit Evaluation:
	
	// When the result is known as soon as C++ Stops Evaluating a logical Expression 
	
	// Compound Assignment Operators:
	
	// += 
	// -= 
	// /= 
	// *= 
	// >= 
	// <= 
	// %= 
	// >>= 
	// <<= 
	 
	
	return 0;
}