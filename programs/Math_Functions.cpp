#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Check if a number is prime or not. Return 1 if true and 0 if false.
int test_prime(int);

// Check if a number is perfect or not. Return 1 if true and 0 if false.
int test_perfect(int);

// Return no. of digits
int calc_numberOfDigits(int);

// Checks if a no. is narcissistic or not. Return 1 if true and 0 if false.
int test_narcissistic(int);

// Fing Greatest Common Divisor
int calc_greatestCommonDivisor(int, int);

// Calculate factorial - using recursion
unsigned long long calc_factorial(int);

// Displays prime nos
void display_prime();

// Displays perfect nos (sum of all factors, except the no itself, is equal to the no)
void display_perfect();

// Display narcissistic nos (sum of all individual digits raised to the total number of digits is equal to the number)
void display_narcissistic();

// Displaying fibonacci sequence
void display_fibonacci();

// To display menu
void display_menu();



int main() {
    int num1, num2;
    int choice;
    
    char wish = 'y';
   
    do {
        cout << endl;

        display_menu();

        cout << endl;
        cout << "What do you want to do? ";
        cin >> choice;

        switch(choice) {
            
            case 1:
                cout << "Enter the test number: ";
                cin >> num1;

                if(test_prime(num1)) {cout << "Yes, the number is prime" << endl;}
                else {cout << "No, the number is not prime" << endl;}
            break;

            case 2:
                cout << "Enter the test number: ";
                cin >> num1;

                if(test_perfect(num1)) {cout << "Yes, the number is perfect" << endl;}
                else {cout << "No, the number is not perfect" << endl;}
            break;
            
            case 3:
                cout << "Enter the number: ";
                cin >> num1;

                cout << "No of digits in the given number is " << calc_numberOfDigits(num1) << endl;
            break;

            case 4:
                cout << "Enter the number: ";
                cin >> num1;

                if(test_narcissistic(num1)) {cout << "Yes, the number is narcissistic" << endl;}
                else {cout << "No, the number is not narcissistic" << endl;}
            break;

            case 5:
                cout << "Enter the numbers: ";
                cin >> num1 >> num2;

                cout << "The GCF of " << num1 << " and " << num2 << " is: " << calc_greatestCommonDivisor(num1, num2) << endl;
            break;
            
            case 6:
                cout << "Enter the number: ";
                cin >> num1;

                cout << "The factorial of the given number is " << calc_factorial(num1) << endl;
            break;

            case 7:
                display_prime();
                cout << endl;
            break;
            
            case 8:
                display_perfect();
                cout << endl;
            break;

            case 9:
                display_narcissistic();
                cout << endl;
            break;

            case 10:
                display_fibonacci();
                cout << endl;
            break;

            case 11:
                wish = 'n';
                cout << "Exiting..";
            break;

            default:
                cout << "Invalid choice. Kindly enter the correct choice." << endl;
            break;
        }

        if(wish == 'y') {

            cout << endl;
            cout << "==================================================================================" << endl;
            cout << endl;
            
            cout << "Would you like to run the program again(y/n): ";
            cin >> wish;

            cout << endl;
            cout << "==================================================================================" << endl;
            cout << endl;
        }

    } while(wish == 'y');
}


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



int test_perfect(int x) {

    int k{0};

    for(size_t i{1}; i<x; i++) {
        if(x%i==0) {k+=i;}
        if(i==(x-1) && k==x) {return(1);}
    }
    return(0);
}



int calc_numberOfDigits(int num) {

    int digits{0};

    do {
        num = num/10;
        digits++;
    } while(num>0);

    /*
    // Alternatively, instead of looping, you can use log10() func from cmath library.
    digits = log10(num) + 1;
    */
    return(digits);
}



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



unsigned long long calc_factorial(int x) {
    unsigned long long f;
    if(x==1 || x==0) {return(1);} //Cuz 0! = 1.
    else {f = x*calc_factorial(x-1);}
    return(f);
}



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



void display_menu() {
    int colWidth = 5;
        cout << left;
        cout << setw(colWidth) << 1. << "Check if a number is a prime number" << endl;
        cout << setw(colWidth) << 2. << "Check if a number is perfect number" << endl;
        cout << setw(colWidth) << 3. << "Calculate the number of digits in a given number" << endl;
        cout << setw(colWidth) << 4. << "Check if a number is a narscisstic number or not" << endl;
        cout << setw(colWidth) << 5. << "Find the GCF of 2 numbers" << endl;
        cout << setw(colWidth) << 6. << "Calculate factorial of a number" << endl;
        cout << setw(colWidth) << 7. << "Display prime numbers" << endl;
        cout << setw(colWidth) << 8. << "Display perfect numbers" << endl;
        cout << setw(colWidth) << 9. << "Display narcissistic numbers" << endl;
        cout << setw(colWidth) << 10. << "Display the fibonacci sequence" << endl;
        cout << setw(colWidth) << 11. << "Exit" << endl;
}