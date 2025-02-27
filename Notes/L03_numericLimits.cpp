#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main(){

    /*
    For floating point numbers,
    numeric_limits<...>::min() => minimum absolute value
    numeric_limits<...>::max() => maximum possible value
    numeric_limits<...>::lowest() => Lowest possible value
    */

    cout << "The minimum possible value of float is " << numeric_limits<float>::lowest() << endl;
    cout << "The minimum absolute value of float is " << numeric_limits<float>::min() << endl;
    cout << "The maximum possible value of float is " << numeric_limits<float>::max() << endl;

    cout << endl;

    cout << "The minimum possible value of double is " << numeric_limits<double>::lowest() << endl;
    cout << "The minimum absolute value of double is " << numeric_limits<double>::min() << endl;
    cout << "The maximum possible value of double is " << numeric_limits<double>::max() << endl;
    
    cout << endl;

    cout << "The minimum possible value of long double is " << numeric_limits<long double>::lowest() << endl;
    cout << "The minimum absolute value of long double is " << numeric_limits<long double>::min() << endl;
    cout << "The maximum possible value of long double is " << numeric_limits<long double>::max() << endl;

    cout << setfill('=') << endl;
    cout << setw(100) << "" << endl;
    cout << endl;
    
    /*
    For non-floating point numbers, 
    numeric_limits<...>::min() => minimum possible value
    numeric_limits<...>::max() => maximum possible value
    lowest() func doesn't mean anything 
    */

    cout << "The range for short is from " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
        
    cout << "The range for unsigned short is from " << numeric_limits<unsigned short>::min() << " to " << numeric_limits<unsigned short>::max() << endl;
        
	cout << "The range for int is from " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
        
    cout << "The range for unsigned int is from " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << endl;
        
    cout << "The range for long is from " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;

    cout << endl;
    cout << setw(100) << "" << endl;
    cout << endl;

    //Other facilities
    //More info : https://en.cppreference.com/w/cpp /types/numeric_limits
    cout << "int is signed : " << numeric_limits<unsigned short>::is_signed << endl;
    
    return 0;
}