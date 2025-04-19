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
        cout << "Full Stack: Frontend, Backend\n";
    }
};

class ScienceSubject : public Subject {
public:
    void show() {
        cout << "Cpp : STL, Oops\n";
    }
};
