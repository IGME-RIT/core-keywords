#include "ClassDeclarations.h"

//http://www.cprogramming.com/tutorial/statickeyword.html
//http://stackoverflow.com/questions/572547/what-does-static-mean-in-a-c-program

/*There are three uses of the static keyword.
* These uses can be a little confusing as they have little to do with the definition of the word static.
*	1)A static variable declared and initialized within a function will retain its value
*	2)A static member of a class will be the same across all instances of the class and does not need an instance of the class
*	3)A static variable or function in the global scope of a file can't be seen by any other file 
*/



//The definition of the hidden function
void hiddenFunction(){ printf("\tNin-Nin\n"); };

//Creation of the StaticKeyword class's static variable
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