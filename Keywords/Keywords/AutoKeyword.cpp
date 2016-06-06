#include "ClassDeclarations.h"
#include <cstdint>

void AutoKeyword::autoExample(){
	//Auto specifier simple tells the compiler to determine the data type at compile time by its initializer
		//An initializer is the value that you initialize the variable with

	//Simple example
	//This can be very powerful and useful for longer named and more complex data types,
		//but it may not give you what you want and may not choose the best option
	auto num = 5;		//will choose int (64 bits) at compile time
	uint8_t num2 = 4;	//uint8_t is essentially an unsigned 8 bit integer - takes a fourth the memory an int does
	cout << "\tSize of num: " << sizeof(num) << endl;
	cout << "\tNum: " << num << endl;
	cout << "\tSize of num2: " << sizeof(num2) << endl;

	//Below won't work since the compiler will decide that the above is an int during compile time
	//printf("%s", num);

	//Also, the above is a simple example, but not the intended use for auto
	//One use is with iterators
	vector<int> vec1;
	vector<int>::iterator itr;

	//Using the Auto Keyword
	//A simpler way to do the same thing
	auto itr = vec.iterator;

	//With Pointers and References
		//Will automatically turn into a reference or pointer
		//You can explicitly force auto to be a pointer or reference type
	
	//Pointer
	auto* foo;
	//Reference
	auto& bar;

	//This isn't everything
		//For the rest, please see the Templates tutorial <- This will be a link
}