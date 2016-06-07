#include "ClassDeclarations.h"
#include <vector>

//Typedef is a  keyword that does nothing but alias data types
	//It is used to clean up code and make it clear to other people reading it

//Example:
typedef vector<std::string>::iterator itr_str;
//Now instead of typing vector<std::string>::iterator each time you want to use the iterator of a vector of strings
	//just type itr_str

//Another example
typedef unsigned int hp;
//Here we typedef an unsigned int to make it more explicit what we are using it for
//The only issue here is that it is important to know whether it is an int, unsigned int, or float
	//This can be a problem if someone else has to use the code you made with this typedef

void TypedefKeyword::typedefExample(){
	vector<std::string> names = { "Sean", "Bob", "Joe" };

	//See how below I can just use itr_str as the data type of itr
	for (itr_str itr = names.begin(); itr < names.end(); itr++){
		cout << "\tName: " << *itr << endl;
	}

	//Just showing how you can just treat it like any other unsigned int
	hp seansLife = 100;
	cout << "\tSean's Life Before: " << seansLife << endl;
	seansLife -= 10;
	cout << "\tSean's Life After: " << seansLife << endl;
}

