#include<iostream>
using namespace std;

int main()
{
	
	// Arrays:
	
	
	// ==========
	
	// Declaring Arrays:
	
	
	//int test_score[5];
	
	// ==========
	
	
	// Initialization Sytax:
	
    
    
    int test_score [5] {100,95,89,77,55};
    
    int arr[5]{0};
    
	// All elements are initialized to zero 
    
    for(int i=0;i<5;i++)
    {
       // cout<<arr[i]<<endl;
	}
	
	// As expected
	
	// ==========
	
	// Automatically Size Calculation
    
	int rates[] {150,450,380 };
	
	for(int i=0; i<3;i++)
	{
		cout<< rates[i]<<endl;
	}

   // ==========
   
   // Accessing Array Element 
   
   // array_name[element_index];
	
   // example: test_score[index]
  
   
   // And syntax for storing values in arrays is just same 
   
   // ==========
   
  
  // so basically we do de-referencing   
    
    
    int ages[]{18,20,44,33};
    
	cout<< ages[0]<<endl; // value at index 0 : 18 
	
	cout<<"Base address: "<<endl;
	
	cout<< ages<<endl; // base address  : or address of first element , ages[0] 
	
	cout<< &ages[0]<<endl; // does the same job as above 
	
	// And if array name is a pointer to first element in array we can do:
	
	cout<<"Value using de-reference operator: "<<endl;
	
	cout<<*ages<<endl; // 
	
	// lets use some pointer arithmetic 
	
	// keep in mind that array name is a pointer to 1st integer in array 
	
	cout<< *(ages+1)<<endl; // 20 
	
	// So adding 1 to a integer pointer mean adding size of one int to pointer 
	
	cout<< *(ages+2)<<endl;
	cout<< *(ages+3)<<endl;

	
	cout<<"Values using Subscript operator: "<<endl;
	
	cout<<ages[0]<<endl;
	cout<<ages[1]<<endl;
	cout<<ages[2]<<endl;
	cout<<ages[3]<<endl;
	
	// So: 
	
	// ages[i] == *(ages+i)
	
	cout<<"ages[i] == *(ages+i)"<<endl;
	
	for(int i=0;i<4;i++)
	{
		cout<< *(ages+i)<<endl;
	}
	
	// Pointer Arithmetic: address+ (index*sizeOFtype) is handled automatically by the compiler 
	
	// =======
	

	
	// There is no bounds checking in the arrays 
	
	// It means the language runtime doesn't verify whether your index is withing th evalid range of the array 
	// before accessing memory 
	
	
	// For example 
	
	cout<< "Size of array is: "<<sizeof(ages)/4<<endl; //4
	
	// means valid indexes are 0 to 4 
	
	// but if we do ages[5] thats out of bounds 
	
	
	// cout<<"ages[5] : "<<ages[5]<<endl;
	
	// the result is unpextected and we have no idea where it is coming from 
	

	

	
	// 2D Arrays:
	
	
    // Example:
  
  int movie_ratings [3][4] {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	
	return 0;
}
