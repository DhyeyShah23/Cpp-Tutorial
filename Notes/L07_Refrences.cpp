#include <iostream>
using namespace std;

void line(string heading) {
    cout << endl;
    cout << "============= " << heading << " =============" << endl;
    cout << endl;
}

int main() {

// REFRENCES
    line("REFRENCES");
    /*
    A reference in C++ is an alias for another variable.
    It acts as an alternative name for an existing variable and allows you to work with the original variable using the reference.
    A reference must be initialized at the time of declaration. It's initialezed by using the variable name it's refrenced to.
    A reference cannot be re-assigned to another variable after initialization.
    A refrence has the same address as the variable it's refrenced to. Value can be changed in the variable by changing the value at refrence and vice-versa.
    References help in optimizing performance by avoiding unnecessary copying.
    */

    int data{100};
    int& ref{data};     // ref is a reference to data

    cout << "data: " << data << endl;
    cout << "ref: " << ref << endl;
    cout << "Address of data: " << &data << endl;
    cout << "Address of ref: " << &ref << endl;



// REFRENCES AND POINTERS
    line("REFRENCES AND POINTERS");

    /* Diffrences between refrences and pointers
    1. A reference must be initialized at the time of declaration.
    2. A reference cannot be re-assigned to another variable after initialization.
    3. A reference must be bound to a variable. A pointer can be unitialized.
    4. A reference has the same address as the variable it's refrenced to, whereas a pointer has its own address.
    5. Need not need to derefrence a reference to access the value of the variable it's refrenced to.
    */

    double var1{3.14};
    double& ref1{var1};        // ref1 is a reference to var1
    cout << "var1: " << var1 << endl;

    double var2{2.71};

    // You cannot reassign a reference to another variable after initialization.
    ref1 = var2;        // This is not allowed. This statement will simply change the value of var1 to 2.71.
    cout << "var1: " << var1 << endl;

    // Therefore, you can think of a reference as a constant pointer that is automatically dereferenced.
    
// REFRENCES AND CONST
    line("CONST REFs");
    
    // A const ref is used when you don't want the value of the variable to be changed through the refrence.
    int a = 10;
    const int& ref2{a};

    // ref2 = 20;   // This is not allowed. You cannot change the value of a through ref2.
    a = 30;         // Allowed
    
    cout << "a: " << a << endl;
    cout << "ref2: " << ref2 << endl;

    // A const ref is the similar to a const ptr to const int, the only defference being that a const ref can also refer to an int (which can be modified by directly accessing the variable).
    const int* const ptrToA{&a};
    cout << "ptrToA: " << *ptrToA << endl;

    line("PROGRAM END");
    return 0;
}

