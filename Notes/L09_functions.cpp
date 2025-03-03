/* COMPILATION MODEL WITH MULTIPLE FILES */

/* Steps involved in compilations:
    1. Preprocessing:
        All preprocessor directives are processed, i.e., all include files are loaded. 
        For e.g., the iostream file is loaded where #include <iostream> is written.
        These new files are now called Translation Units (TU).
        There are as many translation units as the number of source files.
        In our cpp programs, the TUs are mostly equivalent to the source files (.cpp).
    
    2. Compiling:
        The compilor compiles each translation unit into an object file. 
        For e.g., main.cpp is compiled into main.o, functions.cpp is compiled into functions.o, etc.
        The object file is the binary executable (.exe) file which is made when we compile our program.
        There are as many object files as the number of source files.

    3. Linking:
        The object files are now processed by the linker, which stiches them together to form a single executable file.
        The linker also links the object files with the libraries that are used in the program.
        The final executable file is now ready to be executed.
*/


/* Preffered method to organize functions in multiple files:-
   Include function declaration (prototype) in header files
   Include function definations in cpp files with same name as header files
   Mention the name of header files in your main code (main.cpp)
*/


// Including standard libraries
#include <iostream>
#include <iomanip>
#include <string>

// Including user-defined header files
/* #Include your header files here */

// Function Prototypes - Write them in header files (.h)
int min(int, int);
int max(int*, int*);
int sum(int&, int&, int&);

// Function overloading
int avg(int, int);   
int avg(int, int, int);
double ave(double, double);
double avg(double, double, double);  


using namespace std;

// Main Function
int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    
    int minimum = min(a, b);            // Pass by value
    int maximim = max(&a, &b);          // Pass by pointer
    int summation = sum(a, b, c);       // Pass by reference
}


// Function Definations - Write them in .cpp files with same name as header files
int min(int x, int y) {return ((x < y) ? x : y);}

int max(int *x, int *y) {return ((*x > *y) ? *x : *y);}

int sum(int &x, int &y, int &z) {
    // Here if we change the value of x, y or z, the changes will be reflected in the main function as well cuz we are passing the values by reference.
    return x+y+z;
}

// Overloading avg functions
int avg(int x, int y) {return (x+y)/2;}
int avg(int x, int y, int z) {return (x+y+z)/3;}
double avg(double x, double y) {return (x+y)/2;}
double avg(double x, double y, double z) {return (x+y+z)/3;}