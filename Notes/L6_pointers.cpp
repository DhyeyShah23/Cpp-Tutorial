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

    // NOTE: Do NOT store value at a ptr without initializing it, i.e., before assigning an address to a pointer, if you try to modify the value at the pointer (which currently has junk address), it will lead to BAD behaviour.
    // The same is also true for a pointer initialized with nullptr.

    /* REFERENCING AND DEREFRENCING
        REFRENCING: Referencing in C++ means obtaining the memory address of a variable using the address-of (&) operator.
        DEREFRENCING: Dereferencing means accessing the value stored at the memory address a pointer holds, using the dereference operator (*).
    */

    cout << endl;
    cout << "========================================" << endl;
    cout << endl;
    

// DYNAMIC MEMORY ALLOCATION - Memory is stored in Heap (instad of stack) at runtime.
    
    /* HEAP vs STACK - Memory allocation
        In heap, the developer is in full control of the memory allocation and it's release. The lifetime is controlled using the new and delete operators.
        On the other hand, in stack, the developer is NOT in full control of memory allocation and release. Here, the lifetime is controlled by the scope mechanism.
    */

    // How we've used pointers so far
	int number{22};     // Stack
	int* p_number1 = &number;
	
	cout << "Declaring pointer and assigning address: " << endl;
	cout << "number: " << number << endl;
	cout << "p_number1: " << p_number1 << endl;
	cout << "&number: " << &number << endl;
	cout << "*p_number1: " << *p_number1 <<  endl;
    cout << endl;

    
	// // Writing into uninitialized pointer through dereference is BAD!
	// int *p_number2;         // Contains junk address - could be anything
    // cout << "Writing (55) into unitialized pointer (containing junk address) through derefrence" << endl;
	// *p_number2 = 55;        // Writing into junk address: BAD! The system will crash and no further statements will be executed.
	// cout << "p_number2: " << p_number2 << endl;         // Reading from junk address.
    // cout << "Dereferencing bad memory: *p_number2 = " << *p_number2 << endl;
	
    /* Similarly, DO NOT write into a pointer pointed at (or initialized with) nullptr. */
    
    // Dynamic heap memory
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
    p_number4 = nullptr;    // This is done so that so that no other junk memory is stored in the pointer. Also, if you use a deleted memory location, unexpected behavior may happen, as seen in the case of using an unitialized piece of memory.

    //It is also possible to initialize the pointer with a valid address up on declaration instead of nullptr.
    int* p_number5{new int};        // Memory location contains junk value
    int* p_number6{new int(22)};    // use direct initialization
    int* p_number7{new int{23}};    // use uniform initialization
    
    cout << endl;
    cout << "Initialize with valid memory address at declaration: " << endl;
    cout << "p_number5 : " << p_number5 << endl;
    cout << "*p_number5 : " << *p_number5 << endl;      // Junk value
    
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


    //Can reuse pointers. Deleting a pointer just returns the memory it occupied in heap back to the OS.
    p_number5 = new int(81);
    cout << "*p_number : " << *p_number5 << endl;

    // Returning the memory back again.
    delete p_number5;
    p_number5 = nullptr;

    // Calling delete twice on a pointer: BAD!
    p_number5 = new int(99);
    cout << "*p_number5 : " << *p_number5 << endl;

    delete p_number5;
    // delete p_number5;   // Anything can happen and the program may crash.
    p_number5 = nullptr;
                                                           
    cout << "Dynamic memory allocation ending well." << endl; 
    
    cout << endl;
    cout << "========================================" << endl;
    cout << endl;
    
// DANGLING POINTERS: A pointer that does not point to a valid memory address. Trying to derefrence a dangling pointer will result in BAD behaviour.
    /*
    There are 3 types of dangling pointer:-
    Uninitialized pointer: Can be solved by initializing the pointer
    Deleted pointer: Reset the address of the deleted pointer to nullptr.
    Multiple pointers pointing to the same location: Can be solved be setting up a master pointer and other slave pointers.
    */

    // Multiple pointers pointing to the same location
    int *p_number8 {new int{83}};
    int *p_number9 {p_number8};         // p_number8 and 9 point to same location
    
    cout << "p_number8 - " << p_number8 << " - " << *p_number8 << endl;
    cout << "p_number9 - " << p_number9 << " - " << *p_number9 << endl;
    
    // Deleting p_number8
    delete p_number8;       // The memory of pointer8 (also 9) is now RETURNED BACK TO OS. It's now invalid memory.
    cout<< "p_number9(after deleting p_number8) - " << p_number9 << " - " << *p_number9 << endl;  // This will lead to BAD behaviour.

    /*
    This problem can be solved by appointing 1 pointer as the master. This pointer will own the memory (responsible for releasing when necessary).
    Other pointers (slaves) will only be able to derefrence the memory if the master pointer is valid.
    */
    int * p_number10 {new int{382}};// Let's say p_number10 is the master pointer
    int * p_number11 {p_number10};
    
    //Dereference the pointers and use them
    cout << "p_number10 - " << p_number10 << " - " << *p_number10 << endl;
    
    if(!(p_number10 == nullptr)) {          // Only use slave pointers when master pointer is valid
        cout<< "p_number11 - " << p_number11 << " - " << *p_number11 << endl;
    }
    
    delete p_number10;          // Master releases the memory
    p_number10 = nullptr;
    
    if(!(p_number10 == nullptr)) {          // Only use slave pointers when master pointer is valid
        cout<< "p_number11 - " << p_number11 << " - " << *p_number11 << endl;
    } 
    else{std::cerr << "WARNING : Trying to use an invalid pointer" << endl;}     // std::cerr is a standard iostream object that sends error messages to the standard error stream (stderr)
    
    cout << endl;
    cout << "========================================" << endl;
    cout << endl;


// EXCEPTION HANDELING WHEN NEW FAILS
    
    /* Memory allocation using the new keyword fails when the entire memory of heap is filled out. */
    // int* data1 = new int[10000000000000000];     // This may fail for some compilers. If it does, do the same using for loop.
    
    /* Here the heap is not large enough to allot space for these many integers. As a result, there is an error and the program execution fails. */

    // // Doing the same with for loop:-
    // for(size_t i{0}; i<100000; i++) {
    //     int* data = new int[100000000];
    // }

    /* In order to catch the error and make sure that the program ends well, there are 2 methods. */

    // Using try and catch block:
    try{
        int* data3 = new int[100000000000000000];
    } catch(std::exception& ex) {
        cout << "Something went wrong: " << ex.what() << std::endl;
    }

    // Using std::nothrow - this allocates nullptr to the pointer is it's allocation using new fails.
    int* data4 = new(std::nothrow) int[100000000000000000];

    if(data4 != nullptr) {cout << "Data allocated" << std::endl;}
    else {cout << "Data allocation failed" << std::endl;}

    cout << endl;
    cout << "========================================" << endl;
    cout << endl;

// NULL POINTER SAFETY - In order to prevent derefrencing a null pointer.
    int *p_number{};
    
    if(p_number) {
        std::cout << "p_number points to a VALID address : "<< p_number << std::endl;
        std::cout << "*p_number : " << *p_number << std::endl;
    }else {
        std::cout << "p_number points to an INVALID address." << std::endl;
    }

    // You can delete a nullptr. It won't cuz any bad behaviour.
    delete p_number;
    p_number = nullptr;

    cout << endl;
    cout << "========================================" << endl;
    cout << endl;

// MEMORY LEAKS
    
    return 0;
}