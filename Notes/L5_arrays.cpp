#include <iostream>
using namespace std;

int main(){

    // Declare an array of integers
    int myArr[10]; // Junk data

    // Read data

    cout << "myArr[0] : " << myArr[0] << endl;
    cout << "myArr[1] : " << myArr[1] << endl;
    cout << endl;
   
    // Read with a normal for loop
    for(size_t i{0}; i<10; ++i) {cout << "myArr[" << i << "] : " << myArr[i] << endl;}

    myArr[0] = 20;
    myArr[1] = 21;
    myArr[2] = 22;

    // Print the data out
    for(size_t i{0}; i<10; ++i) {cout << "myArr [" << i << "] : " << myArr[i] << endl;}
    cout << endl;

    // Write data in a loop
    for(size_t i{0}; i<10; ++i) {myArr[i] *= 10;}

    // Print the data out
    for(size_t i{0}; i<10; ++i) {cout << "myArr[" << i << "] : " << myArr[i] << endl;}
    cout << endl;

    // Declare and initialize at the same time
	double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
	for(size_t i{0}; i < 5; ++i) {cout << "salary[" << i << "] : " << salaries[i] << endl;}
    cout << endl;
  
    // If you don't initialize all the elements, those you leave out are initialized to 0
    int families[5] {12, 7, 5};
	for(size_t i{0}; i<5; ++i) {cout << "families[" << i << "] : " << families[i] << endl;}
    cout << endl;

   	// You can omit the size of the array at declaration
    int students[] {10, 12, 15, 11, 18, 17, 23, 56}; 
	
	// Will print this with a range based for loop
	for(auto value : students) {cout << "value : " << value << endl;}
    cout << endl;

    /*
    A ranged loop is a modern way of printing or processing each element of an array.
    A ranged based for loop automatically extracts each element from the array one by one.
    The extracted element is stored in the variable name, specified in the first argument, before colon (:).
    The 2nd argument is the name of array, from which the elements are to be extracted.
    The loop body is then executed using the extracted element stored in the mentioned variable.
    This process repeats itself untill all the elements in the array are processed.
    */

    /*
    The print an array whose size is not known:
    1. using std::size(<array name>): This method returns the number of elements of an array, and hence can be used in a for loop as a condition.
    2. using the sizeof(<array name) operator: This method returns the actual size of array (in bytes). Divide it by the size of 1 element of an array to obtain the number of elements in an array.
    3. Use Ranged for loop.
    */
    
    
   // Read only arrays
   const int birds[] {10,12,15,11,18,17,23,56}; 
   // birds[2] = 8;     // This line will show an error cuz const arrays cannot be modified.


    // Sum up scores array, store result in sum
    int scores[] {2, 5, 8, 2, 5, 6, 9};
    int sum{0};
    
    for(int element : scores) {sum += element;}
    cout << "Score sum: " << sum << endl;
    cout << endl;
    cout << endl;
  

    // CHARACTER ARRAYS

    // If a character array is null terminated, it's called as C-String
    char msg1[] {'H','e','l','l','o','\0'};

    /*
    Here, the array size is specified as 6 (instead of 5). This is because of the null terminator.
    In C and C++, C-style strings are stored as character arrays, but unlike arrays of numbers, there is no built-in way to determine their length.
    The null terminator ('\0') marks the end of the string so that functions can stop reading at the correct point.
    */

    cout << "msg1: " << msg1 << endl;     // You can directly print a character array, without using a loop. This is not possible for a character array.
    cout << "sizeof(msg1): " << sizeof(msg1) << endl;
    cout << endl;
  
    char msg2[6] {'H','e','l','l','o'};             // Here the null terminator is auto-filled cuz the last element of the array is empty.
    cout << "msg2: " << msg2 << endl;
    cout << endl;

    char msg3[] {'H','e','l','l','o'};      // This is not a c string, as there is not null character. Since only 5 chrs are specified, the size of array is taken as 5. Now, no space is remaing for auto-filling the null terminator at the end.
    cout << "msg3: " << msg3 << endl;     // This will lead to unexpected outcome.
    cout << endl;
    
    // String literal
    char msg4[] {"Hello"};      // This is a string literal, and hence, the null terminator is automatically appended.
    cout << "msg4: " << msg4 << endl;
    cout << endl;
    
    // Can't safely print out arrays other than those of characters
    int numbers[] {1,2,3,4,5};
    cout << "numbers: " << numbers << endl;

    return 0;
}