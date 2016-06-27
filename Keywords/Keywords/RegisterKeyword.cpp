#include "ClassDeclarations.h"

//Register is nothing more than a suggestion to the compiler to keep the variable in a processor register instead of in RAM
	//A register is the fastest form of memory.
	//It is on the CPU and it is where the Processor stores data that it is currently using.
	//The Register keyword is one of four storage classes in c++
		//static, extern, register, auto
//Some compilers already pick and choose variables to keep in register
//Thus, Some compilers will completely ignore the register keyword
	//Visual Studio ignores this keyword

//Why are we doing this then?
//So, you have the knowledge of what this is when you see it

void RegisterKeyword::registerExample(){
	//Syntax
	register int i = 0;

	//Uses
		//It was used for variables that would be used frequently.
		//One example are for iterator variables.
			//Instead of creating a new int each time you use a for loop
			//Create a single variable that will be stored in memory and used over and over again
	for (; i < 10; i++){
		//nothing happening, just proving a point
	}

	for (i = 0; i < 100; i++){
		//instead of creating i each time, we just reset its value
	}

	//Above was to show an example where it might be nice to keep i in a register and just reuse it several times.
	//The one thing about variables in registers is that they don't have memory locations
	//A register does not have a memory location associated with it
		//In C, this means that you can't have a pointer to or otherwise access a variable with the register keyword
		//In C++, you can grab the memory location, but doing so tells the compiler to ignore the register keyword
			//This is because the compiler will put the variable in RAM, so that it has a memory address

	//Overall, this is important to understand for legacy code, but otherwise it isn't important
}