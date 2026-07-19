#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	// C-Style Strings in C++:
	
	// Sequence of characters 
	// Contiguous in memory 
	// Implemented as an array of characters
	// We can access each character using []
	// Terminated by a null character 
	// Null Character with a value of Zero 
	
	// So c style strings are often refered to as zero or null terminated strings 
	
	// String literal:
	// Sequence of characters in double quotes 
	// Terminated with a null character 
	// One contiguous block is used to allocate space for null character 
	
	// Declaring C style strings:
	
	// Explicit array sizing (needs 6 slots for 5 letters)
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    
    // Automatic sizing (C++ automatically adds the '\0' at the end)
	char my_name[]{"Toqeer"};
	
	// Array of characters 
	
	cout<<my_name<<endl;
	
	// 	Access any character using [] 
	
	cout<<my_name[0]<<endl;
	cout<<my_name[5]<<endl;
	
	// cout<<my_name[6]<<endl; o/p: nothing because my_name has only 5 valid indexes
	
	
	cout<<my_name[6]<<endl;
	
	cout<<my_name<<endl;
	cout<<strlen(my_name)<<endl;
	
	// char user_name[5];
	// Not-initialized: Doing so is unsafe 
	
	// This could be problamitic 
	
	// Because all c style strings are expected to find a null character at the end of string 
	
	// And here, there may or may not be one
	
	// We dont know what the data in the array is 
	
	//for(char c:user_name)
	//{
	//	cout<<c<<endl;
	//}
	
	
	cout<<endl;
	
	// my_name[6]='s';
	// may not get an error 
	// but this is absolutely not recomended 
	//  Why? Buffer Overflow
	
	// Strcpy() 
	
	// used to assign 1 string to another 
	
	
	// up until this point length of my name is: 6
	// and length of jahangir is : 8
	
	strcpy(my_name,"jahangir");
	
	// Buffer Overflow: If you try to copy a 10-character string into an 8-character array using strcpy, 
	// C++ will overwrite adjacent memory. This causes undefined behavior, crashes, and severe security vulnerabilities.
	
	cout<<my_name<<endl;
	
	for(char c:my_name)
	{
		cout<<c<<" ";
	}
	// and thats why we dont  get r here 
	
	
	// How C style Strings are displayed?
	
	
	// So we start at the first element of the array and we iterate through it
	
	// At every character we see if it is a null character 
	
	// if it is null we stop, since we reach at the end of string 
	
	// if not we keep iterating 
	
	// And in the case of uninitialized string we dont know whats gonna happen
	
	// Things are uncertain!
	
	// We might see null at first character or there might not be a null.
	
	
	// ==================
	
	cout<<endl;
	
	cout<<strlen(my_name)<<endl;
	
	// And as C-style strings are just arrays, you can't use operators like + to combine them or == to compare them. 
	// Instead, you have to use functions from the <cstring> header.
	
	// <cstring>: Library contains many functions that work with c style strings 
	
	// Functions that work with C style strings are used to:
	
	// Copying 
	// Concatenation 
	// Comparison 
	// Searching 
	// And Others 
	
	// They all rely on one common factor:
	
	// That the sequence of character they are working on is terminated with a NUll character 
	
	// Examples:
	
	// strcpy() : copy
	
	// strcat() : contcat
	
	// strlen() : return length 
	
	// strcmp() : compare strings 
	
	
	// <cstdlib> :
	
	// Library for general purpose functions
	
	// To convert strings to other types:
	
	// Strings to integer
	// Strings to float
	// Strings to long
	// etc
	
	// Again they all rely on null termination of strings 
	
	return 0;
}