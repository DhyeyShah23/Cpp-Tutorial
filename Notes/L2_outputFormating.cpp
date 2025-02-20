#include <iostream>
#include <iomanip> // This is the header file for input/output manipulators. It is used to manipulate (format) the input/output stream.

int main() {

// All the objects given below are iomanip class
    
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" <<" "  << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " "  << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;

    std::cout << std::endl;

    // std::setw() is used to set the width of the output. It is used to align the output. The setw() manipulator only affects the next value to be printed.
    std::cout << "Formatted table : " << std::endl;
    std::cout << std::setw(10) <<  "Lastname"  << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel"  << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    std::cout << std::setw(10) <<  "Jordan" << std::setw(10)  << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) <<  "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) <<"27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;

    std::cout << std::endl;

    // std::left, std::right, and std::internal are used to align the output. std::right is the default alignment.
    std::cout << "Left justified table :  " << std::endl;
    int col_width = 20;
    std::cout << std::left;
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;

    std::cout << std::endl;

    //std::internal left aligns the sign while the data is right justified.
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;
    
    std::cout << std::endl;

    // std::setfill() is used to set the fill character for the output.
    std::cout << "Table with fill characters :  " << std::endl;
    std::cout << std::left;
    std::cout << std::setfill('-'); // The fill character
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;

    std::cout << std::endl;
    std::cout << std::setfill('=');
    std::cout << std::setw(75) << "" << std::endl;
    std::cout << std::endl;

    // std::boolalpha is used to print boolean values as true or false, std::noboolalpha is used to print boolean values as 1 or 0.
    bool condition {true};
    bool other_condition {false};
    
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;
    
    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;
    
    std::cout << std::endl;
    
    std::cout << std::noboolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::setw(75) << "" << std::endl;
    std::cout << std::endl;

    //std::showpos and std::noshowpos are used to show/hide the + sign for positive numbers
    int pos_num {34};
    int neg_num {-45};
    
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;
    
    std::cout << std::endl;

    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl; 

    std::cout << std::endl;
    
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::setw(75) << "" << std::endl;
    std::cout << std::endl;  

    // Different number systems: std::dec, std::hex, std::oct
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};
    
    std::cout << std::endl;

    std::cout << "default base format : " << std::endl;
    std::cout << "pos_int : " << pos_int << std::endl;
    std::cout << "neg_int : " << neg_int << std::endl;
    std::cout << "double_var : " << double_var << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;
    
    std::cout << std::endl;
    
    // floating point numbers do not follow the number system bases and hence, are not affected by different bases. Instead, they follow the IEEE 754 standard.
    std::cout << "double_var in different bases : " << std::endl;
    std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
    std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;

    std::cout << std::endl;
    std::cout << std::setw(75) << "" << std::endl;
    std::cout << std::endl;

    //std::uppercase / std::nouppercase is used to print floating-point numbers in upper/lower case. 
    pos_int = 717171;
    
    std::cout << "pos_int (nouppercase : default) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::dec;              // So that the remaining outputs are in decimal.
    std::cout << std::nouppercase;      // So that remaining output is in default (lowercase) format.

    std::cout << std::endl;
    std::cout << std::setw(75) << "" << std::endl;
    std::cout << std::endl;

    // std::fixed is used to print floating-point numbers in fixed-point notation, while std::scientific is used to print floating-point numbers in scientific notation.
    double a{ 3.1415926535897932384626433832795 };
    double b{ 2006.0 };
    double c{ 1.34e-10 };

    std::cout << "double values (default : use scientific where necessary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    
    std::cout << "double values (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack, can be explained later.
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << std::setw(75) << "" << std::endl;
    std::cout << std::endl;

    // std::setprecision() is used to set the precision of floating-point numbers. Default is 6. If the precision is bigger than supported by the type, remaining decimal pts will have garbage value.
    a = 3.1415926535897932384626433832795;
    
    std::cout << "a (default precision(6)) : " << a <<  std::endl;

    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;

    std::cout << std::endl;
    std::cout << std::setw(75) << "" << std::endl;
    std::cout << std::endl;

    // std::showpoint/noshowpoint is used to print/remove trailing zeros in floating-point numbers.
    double d {34.1};
    double e {101.99};
    double f {12.0};
    int g {45};
    
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12
    std::cout << "g : " << g << std::endl;
    
    std::cout << std::endl;

    std::cout << "showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12.0
    std::cout << "g : " << g << std::endl;
  
    std::cout << std::noshowpoint;  // Resetting to default.

    std::cout << std::endl;
    std::cout << std::setw(75) << "" << std::endl;
    std::cout << std::endl;

    // std::showbase is used to print the number along with the base prefix. To undo this, use std::noshowbase.
    int decimal = 30;
    int octal = 036;
    int hex = 0x1E;

    std::cout << "Without showbase:" << std::endl;
    std::cout << "Decimal: " << decimal << std::endl;
    std::cout << "Octal: " << std::oct << octal << std::endl;
    std::cout << "Hexadecimal: " << std::hex << hex << std::endl;

    std::cout << std::endl;

    std::cout << "With showbase:" << std::endl;
    std::cout << std::showbase;
    std::cout << "Decimal: " << std::dec << decimal << std::endl;
    std::cout << "Octal: " << std::oct << octal << std::endl;
    std::cout << "Hexadecimal: " << std::hex << hex << std::endl;

    std::cout << std::noshowbase;  // Resetting to default.

    return 0;
}