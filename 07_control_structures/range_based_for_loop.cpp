#include<iostream>
#include<vector>
using namespace std;

int main()
{
	// The idea is: 
	
	// To loop through a collection of ellements and be able to easily access each element 
	// Without having to worry about:
	// The length of collection 
	// The increment and decrement 
	// The Subscripting indexes 
	
	// Syntax:
	
	// for(var_type var_name : sequence)
			// Statement: we can use var_name here 
	
	// Example:
	
	int scores[]{100,90,97};
	
	for(int score: scores)
	{
		cout<<score<<" ";
	}
	
	cout<<endl;
	
	// and we actually dont have to provide the type of variable 
	// instead we can use auto keyword 
	// auto tells the compiler to deduce the type itself
	
	
	for (auto score:scores)
	{
		cout<<score<<" - ";
	}
	
	cout<<endl;
	
	
	// Looping vectors:
	
	vector<double>temps {87.2, 77.1, 80.0,55.4};
	
	double average_temp{};
	double running_sum{};
	
	for (auto temp:temps)
	{
	  running_sum+=temp;
    }
	
	cout<<running_sum<<endl;
	
	average_temp=(running_sum/temps.size());
	
	cout<<average_temp<<endl;
	
	
	// range based for loop can also use use an initializer list as collection 
	
	for(auto goal :{7,8,5,9})
	{
		cout<<goal<<endl;
	}
	
	
	// String Iteration:
	
	for (auto c: "Frank")
	    cout<<c<<" ";
	
	cout<<endl;
	
	return 0;
}