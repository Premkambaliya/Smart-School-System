#pragma once
#include <iostream>
using namespace std;

class Subject {
public:
    void subjectInfo() {
        cout << "This is a generic subject class.\n";
    }
};

class MathSubject : public Subject {
public:
    void show() {
        cout << "Math Subject: Algebra, Geometry\n";
    }
};

class ScienceSubject : public Subject {
public:
    void show() {
        cout << "Science Subject: Physics, Chemistry\n";
    }
};
