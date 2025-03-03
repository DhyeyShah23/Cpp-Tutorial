#include <iostream>
#include <iomanip>
#include <cctype>     // For character manipulation
#include <cstring>    // For c-string manipulation
#include <string>     // For std::string manipulation

using namespace std;

void line(string heading) {
    cout << endl;
    cout << "============= " << heading << " =============" << endl;
    cout << endl;
}

int main() {

// CHARACTER MANIPULATION
    line("CHARACTER MANIPULATION");

    cout << boolalpha;      // To print bool values as true/false instead of 1/0.

    /*
    There are various methods for character manipulation like std::isalnum(), std::isdigit(), std::islower(), std::tolower(), std::toupper() etc.
    Refer to documentation (http://www.cplusplus.com/reference/cctype/) for more information.   
    */

    // Example 1
    char ch1{'A'};
    cout << "Is " << ch1 << " a digit? " << bool(isdigit(ch1)) << endl;
    cout << "Is " << ch1 << " a letter? " << bool(isalpha(ch1)) << endl;

    cout << endl;

    // Example 2: Functionality in text-processing applications
    char chArr1[] {"Hello World! I'm learning C++."};
    int blankSpaces {0};
    for (size_t i {0}; i < std::size(chArr1); i++) {
        if(isblank(chArr1[i])) {blankSpaces++;}
    }
    cout << "Blank spaces in chArr1: " << blankSpaces << endl;

// C-STRING MANIPULATION
    line("C-STRING MANIPULATION");

    /* There are various methods for string manipulation like std::strlen(), std::strcat(), std::strcpy(), std::strcmp() etc.
    Refer to documentation (http://www.cplusplus.com/reference/cstring/) for more information. */

    // C string cuz its a string literal
    const char msg1[] {"The sky was blue"};
	const char* msg2 {"The sky is blue"};   // arr decays into pointer and hence, we can't use std::size() or range-based for loop with it.
    const char* const msg3 {"/home/user/data.txt"};     // Used const ptr to prevent any changes to the path.

    // strlen() ignores the null terminator
    cout << "Length of msg1: " << std::strlen(msg2) << endl;

    // sizeof() returns the size of the pointer. Since the size of ch is 1 byte, the resulting value will be the same as the length of the string.
    cout << "Length of msg1: " << sizeof(msg2) << endl; // The sizeof operator also includes the null-terminator in the length.

    // strcmp(cstr1, cstr2) compares two strings. It returns 0 if the strings are equal, a positive value if the first string is greater, and a negative value if the first string is smaller.
    cout << "Comparing msg1 and msg2: " << std::strcmp(msg2, msg1) << endl;

    // Use strncmp(cstr1, cstr2, n) to compare only the first n characters of the strings.
    cout << "Comparing first 5 characters of msg1 and msg2: " << std::strncmp(msg2, msg1, 5) << endl;

    // Use strchr(str, char) to return the address of the first occurrence of a given character in a string. Returns nullptr if the character is not found.
    const char* ptr1 {std::strchr(msg2, 'b')};
    cout << "First occurrence of 'b' in msg1: " << ptr1 << endl; // This will print the entire cstring from the first occurrence of 'b' till the end.

    // Use strrchr(str, char) to return the address of the last occurrence of a given character in a string. Returns nullptr if the character is not found.
    const char* ptr2 {std::strrchr(msg3, '/')};
    if(ptr2) {cout << ++ptr2 << endl;}      // To print the file name from the given path.

    char msg4[100] {"Hello"};
    char msg5[100] {" World!"};

    // Use strcat(str1, str2) to concatenate two strings. The first string must have enough space to accommodate the second string.
    strcat(msg4, msg5);             // msg4 value is replaced by the concatenated string
    cout << "msg4: " << msg4 << endl;

    // Use strncat(str1, str2, n) to concatenate only the first n characters of the second string.
    strncat(msg4, " Bye-bye", 4);         // Concatenating only the first 4 characters
    cout << "msg4: " << msg4 << endl;

    // Use strcpy(str1, str2) to copy the contents of the second string into the first string. The first string must have enough space to accommodate the second string.
    strcpy(msg4, "I'm Going now..");             // msg4 value is replaced by the copied string
    cout << "msg4: " << msg4 << endl;

    // Use strncpy(str1, str2, n) to copy only the first n characters of the second string into the first string.
    strncpy(msg4, "bye", 3);         // Copying only the first 3 characters of msg5, thus replacing the 1st 3 letters, keeping all others the same
    cout << "msg4: " << msg4 << endl;

// USING STD::STRING
    line("USING STD::STRING");

    // Different ways to initialize a string
    string str1 {};                                 // Empty string
    std::string str2 {"Hello, World!"};             // Initialized with a string literal
    std::string str3 {str2};                        // Initialize with another string
    std::string str4 {"Hello, World!", 5};          // Initialize with part of string literal - stores Hello
    std::string str5 (10, 'A');                     // Initialize with 10 'A's
    std::string str6 {str2, 7, 6};                  // Initialize with part of another string - starting with index 7 and length 6

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    cout << "str4: " << str4 << endl;
    cout << "str5: " << str5 << endl;
    cout << "str6: " << str6 << endl;

    line("PROGRAM END");
    return 0;
}