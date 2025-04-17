#pragma once
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void showPersonDetails() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};
