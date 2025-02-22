#include <iostream>
using namespace std;

int main(){

// CHARACTER ARRAY

    // This string here, "Hello World" is expanded into a constant character array, and the pointer msg points to the first character of that array.
    const char* msg {"Hello World!"};   // This is a special property, ONLY of the character pointer.
    cout << "*msg: " << *msg << endl;

    // If you want to modify the string, it is NOT recommended to use pointers, but rather normal array initialization can be used.
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    cout << "message1 : " << message1 << endl;

    printf("%d", printf("Hello"));

    // NOTE: Do NOT store value at a ptr without initializing it, i.e., before assigning an address to a pointer, if you try to modify the value at the pointer (which currently has junk address), it will lead to BAD behaviour.
    // The same is also true for a pointer initialized with nullptr.

    /* REFERENCING AND DEREFRENCING
        REFRENCING: Referencing in C++ means obtaining the memory address of a variable using the address-of (&) operator.
        DEREFRENCING: Dereferencing means accessing the value stored at the memory address a pointer holds, using the dereference operator (*).
    */

    
// DYNAMIC MEMORY ALLOCATION - Memory is stored in Heap (instad of stack) at runtime.
    
    /* HEAP vs STACK - Memory allocation
        In heap, the developer is in full control of the memory allocation and it's release. The lifetime is controlled using the new and delete operators.
        On the other hand, in stack, the developer is NOT in full control of memory allocation and release. Here, the lifetime is controlled by the scope mechanism.
    */

    // How we've used pointers so far
	int number{22};     // Stack
	int* p_number = &number;
	
	cout << endl;
	cout << "Declaring pointer and assigning address: " << endl;
	cout << "number: " << number << endl;
	cout << "p_number: " << p_number << endl;
	cout << "&number: " << &number << endl;
	cout << "*p_number: " << *p_number <<  endl;
    cout << endl;
	
	int* p_number1;         // Uninitialized pointer , contains junk address
	int number1{12};
	p_number1 = &number1;   // Make it point to a valid address
	cout << endl;
	cout << "*p_number1: " << *p_number1 << endl;
    

    // BAD
	// Writing into uninitialized pointer through dereference
    
	int *p_number2; // Contains junk address - could be anything
    cout << "Writting in the 55" << endl;
	*p_number2 = 55; // Writing into junk address : BAD!
	cout << endl;
	cout << "Writing into uninitialized pointer through dereference" << endl;
	cout << "p_number2 : " << p_number2 << endl; // Reading from junk address.
    cout << "Dereferencing bad memory" << endl;
	cout << "*p_number2 : " << *p_number2 << endl;
    
	
	
	//Initializing pointer to null
    /*
	//int *p_number3{nullptr}; // Also works
	int * p_number3 {}; // Initialized with pointer equivalent of zero : nullptr - A pointer pointing nowhere
    cout << "Writting into nullptr memory" << endl;
	//*p_number3 = 33; // Writting into a pointer pointing nowhere : BAD, CRASH
    cout << "Done writting" << endl;
	
	cout << endl;
	cout << "Reading and writting through nullptr : " << endl;
	//cout << "p_number3 : " << p_number3 << endl;
	//cout << "*p_number3 : " << *p_number3 << endl;// Reading from nullptr
															// BAD, CRASH.
                                                            */


    //Dynamic heap memory
    int* p_number4 = new int;    // Dynamically allocate space for a single int on the heap
    /*
    As soon as this statement is executed, the OS immediately allocates a piece of memory in heap.
    The size of the allocated memory will be such that it can store the type pointed to by the pointer.
    This memory belongs to our program from now on. The system can't use it for anything else, untill we return it back.
    After this line executes, we will have a valid memory location allocated. 
    */
							
	*p_number4 = 77;        // Writting into dynamically allocated memory
	cout << endl;
	cout << "Dynamically allocating memory: " << endl;
	cout << "*p_number4: " << *p_number4 << endl;

    //Return memory to the OS
    delete p_number4;
    p_number4 = nullptr;    // This is done so that other people know that you do not have any valid data in that memory. Also, if you use a deleted memory location, unexpected behavior may happen, as seen in the case of using an unitialized piece of memory.
    

    //It is also possible to initialize the pointer with a valid address up on declaration. Not with a nullptr
    int* p_number5{new int};        // Memory location contains junk value
    int* p_number6{new int(22)};    // use direct initialization
    int* p_number7{new int{23}};    // use uniform initialization
    
    cout << endl;
    cout << "Initialize with valid memory address at declaration : " << endl;
    cout << "p_number5 : " << p_number5 << endl;
    cout << "*p_number5 : " << *p_number5 << endl; // Junk value
    
    cout << "p_number6 : " << p_number6 << endl;
    cout << "*p_number6 : " << *p_number6 << endl;
    
    cout << "p_number7 : " << p_number7 << endl;
    cout << "*p_number7 : " << *p_number7 << endl;
    
    // Remember to release the memory and reset the pointer
    delete p_number5;
    p_number5 = nullptr;
    
    delete p_number6;
    p_number6 = nullptr;
    
    delete p_number7;
    p_number7 = nullptr;


    //Can reuse pointers
    p_number5 = new int(81);
    cout << "*p_number : " << *p_number5 << endl;


    delete p_number5;
    p_number5 = nullptr;

    // Calling delete twice on a pointer: BAD!
    p_number5 = new int(99);
    cout << "*p_number5 : " << *p_number5 << endl;

    delete p_number5;
    // delete p_number5;   // Anything can happen and the program may crash.
                                                           
    cout << "Program is ending well" << endl;   
    
    return 0;
}