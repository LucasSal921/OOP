#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
private:
    string Name;
    int Age;
public:
    Student(string nimi, int ika);
    void setAge(int Age);
    void setName(string Name);
    string getName();
    int getAge();
    void printStudentInfo();
};

#endif // STUDENT_H
