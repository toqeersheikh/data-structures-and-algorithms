#include<iostream>
#include<string>
#include <limits> // Required for numeric_limits
using namespace std;

// String are in the standard namespace : std namespace

int main()
{
	// C++ strings
	
	// Contiguous in memory 
	
	// dynamic size 
	
	// work with input and output streams 
	
	// lots of useful member functions 
	
	// C++ strings work with operators like +, =, <, >, <=,>=, +=, -=, !=, [] etc 
	
	// C style strings dont work well with these operators 
	
	// C++ strings can be easily converted to C style strings if needed 
	
	// Declaring and Initializing 
	
	// Include <string> header file 
	
	string s1; // empty string no garbage value. 
	
	// Strings are always initialized 
	
	cout<<s1<<endl;
	
	string s2{"Ali"};
	
	cout<<s2<<endl;
	 
	string s3{s2};
	
	// copying s2 into s3
	cout<<s3<<endl;
	
	
	string s4{"Nayyar", 3};
	
	// Initialize to first 3 characters 
	
	cout<<s4<<endl;
	
	string s5{s3,0,2};
	
	// copy s3, starting index of s3 : 0, length : 2
	
	cout<<s5<<endl;
	
	// Constructor Syntax:
	
	string s6 (3,'A');
	
	// AAA
	
	cout<<s6<<endl;
	
	// Strings Assignment 
	
	string s7 = "C++ Rocks!";
	
	cout<<s7<<endl;
	
	string s8{"Hello"};
	 
    s7=s8;
	 
	cout<<s7<<endl;
	
	// String Concatenation:
	
	// use + operator 
	
	string sentence =s7+ " "+ s2+" "+s3+ " "+ s4+ " ";
	
	cout<<sentence<<endl;
	 
	// string illegal = "C++ is" + "So cool.";
	// Not allowed as there are two c style literals 
	
	
	//cout<<illegal<<endl;
	
	// =============
	
	// Accessing Characters:
	
	// We can access any character using subscript operator and at()
	
	
	cout<<s7<<endl;
	cout<<s7[0]<<endl;
	
	cout<<s7.at(0)<<endl;
	
	// And we can change any character using these as well 
	
	s7[0]='F';
	
	cout<<s7<<endl;
	
	s7.at(0)='N';
	
	cout<<s7<<endl;
	
	// at method also do bounds checking 
	
	// So if you set over bound you get an exception which you can fix later 
	
	// Iteration
	
	for(char c: s7)
	{
		cout<<c<<" ";
	}
	
	cout<<endl;
	
	// And we can use int as well as characters are basically integers 
	
	for (int c: s7)
	{
		cout<<c<<" "; // But here we will get ASCI values for each character 
	}
	
	cout<<endl;
	
	// And we can even use auto keyword if the type is unknown in range based for loop 
	
	for(auto c: s7)
	{
		cout<<c<<" ";
	}
	
	cout<<endl;
	
	
	// Comparing two strings : C++ strings
	
	// Which are just objects 
	
	// objects are compared lexically 
	
	// for example character by character based on ASCI value 
	
	// For example : A<Z , A>0 etc 
	
	// we cant use these operators on C style Literals 
	
	// for example:  
	
	cout<<boolalpha;
	
	cout<<(s1==s2)<<endl;// false 
	
	cout<<(s1>s2)<<endl;
	
	cout<<s3<<endl;
	
	cout<<(s3=="Ali")<<endl; // True
	
	cout<<('A'=='a')<<endl;// false
	
	cout<<("apple"=="Apple")<<endl;
	
	// Because A and a has different ASCI values in Table 
	// And we know characters are stored as integers 
	
	// Substring: extracting some portion from a string 
	
	// substr()
	
	cout<<s7<<endl;
	
	cout<<s7.substr(0,3)<<endl;
	
	// 0 is the starting index and 3 is the length 
	
	string s10{"C++ is super strong"};
	
	// find() used for searching , returns the index of a substr 
	
	cout<<s10.find("+")<<endl;
	
	// Removing characters:
	
	// erase(): removes a substr of characters from string 
	
	// clear(): makes any string empty 
	
	// Length method:
	// return length of characters in a string 
	
	cout<<s10.length()<<endl;
	
	// Getting a C++ string as user input 
	
	string s11;
	cout<<"Enter string as input : "<<endl;
	cin>>s11;
	
	// But it only accepts upto first space 
	cout<<s11<<endl;
	
	// so to read entire line until new line character we use getline()
	//cout<<"Enter complete sentence : "<<endl;
	
	//getline(cin,s11,'\n');
	// It gets skipped! It reads the leftover Enter key.
	
    // The "Ghost Input" Trap (Mixing cin and getline)
    // This is the single biggest headache for beginners. If you use cin >> to read a number or a word, 
    // and then immediately try to use getline() right after, your getline() will seem to be skipped entirely.
    
    // The Fix
    // You just need to tell C++ to ignore that leftover newline character right after your first cin >> s11;.
    
	// Here is the corrected code:
    
    // FIX: Clear the leftover newline character out of the buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter complete sentence : "<<endl;
    getline(cin,s11,'\n');
    
    cout<<s11<<endl;
    
	return 0;
}