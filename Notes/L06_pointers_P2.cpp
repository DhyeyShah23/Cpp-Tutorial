// For pointer aritmetic and more...

#include <iostream>
using namespace std;

int main() {


// ADVANCE POINTER TYPES
    int i1 = 10, i2 = 20;
    const int ci1 = 1, ci2 = 2;

    // Pointers can be classified in 4 types based weather they can be reassigned and whether the value at the address can be changed.

    // Normal Pointers - can be reassigned and the value at the address can be changed.
    int* p1 = &i1;                  // Pointer to int (value at p1 can change | p1 can be reassigned)

    // Constant Pointers - cannot be reassigned, but the value at the address can be changed.
    const int* p2 = &ci1;           // Pointer to constant int (value at p2 cannot change | p2 can be reassigned)

    // Volatile Pointers - can be reassigned, but the value at the address cannot be changed.
    int* const p3 = &i2;            // Constant pointer to int (value at p3 can change | p3 cannot be reassigned) => Similar to a reference

    // Constant-Volatile Pointers - cannot be reassigned and the value at the address cannot be changed.
    const int* const p4 = &ci2;     // Constant pointer to constant int (value at p4 cannot change | p4 cannot be reassigned) => Similar to const refrence
}