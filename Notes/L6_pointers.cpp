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
    
    return 0;
}