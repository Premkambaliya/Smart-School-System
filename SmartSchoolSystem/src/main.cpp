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
    t.setTeacherDetails("Mr. Sharma", 40, "Physics");
    t.showTeacherDetails();

    // Admin
    Admin a;
    a.setAdminDetails("Mrs. Kapoor", 45, "Math", "Head Admin");
    a.showAdminDetails();

    // Subjects
    MathSubject m;
    ScienceSubject s;
    m.show();
    s.show();

    return 0;
}
