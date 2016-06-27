#include "ClassDeclarations.h"

//Used:
	//http://stackoverflow.com/questions/10422034/when-to-use-extern-in-c
	//http://www.cplusplus.com/forum/general/21368/

//Extern is a keyword that literally says "This variable will be declared and defined later"
//Extern tells the compiler that the variable will eventually be created
	//This allows me to put it in the header and then declare and define it inside another file
		//and still use it in any file that includes the header

//The Extern keyword is one of four storage classes in c++
	//static, extern, register, auto

//Look in ClassDeclarations.h next to the ExternKeyword class you will see extern std::string name;
	//This is the extern variable we will be using to show off the extern keyword

//As we said before, we have to declare it again, since we told the compiler just enough to not throw a fit
	//But you have to be careful. The definition of an extern variable needs to have external linkage
		//external linkage means it is declared outside of a function and without the static keyword
std::string name;

void ExternKeyword::externExample(){
	//Here is where we define it
	name = "Sean";
	//Now that it is defined, check out main and see how we call name
	//That's it
}