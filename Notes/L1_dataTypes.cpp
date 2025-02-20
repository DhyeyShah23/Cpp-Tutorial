#include <iostream>

using namespace std;

int main() {

// INTEGERS
    // Integer value of 30 is stores in each of the following variables. The only difference is way the number is given.
    // There are 3 different ways to initialize a variable. The most recommended way is to use braced initialization.
    int a = 30;         // No prefix is used => No. is given in decimal format.         Assigment initialization (using =) is done.
    int b{036};         // 0 prefix is used => No. is given in octal format.            Braced initialization (using {}) is done.
    int c(0x1E);        // 0x prefix is used => No. is given in hexadecimal format.     Functional initialization [using ()] is done.
    int d{0b11110};     // 0b prefix is used => No. is given in binary format.
    
// FLOATING POINT NUMBERS
    // To learn how floating point numbers are stored in memory, refer: https://en.wikipedia.org/wiki/IEEE_754, or https://www.youtube.com/watch?v=8afbTaA-gOQ.
    // We can divide these numbers by 0, but the result will be infinity. We can also multiply these numbers by 0, but the result will be NaN (Not a Number). However, we cannot divide 0 by 0.

    float x{3.14f};                   // f suffix is used => No. is given in float format.
    double y{3.144345363};            // No suffix is used => No. is given in double format.
    long double z{3.145345253L};      // L suffix is used => No. is given in long double format.

// BOOLEAN
    // Boolean values are stored in memory as 0 for false and 1 for true. The size of a boolean variable is 1 byte.
    bool t{true};       // true is stored in t.
    bool f{false};      // false is stored in f.

// CHARACTER
    // Characters are stored in memory as ASCII values. The size of a character variable is 1 byte.
    char ch1{'A'};          // 'A' is stored in ch.
    char ch2{65};           // ASCII value of 65 is 'A', so 'A' is stored in ch1.

// AUTO KEYWORD
    // The auto keyword is used to automatically determine the data type of a variable. It is used when the data type is not known.
    auto var1{130};         // The data type of var1 is automatically determined to be int.
    auto var2{3.14};        // The data type of var2 is automatically determined to be double.
    auto var3{'A'};         // The data type of var3 is automatically determined to be char.
    auto var4{true};        // The data type of var4 is automatically determined to be bool.

    cout << endl;

    //-----------------------------------------------------------------------------------------------------------------

// WIERD INTEGER TYPES

    // int (4 bytes) is the smallest data type which can handle arithmetic operations.
    // Hence, short ints cannot handle arithmetic operations. If we do so, short ints are automatically promoted to ints by the compiler.
	short int var5 {10};    // 2 bytes
	short int var6 {20};
	
	char var7 {40};         // 1 byte
	char var8 {50};
	
	std::cout << "size of var5: " << sizeof(var5) << std::endl;
	std::cout << "size of var6: " << sizeof(var6) << std::endl;
	std::cout << "size of var7: " << sizeof(var7) << std::endl;
	std::cout << "size of var8: " << sizeof(var8) << std::endl;
	
	auto result1 = var5 + var6;
	auto result2 = var7 + var8;
	
	std::cout << "size of result1: " << sizeof(result1) << std::endl; // 4
	std::cout << "size of result2: " << sizeof(result2) << std::endl; // 4

    return 0;
}