#include "student.h"
#include <iostream>

using namespace std;

Student::Student(string nimi, int ika) {
    Name = nimi;
    Age = ika;
}

string Student::getName() {
    return Name;
}

int Student::getAge() {
    return Age;
}

void Student::setName(string nimi) {
    Name = nimi;
}

void Student::setAge(int ika) {
    Age = ika;
}

void Student::printStudentInfo() {
    cout << "Student " << Name << " Age: " << Age << endl;
}
