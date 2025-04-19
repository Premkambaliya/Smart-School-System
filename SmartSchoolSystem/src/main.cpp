#include <iostream>
#include "./result.h"
#include "./admin.h"
#include "./subject.h"

using namespace std;

int main() {
    cout << "=== Smart School Management System ===\n" << endl;

    // Student Result
    Result r;
    r.setStudentDetails("Prem", 18, 101);
    r.setMarks(75.5, 80.0, 68.5);
    r.showResult();

    // Teacher
    Teacher t;
    t.setTeacherDetails("Mr. Neel Patel", 40, "Frontend");
    t.showTeacherDetails();

    // Admin
    Admin a;
    a.setAdminDetails("Mrs. Akruti Patel", 45, "Cpp", "Head Admin");
    a.showAdminDetails();

    // Subjects
    MathSubject m;
    ScienceSubject s;
    m.show();
    s.show();

    return 0;
}
