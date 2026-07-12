#include<iostream>
#include<vector>
using namespace std;


int main()
{
	// While Loop:
	
	// Test is done at the beginning of a loop 
	
	// So if tests fails immediately the loop will never execute.
	
	// while(expression)
	//  		statement;
	
	
	int i{1};
	
	while(i<=5)
	{
		cout<<i<<endl;
		i++;
	}
	
	// Array Looping 
	
	int scores[]{100,90,87};
	
	int j {0};
	
	while(j<3)
	{
		cout<<scores[j]<<" ";
		j++;
	}
	
	cout<<endl;
	cout<<"Input Validation"<<endl;
	
	// Input Validation
	
	// Boolean flag:
	
	int number{0};
	
	bool done{false};
	
	while(!done)
	{
		
		cout<<"Enter a number between 1 and 5: ";
		
		cin>>number;
		
		if(number<=1||number>=5)
		{
			cout<<"Out of Range!"<<endl;
		}else{
			cout<<"Thanks"<<endl;
			done=true;
		}
	}
	
	return 0;
}