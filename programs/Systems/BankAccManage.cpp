/*
Bank Account Management: Develop a banking system that manages customers' accounts.
• Define a BankAccount class with attributes: accountNumber, accountHolderName, and balance.
• Implement member functions for depositing (deposit), withdrawing (withdraw), and displaying account details (display).
• Ensure that the withdraw function does not allow overdrafts (i.e., balance should not go negative).
Write the class definition and demonstrate how an object of this class can be used.
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    string AccHolderName;
    int AccNum;
    double Bal;

public:
    
    // Constructor
    BankAccount(string name, int accNum) {
        AccHolderName = name;
        AccNum = accNum;
        Bal = 0;
    }

    void DisplayAccDetails() {
        cout << "Account holder name: " << AccHolderName << endl;
        cout << "Account number: " << AccNum << endl;
        cout << "Account Balance: " << Bal << endl;
    }

    void Deposit(int amt) {
        Bal += amt;
        cout << amt << "/- deposited successfully." << endl;
    }

    void Withdraw(int amt) {
        if(Bal >= amt) {
            Bal -= amt;
            cout << amt << "/- withdrawn successfully." << endl;
        } else {cout << "Insufficient balance. Failed to withdraw money." << endl;}
    }

    void Balance() {
        cout << "Your account balance is: " << Bal << endl;
    }
};


void displayMenu() {
    cout << "1.\t See Account Details" << endl;
    cout << "2.\t Deposit Money" << endl;
    cout << "3.\t Withdraw Money" << endl;
    cout << "4.\t Check Balance" << endl;
    cout << "5.\t Exit" << endl;
}


int main() {

    string name;
    int accNum;
    int choice;
    int amt;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your account number: ";
    cin >> accNum;

    BankAccount ba(name, accNum);

    while(1) {
        displayMenu();
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            ba.DisplayAccDetails();
            break;

        case 2:
            cout << "Enter amount to be deposited: ";
            cin >> amt;
            ba.Deposit(amt);
            break;

        case 3:
            cout << "Enter amount to be withdrawn: ";
            cin >> amt;
            ba.Withdraw(amt);
            break;

        case 4:
            ba.Balance();
            break;

        case 5:
            choice = 0;
            cout << "Exiting...." << endl;
            break;
            
        default:
            cout << "Invalid choice. Select again." << endl;
            break;
        }

        if(choice==0) {break;}      // To break free of infinte loop.
        
        cout << endl;
        cout << "===============" << endl;
        cout << endl;
    }
}