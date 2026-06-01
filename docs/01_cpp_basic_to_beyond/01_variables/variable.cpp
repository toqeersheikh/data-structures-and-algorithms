#include<iostream>
using namespace std;

int main()
{
	
	int age =18; 
	
	
	// There are three ways to initialize a variable in c++:
	
	// 1. Using assignment operator (=)
	
	int date=21;
	
	cout<<"Initializing Using assignment operator (=): "<<date<<endl;
	// This is called C-like initialization 
	
	// 2. Constructor Initialization:
	 
	int score(77);
	
	cout<<"Initializing Using Constructor: "<<score<<endl;
	
	// 3. C++ 11 List Initialization Syntax:
	
	int rating{7};
	// this method is recomended
	
	
	cout<<"Initializing Using C++ 11 List Syntax: "<<rating<<endl;
	
	// never leave variables uninitialized
	
	int rate{};
	
	cout<<"Initialize with 0: "<<rate<<endl;
	
	
	// Primitive types 
	
	
	// char
	
	
	cout<<sizeof(char)<<endl; 
	
	// use single quotes: double quotes are for strings
	
	// int: integer , short int, long int etc
	
	// Float: non integers like 1.5
	
	
	// Double
	
	// boolean
	
	// Size of operator: determines the size of a type in bytes like sizeof(int)
	
	// can also be used to determine the size of compound types like arrats and structures etc 
	
	// <climits> <cfloat>
	
	// the sizeof operator gets its information from these two include files 
	
	
    
	
	
	
	
	
	return 0;
}