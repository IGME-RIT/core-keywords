#include "ClassDeclarations.h"
#include <cstdint>
#include <vector>

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
	vector<int> vec;
	vector<int>::iterator itr1 = vec.begin();

	//Using the Auto Keyword
	//A simpler way to do the same thing
	auto itr2 = vec.begin();

	//With Pointers and References
		//Will automatically turn into a reference
			//Examples:
				//Pointer:		auto foor = &num;
		//You can explicitly force auto to be a pointer or reference type
	
	//Pointer
	auto* foo = &num;
	//Reference
	auto& bar = num2;
	//I cast bar to an int, since there is apperently an issue with cout trying to uderstand uint8_t
	cout << "\tBar's Value Before Num2 Updated: " << (int)bar << endl;
	num2++;
	cout << "\tBar's Value After Num2 Updated: " << (int)bar << endl;
	//This isn't everything
		//For the rest, please see the Templates tutorial <- This will be a link
}