/* Use classes and objects to perform various operations on complex numbers */

#include <iostream>
using namespace std;



class Complex {
    
private:
    double Real;
    double Imag;

public:

    // Constructors
    Complex() {
        Real = 0;
        Imag = 0;
    }
    
    Complex(double r, double i) {
        Real = r;
        Imag = i;
    }


    // Setter Function
    void SetReal(double r) {Real = r;}
    void SetImag(double i) {Imag = i;}
    
    void SetValue(double r, double i) {
        Real = r;
        Imag = i;
    }


    // Perfmorming operations
    static Complex Add(const Complex& c1, const Complex& c2) {
        Complex result;
        result.SetReal(c1.Real + c2.Real);
        result.SetImag(c1.Imag + c2.Imag);
        return result;
    }

    static Complex Subtract(const Complex& c1, const Complex& c2) {
        Complex result;
        result.SetReal(c1.Real - c2.Real);
        result.SetImag(c1.Imag - c2.Imag);
        return result;
    }
    
    static Complex Multiply(const Complex& c1, const Complex& c2) {
        Complex result;
        result.SetReal( (c1.Real * c2.Real) - (c1.Imag * c2.Imag) );
        result.SetImag( (c1.Real * c2.Imag) + (c1.Imag * c2.Real) );
        return result;
    }
};



int main() {
    
    // Creating objects
    Complex c1(13, -4);
    Complex c2(4, 9);

    // Storing multiplication result
    Complex resMult = Complex::Multiply(c1, c2);

}