#include<iostream>
using namespace std;

int main()
{
	// Condtional Operator | Ternary Operator
	
	// (condition) ? expression 1 : expression 2 ; 
	
	// condition evaluates to a boolean value 
	
	int age{17};
	
	string result=(age>=18)? "You are allowed to drive":"You are under age.";	
	
	cout<<result<<endl;
	
	// Never use nested conditional operators it's abuse  
	
	
	return 0;
}