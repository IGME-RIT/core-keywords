#include "ClassDeclarations.h"

//More information can be found at:
	//https://msdn.microsoft.com/en-us/library/5cb46ksf.aspx

//This is the basic syntax for a namespace
	//namespace name {}
//Paraphrasing MSDN slightly:
	//A namespace is a region that provides a scope to the identifiers inside of it
		//An identifier being the names of types, functions, variables, and more

//Here is an example below:
namespace Person{
	string name = "Bobby";

	class Body{
	public:
		void burp() {}
		void hit(Body otherBody) {}
	};

	void printName() { cout << "\t" << name << endl; }
}

/*The above shows several types of identifiers in a namespace
* Also, if you notice, they all have something to do with a Person
* People use namespaces to help organize their code
* It also provides a way to have several versions of an identifier that a differentiated based on there namespace
*	We could make a Plane name space with its own Body class and it's own hit function, but they would still be different
*/

namespace Plane{
	string name = "B-52 Bomber";

	class Body
	{
	public:
		void hit(Body otherBody){}
	};

	void printName() { cout << "\t" << name << endl; }
}

/*Notice how there are no errors thrown even though the there are two variables, two classes, and two functions with the same name
* This is due to scope
* The variables, functions, and classes are within the scope of their respective namespace
* Now you might already be familiar with how to use namespaces, but lets go over that now
*/

//The below are for examples later
//using namespace Person;
using namespace Plane;

//using Person::Body //show this

void NamespaceKeyword::namespaceExample(){
	//Now lets print the Person's name
	//How do we access the scope of Person?
	//One answer is with the scope resolution modifier

	Person::printName();	//This will print Bobby

	//The other way is to use the using Directive as show above (using namespace theName)
	//As you can see, we have the using Directive being used on the Plane namespace
	//How do we print the name of the Plane?
	//Since we have the using Directive setup for plane we can acutally just type printName()
	printName();	//This will print B-52 Bomber,
						//since the using Directive tells the program that it doesn't need the scope resolution operator
							//it will automatically look within the namespace for it

	/*now for fun, uncomment "using namespace Person;"
	* What happens?
	* It throws an error, since it is now looking in both namespaces for the printName function
	* This is known as polluting the namespace, which is why it is usually better to stay away from the using Directive
	* The using Directive does make it simplier to type code though, so as long as you aren't or won't pollute the namespace, you can use it
	*/
}