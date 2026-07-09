#include<iostream>
using namespace std;

int main()
{
	// Testing Equality 
	
	// == operator 
	
	// != operator 
	
	// Compare the values of two expressions 
	
	// Evaluates to a true or false : A boolean value 
	
	// commonly used in control flow statements 
	
	bool result{false};
	
	int num1{10};
	int num2{20};
	
	result= (num1==num2);
	
	cout<<"num1 == num2 : "<<result<<endl;
	
	result =(num1!=num2);
	
	cout<<"num1 != num2 : "<<result<<endl;
	
	// 1 mean True
	// 0 mean False 
	
	// if we want to display True Or False Rather than 1 or 0 
	// We can do that using boolalpha flag
	
	cout<<boolalpha;
	
	cout<<result<<endl;
	cout<<(!result)<<endl;
	
	// Cool 
	
	// And again to display 0 or 1 back:
	
	cout<<noboolalpha;
	
	cout<<result<<endl;
	cout<<(!result)<<endl;
	
	cout<<boolalpha;
	
	bool isTrue= (12.0== 11.99999999999999999999); // True
	
	cout<<isTrue<<endl;
	
	// For C++ it is true for us it is not 
	// Because computers store approximation 
	
	cout<<(10==10.0 || true)<<endl; // This is Mix Mode Expression : True
	
	cout<<(10==9.99999999)<<endl; // False
	cout<<(10==9.99999999999999999999999999)<<endl; // True
	
	
	return 0;
}