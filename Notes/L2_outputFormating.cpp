#include <iostream>
#include <iomanip> // This is the header file for input/output manipulators. It is used to manipulate (format) the input/output stream.

using namespace std;

int main() {

// All the objects given below are iomanip class
    
    cout << "Unformatted table : " << endl;
    cout << "Daniel" << " " << "Gray" << " 25" << endl;
    cout << "Stanley" <<" "  << "Woods" << " 33" << endl;
    cout << "Jordan" << " "  << "Parker" << " 45" << endl;
    cout << "Joe" << " " << "Ball" << " 21" << endl;
    cout << "Josh" << " " << "Carr" << " 27" << endl;
    cout << "Izaiah" << " " << "Robinson" << " 29" << endl;

    cout << endl;

    // setw() is used to set the width of the output. It is used to align the output. The setw() manipulator only affects the next value to be printed.
    cout << "Formatted table : " << endl;
    cout << setw(10) <<  "Lastname"  << setw(10) << "Firstname" << setw(5) << "Age" << endl;
    cout << setw(10) << "Daniel"  << setw(10) << "Gray" << setw(5) << "25" << endl;
    cout << setw(10) << "Stanley" << setw(10)  << "Woods" << setw(5) <<  "33" << endl;
    cout << setw(10) <<  "Jordan" << setw(10)  << "Parker" << setw(5) << "45" << endl;
    cout << setw(10) <<  "Joe" << setw(10) << "Ball" << setw(5) << "21" << endl;
    cout << setw(10) << "Josh" << setw(10) << "Carr" << setw(5) <<"27" << endl;
    cout << setw(10) << "Izaiah" << setw(10) << "Robinson" << setw(5) << "29" << endl;

    cout << endl;

    // left, right, and internal are used to align the output. right is the default alignment.
    cout << "Left justified table :  " << endl;
    int col_width = 20;
    cout << left;
    cout << setw(col_width) <<  "Lastname"  << setw(col_width) << "Firstname" << setw(col_width/2) << "Age" << endl;
    cout << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width/2) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width/2) <<  "33" << endl;
    cout << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width/2) << "45" << endl;
    cout << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width/2) << "21" << endl;
    cout << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width/2) <<"27" << endl;
    cout << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width/2) << "29" << endl;

    cout << endl;

    //internal left aligns the sign while the data is right justified.
    cout << "Internal justified : " << endl;
    cout << right;
    cout << setw(10) << -123.45 << endl;
    cout << internal;
    cout << setw(10) << -123.45 << endl;
    
    cout << endl;

    // setfill() is used to set the fill character for the output.
    cout << "Table with fill characters :  " << endl;
    cout << left;
    cout << setfill('-'); // The fill character
    cout << setw(col_width) <<  "Lastname"  << setw(col_width) << "Firstname" << setw(col_width/2) << "Age" << endl;
    cout << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width/2) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width/2) <<  "33" << endl;
    cout << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width/2) << "45" << endl;
    cout << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width/2) << "21" << endl;
    cout << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width/2) <<"27" << endl;
    cout << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width/2) << "29" << endl;

    cout << endl;
    cout << setfill('=');
    cout << setw(75) << "" << endl;
    cout << endl;

    // boolalpha is used to print boolean values as true or false, noboolalpha is used to print boolean values as 1 or 0.
    bool condition {true};
    bool other_condition {false};
    
    cout << "condition: " << condition << endl;
    cout << "other_condition: " << other_condition << endl;
    
    cout << endl;

    cout << boolalpha;
    cout << "condition: " << condition << endl;
    cout << "other_condition: " << other_condition << endl;
    
    cout << endl;
    
    cout << noboolalpha;
    cout << "condition: " << condition << endl;
    cout << "other_condition: " << other_condition << endl;

    cout << endl;
    cout << setw(75) << "" << endl;
    cout << endl;

    //showpos and noshowpos are used to show/hide the + sign for positive numbers
    int pos_num {34};
    int neg_num {-45};
    
    cout << "pos_num: " << pos_num << endl;
    cout << "neg_num: " << neg_num << endl;
    
    cout << endl;

    cout << showpos;
    cout << "pos_num: " << pos_num << endl;
    cout << "neg_num: " << neg_num << endl; 

    cout << endl;
    
    cout << noshowpos;
    cout << "pos_num: " << pos_num << endl;
    cout << "neg_num: " << neg_num << endl;

    cout << endl;
    cout << setw(75) << "" << endl;
    cout << endl;  

    // Different number systems: dec, hex, oct
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};
    
    cout << endl;

    cout << "default base format: " << endl;
    cout << "pos_int: " << pos_int << endl;
    cout << "neg_int: " << neg_int << endl;
    cout << "double_var: " << double_var << endl;
    
    cout << endl;
    
    cout << "pos_int in different bases: " << endl;
    cout << "pos_int (dec): " << dec << pos_int << endl;
    cout << "pos_int (hex): " << hex << pos_int << endl;
    cout << "pos_int (oct): " << oct << pos_int << endl;
    
    cout << endl;
    
    cout << "neg_int in different bases : " << endl;
    cout << "neg_int (dec): " << dec << neg_int << endl;
    cout << "neg_int (hex): " << hex << neg_int << endl;
    cout << "neg_int (oct): " << oct << neg_int << endl;
    
    cout << endl;
    
    // floating point numbers do not follow the number system bases and hence, are not affected by different bases. Instead, they follow the IEEE 754 standard.
    cout << "double_var in different bases: " << endl;
    cout << "double_var (dec): " << dec << double_var << endl;
    cout << "double_var (hex): " << hex << double_var << endl;
    cout << "double_var (oct): " << oct << double_var << endl;

    cout << endl;
    cout << setw(75) << "" << endl;
    cout << endl;

    //uppercase / nouppercase is used to print floating-point numbers in upper/lower case. 
    pos_int = 717171;
    
    cout << "pos_int (nouppercase: default): " << endl;
    cout << "pos_int (dec): " << dec << pos_int << endl;
    cout << "pos_int (hex): " << hex << pos_int << endl;
    cout << "pos_int (oct): " << oct << pos_int << endl;
    
    cout << endl;
    
    cout << "pos_int (uppercase): " << endl;
    cout << uppercase;
    cout << "pos_int (dec): " << dec << pos_int << endl;
    cout << "pos_int (hex): " << hex << pos_int << endl;
    cout << "pos_int (oct): " << oct << pos_int << endl;

    cout << dec;              // So that the remaining outputs are in decimal.
    cout << nouppercase;      // So that remaining output is in default (lowercase) format.

    cout << endl;
    cout << setw(75) << "" << endl;
    cout << endl;

    // fixed is used to print floating-point numbers in fixed-point notation, while scientific is used to print floating-point numbers in scientific notation.
    double a{3.1415926535897932384626433832795};
    double b{2006.0};
    double c{1.34e-10};

    cout << "double values (default : use scientific where necessary): " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    
    cout << endl;
    
    cout << "double values (fixed): " << endl;
    cout << fixed;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    
    cout << endl;
    
    cout << "double values (scientific): " << endl;
    cout << scientific;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    cout << endl;
    
    cout << "double values (back to defaults): " << endl;
    cout.unsetf(ios::scientific | ios::fixed); // Hack, will be explained later.
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    cout << endl;
    cout << setw(75) << "" << endl;
    cout << endl;

    // setprecision() is used to set the precision of floating-point numbers. Default is 6. If the precision is bigger than supported by the type, remaining decimal pts will have garbage value.
    a = 3.1415926535897932384626433832795;
    
    cout << "a (default precision(6)): " << a <<  endl;

    cout << setprecision(10);
    cout << "a (precision(10)): " << a << endl;
    
    cout << setprecision(20);
    cout << "a (precision(20)): " << a << endl;

    cout << endl;
    cout << setw(75) << "" << endl;
    cout << endl;

    // showpoint/noshowpoint is used to print/remove trailing zeros in floating-point numbers.
    double d {34.1};
    double e {101.99};
    double f {12.0};
    int g {45};
    
    cout << "noshowpoint (default): " << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl; // 12
    cout << "g: " << g << endl;
    
    cout << endl;

    cout << "showpoint: " << endl;
    cout << showpoint;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl; // 12.0
    cout << "g: " << g << endl;
  
    cout << noshowpoint;  // Resetting to default.

    cout << endl;
    cout << setw(75) << "" << endl;
    cout << endl;

    // showbase is used to print the number along with the base prefix. To undo this, use noshowbase.
    int decimal = 30;
    int octal = 036;
    int hex = 0x1E;

    cout << "Without showbase:" << endl;
    cout << "Decimal: " << decimal << endl;
    cout << "Octal: " << oct << octal << endl;
    cout << "Hexadecimal: " << hex << hex << endl;

    cout << endl;

    cout << "With showbase:" << endl;
    cout << showbase;
    cout << "Decimal: " << dec << decimal << endl;
    cout << "Octal: " << oct << octal << endl;
    cout << "Hexadecimal: " << hex << hex << endl;

    cout << noshowbase;  // Resetting to default.

    return 0;
}