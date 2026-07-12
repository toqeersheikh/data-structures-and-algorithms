#include<iostream>
#include<vector>
using namespace std;


int main()
{
	// do while loop:
	
	// do
	// {  
	//  statements;	
	  
	// } while (expression)
	
	// display menu example 
	
	
	
	char selection{};
	
	do 
	{
		cout<<"Menu Options "<<endl;
		
		cout<<"1. DO this."<<endl;
		cout<<"2. DO that."<<endl;
		cout<<"3. DO something else."<<endl;
		cout<<"Q. Quit!"<<endl;
		
		cout<<"Enter your Selection: "<<endl;
		cin>>selection;
		
		if(selection=='1')
		{
			cout<<"You chose DO this."<<endl;
		}else if(selection=='2')
		{
			cout<<"You chose DO that."<<endl;
		}else if(selection=='3')
		{
			cout<<"You chose Do something else."<<endl;
		}else if(selection=='q' || selection=='Q')
		{
			cout<<"GoodBye!"<<endl;
		}else
		{
			cout<<"Unknown option... Try Again!"<<endl;
		}
	
	}while(selection != 'q' && selection!='Q' );
	
	
	return 0;
}