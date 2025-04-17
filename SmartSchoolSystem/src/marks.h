#pragma once

class Marks {
protected:
    float marks1, marks2, marks3;

public:
    void setMarks(float m1, float m2, float m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    float getTotalMarks() const {
        return marks1 + marks2 + marks3;
    }

    float getPercentage() const {
        return getTotalMarks() / 3;
    }
};

