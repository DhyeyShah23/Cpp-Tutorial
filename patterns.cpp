#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// To draw a line to separate 2 functions
void line() {
    cout << setfill('=');     // To make line seaperating different patterns
    cout << endl;
    cout << setw(75) << "" << endl;
    cout << endl;
}

// Number Pattern 1
void numPat1(int n) {
    for(int i=0; i <= 2*n-2; i++) {
        for(int j=0; j <= 2*n-2; j++) {
            
            if(i==0 || j==0 || i==(2*n-2) || j==(2*n-2)) {
                if(j==(2*n-2)) {printf("%d", n);}
                else {printf("%d ", n);}
            }
            
            else if(i<=n-2 && j<=n-2) {
                if(i<=j) {printf("%d ", n-i);}
                if(j<i) {printf("%d ", n-j);}
            }
            
            else if(i<=n-2 && j>n-1) {
                if(i<=(2*n-j-2)) {printf("%d ", n-i);}
                if((2*n-j-2)<i) {printf("%d ", n - (2*n-j-2));}
            }
            
            else if(i>n-1 && j<=n-2) {
                if(2*n-2-i<=j) {printf("%d ", n - (2*n-2-i));}
                if(j<(2*n-2-i)) {printf("%d ", n-j);}
            }
            
            else if(i>n-1 && j>n-1) {
                if(2*n-2-i <= 2*n-j-2) {printf("%d ", n - (2*n-2-i));}
                if(2*n-j-2 < 2*n-2-i) {printf("%d ", n - (2*n-j-2));}
            }
            
            else if(i==n-1) {
                if(j<=n-1) {printf("%d ", n-j);}
                if(j>n-1) {printf("%d ", n - (2*n-j-2));}
            }
            
            else if(j==n-1) {
                if(i<=n-1) {printf("%d ", n-i);}
                if(i>n-1) {printf("%d ", n - (2*n-i-2));}
            }
        }
        printf("\n");       // For next line after each row
    }
}

// Number Pattern 2
void numPat2(int n) {
    int a {1};
    char b {'-'};

    // Loop for printing each row
    for(int i=1; i<=n; i++) {

        // For odd rows - straight print
        if(i%2 != 0) {
            for(int j=1; j<=i; j++) {
                if(j<i) {               // For printing non-last elements
                    cout << a << b;
                    a++;
                }
    
                if(j==i) {              // For printing the last element
                    cout << a << endl;
                    a++;
                }
            }
        }

        // For even rows - reverse print
        if(i%2 == 0) {
            a = a+i-1;
            for(int j=1; j<=i; j++) {
                if(j<i) {       // For printing non-last elements
                    cout << a << b;
                    a--;
                }

                if(j==i) {      // For printing last element
                    cout << a << endl;
                    a+=i;       // For equating a to it's expected value of the next row.
                }
            }
        }
    }
} 

// Number Pattern 3
void numPat3(int n) {

    vector<int> arr(n);

    // Initializing the array - here, giving it the value of 1 - n.
    for(int i {0}; i<n; i++) {
        arr[i] = i+1;
    }

    for(int i {1}; i<=n; i++) {
        
        for(int j {1}; j<=n; j++) {

            // For last element of each row:
            if(i==j) {
                cout << arr[j-1] << endl;
                break;
            }

            // For empty spaces - try deleting this code later
            else if(i<j) {
                cout << "p ";
            }

            // For other elements
            else {
                printf("%d ", (arr[j-1] + (n*(i-j)) - (i-j)*(i-j-1)/2));
            }
        }
    }
}

// Character Pattern 1
void chrPat1() {

    // Taking user input
    int n {14};
    // cout << "Enter the no. of n: ";
    // cin >> n;

    char a {'*'};

    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {

            // For 1st square
            if(i <= n/2 && j <= n/2) {
                if(i+j <= n/2+1) {          // For the triangle
                    cout << a << " ";
                } else {cout << "  ";}      // For the empty space
            }

            // For 2nd square
            else if(i <= n/2 && j > n/2) {
                if(j-i >= n/2) {            // For the triangle
                    cout << " " << a;
                    if(j==n) {cout << endl;}
                } else {cout << "  ";}      // For the empty space
            }

            // For 3rd square
            else if(i>n/2 && j<= n/2) {
                if(i-j >= n/2) {            // For the triangle
                    cout << a << " ";
                } else {cout << "  ";}      // For the empty space
            }

            // For the 4th square
            else if(i > n/2 && j > n/2) {
                if(i+j > 3*n/2) {            // For the triangle
                    cout << " " << a;
                    if(j==n) {cout << endl;}
                } else {cout << "  ";}      // For the empty space
            }
        }
    }
}

// Character Pattern 2
void chrPat2(int n) {
    
    
    char a = '*';

    // For different rows
    for(int i=1; i<=(2*n); i++) {

        // For traversing through rows
        for(int j=1; j <= (2*n); j++) {
            
            // For 1st quater
            if(i<=n && j<=n) {
                if(j<=i) {cout << a << " ";}
                else {cout << "  ";}
            }

            // For 2nd quarter
            else if(i<=n && j>n) {
                if((i+j) > (2*n)) {cout << " " << a;}
                else {cout << "  ";}
            }

            // For 3rd quarter
            else if(i>n && j<=n) {
                if((i+j) <= (2*n)+1) {cout << a << " ";}
                else {cout << "  ";}
            }

            // For 4th quarter
            else {
                if(i<=j) {cout << " " << a;}
                else {cout << "  ";}
            }
        }

        cout << endl;

    }
}


// Main function
int main() {
  
    int n;
    cout << "enter a no: ";
    cin >> n;

    numPat1(n);
    line();
    
    numPat2(n);
    line();

    numPat3(n);
    line();

    chrPat1();
    line();

    chrPat2(n);
    line();
}