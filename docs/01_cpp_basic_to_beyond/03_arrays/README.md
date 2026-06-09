# Arrays Fundamentals in C++

## Array Basics

Array is a compound data type (A datatype that is made up of other datatypes)

So it's a collection of elements and all elements are of same type

Each element can be accessed directly

Fixed in size

Stored contiguously in memory mean memory will be allocated as one chunk

---

## Declaring Arrays

Syntax:

elementType  arrName [constantNumberOfElements/sizeOfArray]

```cpp
//int test_score[5];
```

---

## Initialization Syntax

elementType array_name [number of elements] {init list}

```cpp
int test_score [5] {100,95,89,77,55};

int arr[5]{0};

// All elements are initialized to zero 
for(int i=0;i<5;i++)
{
   // cout<<arr[i]<<endl;
}

// As expected
```

---

## Automatically Size Calculation

```cpp
int rates[] {150,450,380 };

for(int i=0; i<3;i++)
{
    cout<< rates[i]<<endl;
}
```

---

## Accessing Array Element

array_name[element_index];

example: test_score[index]

This is called array subscripting

[] is a subscript operator

Array subscripting or indexing starts at zero

And syntax for storing values in arrays is just same

---

## How does it work?

the name of the array represent the location of first element in the array : arr[0]

When we access an array element using the subscript operator [] and provide an index in the []

The compiler knows that you want the element that is that offset from the beginning of the array

Offset:

Generally means a shift or displacement from a reference point

Basically how far something is moved from where it originally was

So

arr[2] tells the compiler move two elements forward from the base (index 0)

under the Hood:

Compiler does:

address = baseAdress + (index* sizeOfElement)

so int arr[2] means: arr[0] + (2 *4), if base address is 1000 then : arr[2] = 1008 , as size of int = 4 bytes

So offset = 2 elements

arr[1] = 1000+ (1*4) => 1004

arr[0] = 1000 + (0*4) => 1000

The compiler doesn't think in index positions
it thinks in memory address + offsets

---

## The reason Array indexing starts from 0?

Because again arrays are defined as:

baseAddress + offset

So

address of any element in array = baseAddress + (index*sizeofElement);

So offset = index * sizeofElement

But if we chose to start from 1 the formula would become:

baseAddress + (1*4) , so if baseAddress = 1000 then 1000 + 1*4 is 1004 and its an address of element at index 1

which is 2nd element so this formula would be wrong to access first element in array as it would skip that

So the formula must be like this to make this work if indexing starts from 1 :

address of any element = baseAddress + (i-1)*sizeofElement

so in this case offset = baseAddress + (i-1) *sizeOfElement

so if indexing starts from 1 the first element would be arr[1]

and for arr[1] it will be = 1000 + (1-1) *4 = 1000

for arr[2] the 2nd element = 1000 + (2-1) *4 = 1004

So the issue is every access needs an extra step : the subtraction

it is inefficient + unnecessary

The language designers could absolutely do it:

arr[1] as first element

just with internally doing (i-1)

Some languages like MATLAB use 1 based indexing

So 0 based indexing is a design choice optimized for offset arithmetic not a strict limitation of memory

---

## Mental Model

Arrays are contiguous memory blocks.

The array name gives base address

Indexing is implemented as an offset from that base (how far from the start)

Starting from 0 makes the index equal to the offset, eliminating the extra computation

Intuition:

Memory -> continuous strip

array_name : pointer to start

i : how far from the start

arr[i] : go i steps forward and read

indexing is pure offset MATH nothing magical

for example : ages[3]

ages and 3 are operands, [] is a subscript operator

so basically we do de-referencing

---

## Pointer and Array Relationship

```cpp
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
```

---

## Index Meaning (General Concept)

So in any programming language:

index means:

how far any element is laying from the first element

So all the compiler has to do is pretty simple calculation

element at index 2 means two integers away from the beginning of array

the compiler uses sizeof operator to determine where the element would be

---

## No Bounds Checking in C/C++

In C/C++ :

There is no bounds checking in the arrays

It means the language runtime doesn't verify whether your index is withing th evalid range of the array
before accessing memory

For example

```cpp
cout<< "Size of array is: "<<sizeof(ages)/4<<endl; //4
```

means valid indexes are 0 to 4

but if we do ages[5] thats out of bounds

```cpp
// cout<<"ages[5] : "<<ages[5]<<endl;
```

the result is unpextected and we have no idea where it is coming from

it can be a garbage value or our program may crash (segmentation fault)

the compiler still translates it

no check is added to ensure i<5

it just computes the address and reads memory there

and that memory might belong to another program or may  be a protected memory , so this is not safe to do

This is a source of Silent Bugs

C++ trusts the programmer it gives you raw memory access without bounds check

But it is unsafe if you are careless

In languages like JAVA PYTHON  you will get Index Error in such case

Because they perform bounds checking at runtime

---

## Multi Dimensional Arrays

language supports n-dimensional arrays

2D Arrays:

Syntax:

elementType array_name [row_size][column_size]

Example:

```cpp
int movie_ratings [3][4] {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
```
