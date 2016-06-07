#include "ClassDeclarations.h"

//I used this site quite a bit for this tutorial: https://msdn.microsoft.com/en-us/library/07x6b05d.aspx
//I also used: https://msdn.microsoft.com/en-us/library/4h2h0ktk.aspx

//The keyword merely states that the object or variable is not modifiable.

//Several Uses
	//1) const variables
	//2) pointers with constant data
	//3) const pointers
	//4) const arrays
	//5) const parameters
	//6) const return types
	//7) const functions
	//8) const objects

//Also, shares a close relation with the mutable keyword

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
	canBeChanged = num + 2;
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
		//Uncommment it below and see what happens
	//cantBeChanged = 5;

	//Uncomment and try to use this function
		//it won't work, since the function isn't const
	//constParametersAndConstReturnExample(5);

	//Mutable
	//Definition from MSDN:
		//This keyword can only be applied to non-static and non-const data members of a class.	//data member - variable in a class
		//If a data member is declared mutable, then it is legal to assign a value to this data member from a const member function.
	//Pretty simple concept and use
	cout << "\tcanBeChanged Before Increment: " << canBeChanged << endl;
	canBeChanged++;
	cout <<  "\tcanBeChanged After Increment: " << canBeChanged << endl;
}

struct nums1{
	int n1, n2;
};

struct nums2{
	int n1;
	mutable int n2;
};

//Use 8 (const objects)
void ConstKeyword::constObjectsExample(){
	const nums1 n1 = { 0, 1 };
	//can't edit any of the struct's data members
	//n1.n1++;	//uncomment and try

	const nums2 n2 = { 0, 1 };
	cout << "\tn2 Before: " << n2.n2 << endl;
	//can't edit n1, but you can edit n2
	//n2.n1++;	//uncomment and try
	n2.n2++;
	cout << "\tn2 After: " << n2.n2 << endl;
}