#include <iostream>
#include <string>
using namespace std;

class StudentInfo
{
private:
    int rollNo;
    string name;
    float marks;

public:

    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore(); // Clear input buffer
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\n----- Student Record -----" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }

    void calculateGrade()
    {
        cout << "Grade       : ";

        if (marks >= 90)
            cout << "A+" << endl;
        else if (marks >= 80)
            cout << "A" << endl;
        else if (marks >= 70)
            cout << "B" << endl;
        else if (marks >= 60)
            cout << "C" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main()
{
    StudentInfo s;        // Create a StudentInfo object

    s.getData();          // Take input from user
    s.displayData();      // Show the entered details
    s.calculateGrade();   // Show the grade based on marks

    return 0;
}