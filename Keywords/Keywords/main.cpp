/*
Keywords
(c) 2016
original authors: Sean Connolly
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*	This tutorial deals with various important keywords in C/C++.
*
*	
*
*/

//put mutable in const

/*
List O' Keywords
*	const		x
*	static		x
*	mutable
*	namespace	x
*	auto		?
*	union
*	typedef
*	register
*	volatile
*	extern
*/

#include "ClassDeclarations.h"

int main(){
#pragma region Static Examples
	cout << "Static Examples:" << endl;
	printf("\tStatic Variable without an Instance of the StaticKeyword Class: %d\n", StaticKeyword::number);

	StaticKeyword staticExample;

	//The hidden function that can't be seen by other files
	//hiddenFunc();

	cout << "\t";

	//The loop showing the use of a static variable in a function
	for (int i = 0; i < 10; i++){
		staticExample.staticVarInFunction();
	}
	cout << endl;
	cout << endl;
#pragma endregion


#pragma region Const Examples
	cout << "Const Examples:" << endl;
	ConstKeyword constExample;
	constExample.basicConstExamples();
	constExample.constParametersAndConstReturnExample(5);
	constExample.constFunctionExample();
	cout << endl;
	cout << endl;
#pragma endregion

#pragma region Namespace Examples
	cout << "Namespace Examples:" << endl;
	NamespaceKeyword namespaceExample;
	namespaceExample.namespaceExample();
	cout << endl;
	cout << endl;
#pragma endregion

#pragma region Auto Examples
	cout << "Auto Examples:" << endl;
	AutoKeyword autoExample;
	autoExample.autoExample();
#pragma endregion
	
	getchar();
	return 0;
}