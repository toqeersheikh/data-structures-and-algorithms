#include<iostream>
#include<cctype> // to include functions that we can use with characters 
using namespace std;

int main()
{
	// characters
	
	// Characters basically hold integer values or they are just integer values that represent characters 
	
	// And these integer values are mapped to a character set like ASCI 
	
	// And Strings are Sequence of characters 
	
	// Character Functions:
	
	// For testing characters : Evaluates to True or False 
	
	// For converting character case : return converted character 
	
	// All these functions receives a single character as an input 
	
	// Here are some of them:
	
	cout<<boolalpha;
	
	char test{'A'};
	
	cout<<isalpha(test)<<endl; // True if input is a letter 
	
	cout<<isalnum(test)<<endl; // True if input is letter or Digit 
	
	cout<<isdigit(test)<<endl; // True if input is a digit
	
	cout<<isprint(test)<<endl; // True if input is a printable 
	
	cout<<ispunct(test)<<endl; // True if input is a punctionation character
	
	cout<<isupper(test)<<endl; // True if input is a input is Uppercase Letter
	
	cout<<isspace(test)<<endl; // True if input is a white space 
	
	
	// Here are some conversion Functions:
	
	char lower = tolower('Z');
	
	char upper = toupper('z');
	
	cout<<lower<<endl;
	cout<<upper<<endl;
	
	
	return 0;
}