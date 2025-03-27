/* INCOMPLETE */

/*
Write a C++ program to multiply 2 matrices using operator overloading.
*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** data;     // Data is a pointer to another pointer (which is pointing to an integer).

public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;

        // Creating a matrix of desired dimensions
        data = new int*[rows];
        for(int i{0}; i<rows; i++) { data[i] = new int[cols]; }
    }


    void MatrixInput() {
        cout << "Enter elements of the array: " << endl;

        // Storing user input in the matrix.
        for(int i{0}; i<rows; i++) {
            for(int j{0}; j<cols; j++) {
                cin >> data[i][j];
            }
        }
    }


    void DisplayMatrix() const {    // const keyword in the end ensures that no member variables are modified, making it safe to call on const objects.
        for(int i{0}; i<rows; i++) {
            for(int j{0}; j<cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }


    Matrix operator*(const Matrix& other) {     // Overloading * operator for matrix multiplication.

    }

};