#include<iostream>
using namespace std;
#include<vector>

int main()
{
	// Arrays are fixed in size and we need to specify the size of arrays while declaring them 
	
	// So arrays are static in size and if we set the size beyond the need and the need is unknown let say, 
	// then this is a waste of memory 
	
	// And sooner or later you will get an element that will exceed the size of aray 
	
	// So what is the solution?
	
	// We can use a dynamic array such as vector to solve this problem 
	
	// What is a Vector?
	
	// Container in standard C++ Template Library  : AKA Dynamic Arrays
	
	// When we create a C++ Vector, we are creating C++ Object 
	
	// And therefor we can perform operations on vectors or call methods like sort, reverse etc
	
	// So Vectors are basically Arrays that can grow and shrink in size at execution Time / RunTime 
	
	// Vectors also provide syntax and semantics similar to arrays 
	
	// Very Efficient 
	
	// Can provide Bounds Checking 
	
	// Declaring Vectors:
	
	// Include Vector Library
	
	// Syntax:
	
	// vector <type_of_vector_element> vector_object_name(size) 
	
	// A vector is a Object Oriented Template Class
	
	// vector <int> test_scores(10);
	
	// and these 10 integers will automatically set to zero 
	
	// Initialiing:
	
	vector <char> vowels{'a','e','i','o','u'};
	
	vector <int> test_scores {100,98,88,77};
	
	vector <double> tempratures (365,80.0);
	
	// In this case we are declaring a vector of 365 doubles and
	// Initializing all of those doubles to 80.0 
	
	// We can also declare a vector as a copy of array of another vector
	
	// Characteristics of a Vector 
	
	// Dynamic Size 
	
	// Grow or Shrink 
	
	// All elements are of same type 
	
	// Stored contigously in memory 
	
	// Individual elements can be accessed by their position or index 
	
	cout<<vowels[0]<<endl;
	
	// Last element is at index: size-1 
	
	// [] operator gives no bounds check 
	
	// provide many useful methods to check if you are out of bounds 
	
	// Elements are initialized to zero automatically if we dont set any value 
	
	// Can be looped 
	
	
	for (int i=0; i<4;i++)
	{
		
		cout<<test_scores[i]<<" ";
	}
	
	// Accessing and Modifying Vector Elements 
	
	// 1. Accessing Vector Elements using Array Syntax:
	
	// Vector_name [element_index];
	
	// So we can access using subscript [] operator 
	
	// test_score[1] : we read this as test_Score sub 1
	
	// Vector Subscripting or Indexing is same as it is in the array 
	
	// It starts at zero 
	
	cout<<endl;
	
	// And when we use the subscript operator with the vector no bounds checking will be done 
	
	// 2. Accessing Vector elements using at method:
	
	cout<<test_scores.at(2)<<endl;
	cout<<test_scores.at(0)<<endl;
	cout<<test_scores.at(3)<<endl;
	
	
	cout<<"Changing the Contents of a Vector Elements"<<endl;
	
	// Changing the Contents of a Vector Elements
	
	// Vector Syntax 
	
	// cout<<test_scores.at(4)<<endl; // there is no element at index 4 and we got nothing not even a garbage value 
	
	test_scores.at(1)=101; // content at index 1 modified 
	
	cout<<test_scores.at(1)<<endl;
	
	// When do Vectors change their size dynamically?
	
	// The Vector has a method:
	
	// push_back(element)
	
	// Adds a new element to the end of vector 
	
	// But the element we want to add must be of the same type as the other vector elements 
	
	test_scores.push_back(121);
	
	// Vector will automatically allocate the required space 
	
	// And we cannot do this with arrays 
	
	
	cout<<"dynamically added element in the vector "<<test_scores.at(4)<<endl;
	
	
	// What if you are out of bounds while using a vector method?
	
	// Many Vector methods provide bounds checking 
	
	// An Exception and error message is generated if you are out of bounds 
	
	// 2-D Vector: A vector of Vectors 
	
	// Example:
	
	vector <vector <int>> movie_ratings {{5,7,9},{7,8,6},{6,4,7}};
	
	
	// Reading:
	
	
	cout<<movie_ratings[2][1]<<endl;
	
	
	cout<<movie_ratings.at(1).at(1)<<endl;
	
	
	return 0;
}
