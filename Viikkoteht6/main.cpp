#include <iostream>
#include <Student.h>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int selection = 0;
    vector<Student> studentList;

    do
    {
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;

        switch(selection)
        {
        case 0:
        {
            string nimi;
            int ika;

            cout << "Student name: ";
            cin >> nimi;

            cout << "Student age: ";
            cin >> ika;
            Student uusiOpiskelija(nimi, ika);

            studentList.push_back(uusiOpiskelija);
            break;
        }
        case 1:
        {
            if (studentList.empty()) {
                cout << "Student list is empty." << endl;
                break;
            }
            else {
                for (Student& opiskelija : studentList) {
                    cout << "Student " << opiskelija.getName() << " Age " << opiskelija.getAge() <<  endl;
                }
            }
            break;
        }
        case 2:
        {
            if (studentList.empty()) {
                cout << "Student list is empty." << endl;
                break;
            }

            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                    return a.getName() > b.getName();
                }
            );

            for (Student& opiskelija : studentList) {
                opiskelija.printStudentInfo();
            }
            break;
        }
        case 3:
        {
            if (studentList.empty()) {
                cout << "Student list is empty." << endl;
                break;
            }

            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                    return a.getAge() > b.getAge();
                }
            );

            for (Student& s : studentList) {
                s.printStudentInfo();
            }
            break;
        }
        case 4:
        {
            if (studentList.empty()) {
                cout << "Student list is empty." << endl;
                break;
            }

            string hakuNimi;
            cout << "Student to be found name: ";
            cin >> hakuNimi;

            auto it = find_if(studentList.begin(), studentList.end(), [&hakuNimi](Student& opiskelija) {
                    return opiskelija.getName() == hakuNimi;
                }
            );

            if (it != studentList.end()) {
                cout << "Student found:\n";
                it->printStudentInfo();
            } else {
                cout << "Student named " << hakuNimi << " is not found" << endl;
            }
            break;
        }
        default:
        {
            cout << "Wrong selection, stopping..." << endl;
            break;
        }
    }

    } while(selection < 5);

    return 0;
}
