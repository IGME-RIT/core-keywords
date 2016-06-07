#include "ClassDeclarations.h"

//Used:
	//http://www.cplusplus.com/doc/tutorial/other_data_types/
	//https://msdn.microsoft.com/en-us/library/5dxy4b7b.aspx

//A union is a unique data type in c and C++
//It has syntax similar to that of a struct, but it is very different
	//1) The size of a union is equal to that of its biggest data member
	//2) Only one of the data members may be initialized at the same time
			//This is because the share the same memory location
				//This is why the location has to at least be big enough for the union's largest member

//A struct for demonstration purposes
	//Helps to demonstrate how a union's 
struct vec3{
	float x, y, z;
};

//A union
union udata{
	float fnum;
	int inum;
	vec3 vec;
};

//Below syntax creates a variable of data type unnamed struct
/*union{
	float fnum;
	int inum;
	vec3 vec;
} idata;*/

//A struct that has the same structure as the union udata for demostration purposes
struct sdata{
	float fnum;
	int inum;
	vec3 vec;
};

//A common way to deal with the problem of which data member is initialized
	//Have an enum and place a variable of enum and a variable of the union together in a struct
		//This way you have a data type that has the ability to be multiple types and has knows which one it currently is
	//Have a question about enums:
		//https://github.com/IGME-RIT/core-structsEnumsAndMemory-tutorial
enum DataType { FloatingPoint, Integer, Vector };
struct data{
	DataType type;
	udata unionData;
};

//An anonymous union to demostrate this concept
struct anonymousUnion{
	union{
		float fnum;
		int inum;
	};
};

void UnionKeyword::unionExample(){
	//Shows how the union takes the size of its biggest member
	cout << "\tSize of udata: " << sizeof(udata) << endl;
	cout << "\tSize of vec3: " << sizeof(vec3) << endl;
	//Shows the size of a struct that with the same members
	cout << "\tSize of sdata: " << sizeof(sdata) << endl;

	//the compiler will automatically set the fnum, since it is clearly a float
	udata unionData = { 3.2f };

	//Showing that the fnum and inum can't be initialized at the same time
	cout << "\tunionData's fnum: " << unionData.fnum << endl;
	cout << "\tunionData's inum: " << unionData.inum << endl;

	//explicitly saying to set the vec struct
	//Shows how to set a member of a struct
	unionData.inum = 3;

	cout << "\tunionData's fnum: " << unionData.fnum << endl;
	cout << "\tunionData's inum: " << unionData.inum << endl;

	//How do we know which data is inside of it
		//put it in a struct with an enum
	data d = {
		DataType::FloatingPoint,
		{3.2}
	};
	
	//This shows how we would access the fnum from the union
	d.unionData.fnum;

	anonymousUnion au = { { 3.2f } };
	//This shows how we would access the fnum from the anonymous union
	au.fnum;
	//but fnum and inum still inhabit the same place in memory

	//Showing that the fnum and inum can't be initialized at the same time
	cout << "\tau's fnum: " << au.fnum << endl;
	cout << "\tau's inum: " << au.inum << endl;

	au.inum = 3;

	cout << "\tau's fnum: " << au.fnum << endl;
	cout << "\tau's inum: " << au.inum << endl;
}