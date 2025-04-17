#pragma once
#include "person.h"

class Student : public Person {
protected:
    int rollNumber;

public:
    void setStudentDetails(string n, int a, int roll) {
        setPersonDetails(n, a);
        rollNumber = roll;
    }

    void showStudentDetails() const {
        showPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
    }

    int getRollNumber() const {
        return rollNumber;
    }
};
