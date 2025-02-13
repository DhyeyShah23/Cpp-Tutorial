#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Check if a number is prime or not. Return 1 if true and 0 if false.
int test_prime(int x) {

    int factors{0};

    for(size_t i{1}; i<=x; i++) {
        if(x%i==0) {
            factors++;
        }
        
        if(x==i && factors==2) {
            return(1);
        }
    }
    return(0);
}

// Check if a number is perfect or not. Return 1 if true and 0 if false.
int test_perfect(int x) {

    int k{0};

    for(size_t i{1}; i<x; i++) {
        if(x%i==0) {k+=i;}
        if(i==(x-1) && k==x) {return(1);}
    }
    return(0);
}

// Return no. of digits
int calc_numberOfDigits(int num) {

    int digits{0};

    do {
        num = num/10;
        digits++;
    } while(num>0);

    return(digits);
}

//Checks if a no. is narcissistic or not. Return 1 if true and 0 if false.
int test_narcissistic(int x) {
    int digits{calc_numberOfDigits(x)};
    int sum{0};
    int num{x};

    for(size_t  i{0}; num>0; i++) {
        sum += pow(num%10, digits);
        num=num/10;
    }

    if(sum == x) {return(1);}
    else {return(0);}
}

// Fing Greatest Common Divisor
int calc_greatestCommonDivisor(int x, int y) {

// Interchanging x and y if necessary.
    if(y>x) {
        x = x+y; // x = x + y
        y = x-y; // y = (x+y) - y = x
        x = x-y; // x = (x+y) - [(x+y) - y] = (x+y) - x = y
    }
    
    int rem;

    while(1) {
        if(y != 0) {
            rem = x%y;
            x = y;
            y = rem;
       }
        else {return(x);}
    }
}

// Calculate factorial - using factorial
unsigned long long calc_factorial(int x) {
    unsigned long long f;
    if(x==1 || x==0) {return(1);} //Cuz 0! = 1.
    else {f = x*calc_factorial(x-1);}
    return(f);
}

// Displays prime nos
void display_prime() {
    int num, div, factor;
    factor = 0;
    cout << "Prime numbers between 1 to 100 are as follows: ";

    for(num = 1; num <= 100; num++) { //Replace 100 by other nos if you want more prime numbers.
        
        for(div = 1; div <= num; div++) {
            if(num%div == 0) {factor++;} //Increacing the value of no. of factors if a no. is a factor
            if(div == num && factor == 2) {cout << num << " ";} //Printing a no. if it is prime.
        }
        factor = 0;
    }
    cout << endl;
}

// Displays perfect nos (sum of all factors, except the no itself, is equal to the no)
void display_perfect() {

    int num, sum, div;
    sum = 0;

    cout << "Perfect numbers between 1 to 10000 are as follows: ";  

    for(num = 1; num <= 10000; num++) {
        for(div = 1; div < num; div++) {
            if(num%div == 0) {sum += div;}
            if(div == (num-1) && sum == num) {cout << sum << " ";}
        }
        sum = 0;
    }
    cout << endl;
}

// Display narcissistic nos (sum of all individual digits raised to the total number of digits is equal to the number)
void display_narcissistic() {
    int sum{0};

    cout << "The narcissistic nos between 1 - 10k are: ";
    for(size_t i{1}; i<=10000; i++) {
        int num=i;

        for(size_t  j{0}; num>0; j++) {
            sum += pow(num%10, calc_numberOfDigits(i));
            num /= 10;
        }
        if(sum==i) {cout << " " << i;}
        sum = 0;
    }
    cout << endl;
}

// Displaying fibonacci sequence
void display_fibonacci() {
    int a{1}, b{1};

    cout << "Fibonacci Sequence: 1 1 ";

    for(size_t i{1}; i<= 10; i++) {
        a += b;
        cout << a << " ";
        b += a;
        cout << b << " ";
    }
}



int main() {
    int a;
    cout << "Enter a Number: ";
    cin >> a;

// Test Prime
    if(test_prime(a)) {cout << "Yes, the number is prime" << endl;}
    else {cout << "No, the number is not prime" << endl;}

// Test Perfect
    if(test_perfect(a)) {cout << "Yes, the number is perfect" << endl;}
    else {cout << "No, the number is not perfect" << endl;}

// Test Narcissistic
    if(test_narcissistic(a)) {cout << "Yes, the number is narcissistic" << endl;}
    else {cout << "No, the number is not narcissistic" << endl;}

// Calc No. of digits
    cout << "No of digits in the given number is " << calc_numberOfDigits(a) << endl;

// Calc GCF
    cout << "The GCF of the no. and 150 is: " << calc_greatestCommonDivisor(a, 150) << endl;

// Calculate factorial
    cout << "The factorial of the given number is " << calc_factorial(a) << endl;

// Display Prime
    display_prime();

// Display Perfect
    display_perfect();

// Display Narcissistic
    display_narcissistic();

// Display Fibonacci Sequence
    display_fibonacci();

    cout << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;
    cout << endl;
}