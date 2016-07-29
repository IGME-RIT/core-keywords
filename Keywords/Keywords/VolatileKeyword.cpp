#include "ClassDeclarations.h"

//Used:
	//http://stackoverflow.com/questions/4437527/why-do-we-use-volatile-keyword-in-c
	//http://www.barrgroup.com/Embedded-Systems/How-To/C-Volatile-Keyword

//Volatile is a suggestion to the compiler to not optimize certain parts of code
//This is important for Embedded Systems

void VolatileKeyword::volatileExample(){
	int check = 25;

	//Now the below while loop will always be true as far as we know
	//so the compiler will optimize it
	while (check == 25){
		//s
	}
	//The optimization will change the all the above code to:
	/*while (true){
		//s
	}*/
	//This optimizes away check and changes check == 25 to true
	//Now what happens if another program or hardware was to have access to and want to change check
	//It couldn't since the compiler optimized it away
	//Also, the loop would go on continuously

	//so instead
	volatile int check2 = 25;
	while (check2 == 25){
		//s
	}
	//volatile will make sure that the compiler doesn't optimize away check2 and all things dealing with it will remain the same

	//This also had some uses in multithreading, but volatile will usually be found in older code
		//This comes up with dealing the CPU and compiler memory reordering which will be covered in later multithreading examples
		//To get started learning multithreading:
			//https://github.com/IGME-RIT/core-multithreading
}