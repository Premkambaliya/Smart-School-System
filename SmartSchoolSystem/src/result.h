#pragma once
#include "student.h"
#include "marks.h"

class Result : public Student, public Marks {
public:
    void showResult() {
        showStudentDetails();
        cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Total: " << getTotalMarks() << "\nPercentage: " << getPercentage() << "%" << endl;
        cout << "Status: " << (getPercentage() >= 40 ? "Pass" : "Fail") << "\n" << endl;
    }
};
