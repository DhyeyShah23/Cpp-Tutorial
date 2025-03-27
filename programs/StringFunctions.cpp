#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string toSentenseCase(string str) {

    for(size_t i {0}; i < std::size(str); i++) {
        if(isblank(str[i])) {str[i+1] = std::toupper(str[i+1]);}    // So that 1st letter of the word is capital
        else {str[i+1] = std::tolower(str[i+1]);}                   // So that all other letters are small
    }

    // So that the 1st element is uppercase
    str[0] = std::toupper(str[0]);      // So that 1st letter of the sentence is small

    return str;
}

int main() {
    string sen = "MY NAME IS GREG STARK AND I'M 22 YEARS OLD";
    sen = toSentenseCase(sen);
    cout << sen;
}