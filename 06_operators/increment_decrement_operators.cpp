#include<iostream>
using namespace std;

int main()
{
	// ++ Increment Operator:
	
	// Increment it's operand by 1 
	
	// -- Decrement Operator: 
	
	// Decrement it's operand by 1 
	
	// Can be Used with Integers, floating Point Types and Pointers 
	
	// Dont over use this pointer 
	
	// Used with pointers to move pointers along 
	
	// Two Varients:
	
	// Prefix : ++num;
	
	// Postfix : num++;
	
	int counter{10};
	
	int result {0};
	
	cout<<"Initial Values: "<<endl;
	
	cout<<"Counter: "<<counter<<endl;
	cout<<"Result: "<<result<<endl;
	
	cout<<"Lets start modifying! "<<endl;
	
	result+=counter;
	
	cout<<"result = result + counter => "<<result<<endl;
	
	cout<<"Counter is yet: "<<counter<<endl;
	
	counter++;
	
	cout<<"counter++ = "<<counter<<endl;
	
	++counter;
	
	cout<<"++counter = "<<counter<<endl;
	
	// So both increment by 1 but the difference is when do they increment, after returning its value or before 
	
	// Let see:
	
	cout<<endl<<endl;
	
	cout<<"Lets reset result: "<<endl;
	
	cout<<endl<<endl;
	
	result =0;
	
	cout<<"Result: "<<result<<" Counter:"<<counter<<endl;
	
	// Pre Increment: Increment first and then return its value 
	
	result= ++counter;
	
	// ++counter means increment by 1 and then assign it to result and now  
	
	cout<<"Pre-Increment ++counter : Result is: "<<result<<" And counter is: "<<counter<<endl;
	
	// Post increment: Return first and then increment 
	
	result= counter++;
	
	// counter++ means assign its current value to result and then later on increment it by 1 and now
	
	cout<<"Post-Increment counter++ : Result is: "<<result<<" And counter is: "<<counter<<endl;
	
	
	return 0;
}