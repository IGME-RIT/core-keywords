#pragma once
#include <iostream>
#include <string>

using namespace std;

class ConstKeyword{
public:
	int cantBeChanged;
	mutable int canBeChanged;
			//declare a class const and give members that you want changeable, mutable
	void basicConstExamples();
	const int constParametersAndConstReturnExample(const int num);
	void constFunctionExample() const;
	void constObjectsExample();
};

class StaticKeyword{
public:
	static int number;
	static void staticMemberFunction();
	void staticVarInFunction();
};

class NamespaceKeyword{
public:
	void namespaceExample();
};

class AutoKeyword{
public:
	void autoExample();
};

class RegisterKeyword{
public:
	void registerExample();
};

extern std::string name;
class ExternKeyword{
public:
	void externExample();
};

class VolatileKeyword{
public:
	void volatileExample();
};

class UnionKeyword{
public:
	void unionExample();
};

class TypedefKeyword{
public:
	void typedefExample();
};