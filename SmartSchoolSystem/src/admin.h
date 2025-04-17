#pragma once
#include "teacher.h"

class Admin : public Teacher {
private:
    string role;

public:
    void setAdminDetails(string n, int a, string sub, string r) {
        setTeacherDetails(n, a, sub);
        role = r;
    }

    void showAdminDetails() const {
        showTeacherDetails();
        cout << "Admin Role: " << role << "\n" << endl;
    }
};
