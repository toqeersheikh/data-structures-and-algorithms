#include<iostream>
#include<vestor>

using namespace std;

int main()
{
	// Looping | Iteration
	
	// It is the third basic building block of programming 
	
	// allows the execution of a statement or a block of statements repeatedly 
	
	// for loop:
	
	// for (int i=0; i<4;i++) cout<<i<<endl;
	
	
	// Writing a loop using initialization style 
	
	// for (int i{1}; i<=5;i++)
	// {
	//	cout<<i<<" ";
	// }
	
	// Looping an array 
	
	// int scores[]{90,88,89};
	
	// for (int i{0};i<3;i++)
	// {
	//	cout<<scores[i]<<" ";
	// }
	
	// Comma Operator in for loop
	
	// allows you to seperate expressions with comma and both expressions will execute 
	
	// for (int i{1}, j{5}; i<=5; i++,j++)
	// {	
    //   cout<<i<<" * "<<j<<" = "<<i*j<<endl;
    //   i++,j++;
	// }
	
	// cool 
	
	// All expressions in the for loop are optional 
	// it is possible to have 
	
	// no initialization 
	// no test 
	// no increment 
	
	// for(;;)
    //		cout<<"Endless loop";
	
	// Looping a vector 
	
	vector<int> nums{2,4,6,9};
	for (int i {0}; i<4;i++ )
	{
		cout<<nums[i]<<endl;
		
	}
	return 0;
}
