#pragma once
#include "person.h"

class Teacher : public Person {
protected:
    string subject;

public:
    void setTeacherDetails(string n, int a, string sub) {
        setPersonDetails(n, a);
        subject = sub;
    }

    void showTeacherDetails() const {
        showPersonDetails();
        cout << "Subject: " << subject << endl;
    }

    string getSubject() const {
        return subject;
    }
};
