/*
Student Grade Management: A school needs a system to manage student grades.
• Create a class names ‘Student’ with attributes: studentID, name, and marks (array) for storing marks of 5 subjects.
• Implement a function calculateAverage() to return the student's average marks.
• Implement another function displayDetails() to show the student’s details along with their average marks.
Demonstrate how multiple student objects can be created and their details are displayed.
*/

#include <iostream>
using namespace std;

// Modify this const to increase/decrease the num. of subjects.
const int SUBJECTS{5};

class Student {
private:
    string StudentName;
    int StudentId;
    int Marks[SUBJECTS];
    int AvgMarks;

public:
    Student(string name, int id, int* marks) {
        StudentName = name;
        StudentId = id;
        for(size_t i{0}; i<SUBJECTS; i++) {
            Marks[i] = *marks;
            marks++;
        }
        AvgMarks = CalcAvg();
    }

    int CalcAvg() {
        int sum{0};
        int avg;
        for(size_t i{0}; i<SUBJECTS; i++) {sum += Marks[i];}
        avg = sum/SUBJECTS;
        return avg;
    }

    void DisplayInfo() {
        cout << endl;
        cout << "STUDENT DETAILS:-" << endl;
        cout << "Student Name: " << StudentName << endl;
        cout << "Student ID: " << StudentId << endl;
        cout << "Avgerage Marks: " << AvgMarks << endl;
    }
};

int main() {
    string name;
    int id;
    int marks[SUBJECTS];

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter student ID: ";
    cin >> id;

    cout << "Enter student's marks in " << SUBJECTS << " subjects: ";
    for(size_t i{0}; i<SUBJECTS; i++) {cin >> marks[i];}

    Student student1(name, id, marks);
    student1.DisplayInfo();
}