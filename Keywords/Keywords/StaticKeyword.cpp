#include "ClassDeclarations.h"

//http://www.cprogramming.com/tutorial/statickeyword.html
//http://stackoverflow.com/questions/572547/what-does-static-mean-in-a-c-program

/*There are three uses of the static keyword.
* These uses can be a little confusing as they have little to do with the definition of the word static.
*	1)A static variable declared and initialized within a function will retain its value
*	2)A static member of a class will be the same across all instances of the class and does not need an instance of the class
*	3)A static variable or function in the global scope of a file can't be seen by any other file 
*/


//The Static keyword is one of four storage classes in c++
	//static, extern, register, auto


//The definition of the hidden function
	//Since it's static you can have several functions in different files that all have the same name
	//since static says in this case that no other file can see this function 
		//same with variables
		//Example of use 3)
	//Can't use this in any other files, since it was only declared in the file
static void hiddenFunction(){ printf("\tNin-Nin\n"); };
//void hiddenFunction(){ printf("\tNin-Nin\n"); };

//If you want comment out the static definition and uncomment the non static definition of hiddenFunction(),
	//then recompile and see the output
	//there is an error, since we have a function with the same name in main.cpp

//Example of use 3) with a variable
static int num = 0;

//Creation of the StaticKeyword class's static variable
	//Example of Use 2)
int StaticKeyword::number = 4;

//Retains it's value
	//Once the variable has been initialized it remains in memory until the end of the program
	//static prevents count from re-initializing
void StaticKeyword::staticVarInFunction() {
	//This will show the number of times this function has been called.
	static int count = 1;	//The variable that will remain in memory

	cout << count << " ";

	count++;
}

void StaticKeyword::staticMemberFunction()
{
	//A simple function that does nothing more than print this statement
	//The real important point is made in main.cpp.
	//Look at how the function is called even before an instance of the class has been created.
	printf("\tHey! Yo!\n");
}