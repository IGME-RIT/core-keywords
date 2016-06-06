#include "ClassDeclarations.h"

//I used this site quite a bit for this tutorial: https://msdn.microsoft.com/en-us/library/07x6b05d.aspx

//The keyword merely states that the object or variable is not modifiable.

//Several Uses
	//1) const variables
	//2) pointers with constant data
	//3) const pointers
	//4) const arrays
	//5) const parameters
	//6) const return types
	//7) const functions

//Note: In most cases const makes the thing to the left of it constant example
		//int const num3 = 5;
	//But, in a few cases it can make what is to the right of it constant

void ConstKeyword::basicConstExamples(){
	//Use 1 (const variables) 
	int const constantNumber = 5;	//Also can be written as const int constantNumber;
	//The below will fail since you can't assign a value to a constant number
	//constantNumber = 3;	//uncomment and see for your self if it works.
	//This use is very similar to preprocessor directives
	

	int num = 4;
	int num2 = 3;
	//Use 2 (pointers with constant data)
	//This marks the value stored in the memory location as constant
		//Note: this doesn't make the actual memory const itself,
			//but whenever accessed by the pointer it will be treated const
		//Also notice how I put const to the left of everything,
			//this is an example of when const modifies whatever is to the right of it
	const int* pointerWithConstantValue = &num;

	cout << "\tOld Memory Location: " << pointerWithConstantValue << endl;

	//The below will not work, since you are trying to edit the value stored at the memory location
	//*pointerWithConstantValue = constantNumber;

	//The below will work, since you are changing the pointer and not the value at the memory location
	pointerWithConstantValue = &constantNumber;

	cout << "\tNew Memory Location: "  << pointerWithConstantValue << endl;


	//Use 3 (const pointers)
	int* const constantPointer = &num;

	//The below will not work since the pointer itself is constant
	//constantPointer = &num2;

	//The below will work since the value stored at the memory address is being changed and not the memory address itself
	*constantPointer = 9;

	//Use 4 (const arrays)
	//This is simply an array whoses values can't be changed
	int const constantArray[3] = { 1, 2, 3 };
	//This is another time when you can put const to the left of something
		//Example: const int constantArray[] = { 5, 6, 7 }; acts the exact same as the above example
	
	//The below will not work, since you can't change what is in constantArray
	//constantArray[2] = 1;
}

//Use 5 and Use 6 (const parameters and const return types)
const int ConstKeyword::constParametersAndConstReturnExample(const int num){
	//A const parameter is similar to every other parameter, except it is const
		//This means that it is unmodifiable and that when using the function it requires a const passed in or else it won't work

	cantBeChanged = num;
	cout << "\t" << num << endl;
	cantBeChanged++;

	//This is the return, it will just be another const variable,
		//since we specified that return type to be a const int: const int function();
	return 0;
}

//Use 7 (const functions)
void ConstKeyword::constFunctionExample() const{
	//A const function can't modify the object for which it is called
		//This means it can't change any non-static members or call any member functions that aren't constant

	
	//Shows that I can access this
	cout << "\t" << cantBeChanged << endl;
	//But I can't edit it
	//cantBeChanged = 5;

	//Uncomment and try to use this function
		//it won't work, since the function isn't const
	//constParametersAndConstReturnExample(5);
}