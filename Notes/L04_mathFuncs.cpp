#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double weight {7.7};
    
    // floor: rounds down the number
    cout << "Weight rounded to floor is: " << floor(weight) << endl;
    
    // ceil: rounds up the number
    cout << "Weight rounded to ceil is: " << ceil(weight) << endl;

    cout << endl;
    
    // abs - Gives absolute value of a number
    double savings {-5000};
  
    cout << "Abs of weight is: " << abs(weight) << endl;
    cout << "Abs of savings is: " << abs(savings) << endl;

    cout << endl;

    // exp : f(x) = e ^ x , where e = 2.71828 . Test the result here against a calculator
    double exponential = exp(10);
    cout << "The exponential of 10 is: " << exponential << endl;
    
    // pow
    cout << "3 ^ 4 is: " << pow(3,4) << endl;
    cout << "9^3 is: " << pow(9,3) << endl;

    cout << endl;

    // log: natural logarithm
    cout << "Natural logaritm of 54.59 is: " << log(54.59) << endl;
    
    // log10: logarithm with base 10
    cout << "log 10000 base 10 is: " << log10(10000) << endl;

    cout << endl;

    // sqrt
    cout << "The square root of 81 is: " << sqrt(81) << endl;
    
    cout << endl;

    // rounds off the number to the nearest integer.
    cout << "3.654 rounded to: " << round(3.654) << endl;
    cout << "2.5 is rounded to: " << round(2.5) << endl;
    cout << "2.4 is rounded to: " << round(2.4) << endl;
       
    // For documentation of cmath library: https://en.cppreference.com/w/cpp/header/cmath

    return 0; 
}