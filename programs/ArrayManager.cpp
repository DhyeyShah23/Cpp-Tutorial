/* INCOMPLETE */

/* 
Use OOP principles and make a program which can create and manage arrays. Include the following utilities:
    1. Inserting and deleting an element.
    2. Searching the array for a particulat element
    3. Sorting the array
*/

#include <iostream>
#include <iomanip>

using namespace std;



void displayMenu() {
    int colWidth = 5;
        cout << left;
        cout << "What do you want to do?" << endl;
        cout << setw(colWidth) << 1. << "Append element" << endl;
        cout << setw(colWidth) << 2. << "Insert element" << endl;
        cout << setw(colWidth) << 3. << "Delete last element" << endl;
        cout << setw(colWidth) << 4. << "Delete element at index" << endl;
        cout << setw(colWidth) << 5. << "Search element" << endl;
        cout << setw(colWidth) << 6. << "Sort array" << endl;
        cout << setw(colWidth) << 7. << "Display array" << endl;
        cout << setw(colWidth) << 8. << "Exit" << endl;
        cout << "Your choice: ";
}



class Array {
private:
    int* Arr;
    int ArrSize;
    int CurrentPosn;

public:

    // Constructor - Initializing array of specific size.
    Array() {
        Arr = new int[0];       // Arr is a pointer to a set of [0] integers.
        ArrSize = 0;
        CurrentPosn = 0;
    }


    // Getter functions
    int GetSize() {return ArrSize;}
    int* GetArray() {return Arr;}


    // Appending element at to the array
    void AppendElement(int element) {
        
        // Increasing array size by 1 in the same array
        ArrSize++;
        int* newArr = new int[ArrSize];
        for(int i{0}; i<ArrSize; i++) {newArr[i] = Arr[i];}
        delete Arr;
        Arr = newArr;

        // Appending element
        Arr[ArrSize-1] = element;
    }


    // Inserting element at a specific index


    // Deleting element at a specic index
    void DeleteElement(int index) {

        // For valid index
        if(index >=0 && index < ArrSize) {

            // Decreasing array size
            ArrSize--;
            int* newArr = new int[ArrSize];

            // Updating element in the indicies while deleting requested element
            for(int i{0}; i<ArrSize; i++) {
                if(ArrSize < index) {           // Before deleted element
                    newArr[i] = Arr[i];
                }
                
                else if(ArrSize >= index) {     // For and after deleted element
                    newArr[i] = Arr[i+1];
                }
            }

            delete Arr;
            Arr = newArr;

        }
    
        // For invalid index
        else {cout << "The entered index is out of bounds of the array" << endl;}
    }


    // Searching the element
    void SearchElement(int element) {
        for(int i{0}; i<ArrSize; i++) {
            if(Arr[i] == element) {
                cout << "Element found at index: " << i << endl;
                return;
            }
        }
    }


    // Sorting the array
    void SortArray() {
        // Write code to sort array here
    }


    // Displaying array
    void DisplayArray() {
        cout << "Array: ";

        int colWidth = 3;
        cout << left;
        for(size_t i{0}; i<ArrSize; i++) {
            cout << setw(colWidth) << Arr[i];
        }
    }


};


int main() {

    int choice;
    int num;
    char wish = 'y';
    Array myArr;


    do {
        cout << endl;
        displayMenu();
        cin >> choice;


        switch(choice) {

            case 1:
                cout << "Enter element to append: ";
                cin >> num;
                myArr.AppendElement(num);
            break;

            case 2:
                // Insert element at specific index
            break;
            
            case 3:
                // Delete last element
            break;
            
            case 4:
                cout << "Enter index of element to be deleted: ";
                cin >> num;
                myArr.DeleteElement(num);
            break;

            case 5:
                cout << "Which element are you searching for: ";
                cin >> num;
                myArr.SearchElement(num);
            break;

            case 6:
                // Sorting array
            break;

            case 7:
                myArr.DisplayArray();
            break;

            case 8:
                wish = 'n';
                cout << "Exiting.." << endl;
            break;

            default:
                cout << "Please select a valid choce" << endl;
        }

    } while (wish == 'y');
    
    return 0;
}