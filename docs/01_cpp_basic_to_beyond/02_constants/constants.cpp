#include<iostream>
using namespace std;

int main()
{
	
	// declared constants 
	
	const double pi{3.1415};
	
	const int months_in_year{12};
	
	// Now pi and months_in_year are read only we cannot change or overwrite their values.
	
	
	// declared constants must be initialized, others the compiler will throw an error 
	// const int dob;
	
	// don't use # define constants in modern c++
	
	cout<<"Pi: "<<pi<<endl;
	cout<<"Months in an year: "<<months_in_year<<endl;
	
	
	return 0;
}