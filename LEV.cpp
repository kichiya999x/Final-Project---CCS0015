#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string id;
    string lastName;
    string firstName;
    string middleName;
    string gender;
    string birthday;
    string address;
    string degreeProgram;
    int yearLevel;

public:
    Student(string id, string lastName, string firstName, string middleName, string gender, string birthday, string address, string degreeProgram, int yearLevel)
    : id(id), lastName(lastName), firstName(firstName), middleName(middleName), gender(gender), birthday(birthday), address(address), degreeProgram(degreeProgram), yearLevel(yearLevel) {}
};

class Course {
    string courseCode;
    string courseTitle;
    int units;
    int yearLevel;
};

void enrollStudent(){

}

void addStudent(){

}

void viewStudents(){

}

void addCourse(){

}

void viewCourses(){

}

void mainMenu(){
    int choice;
    do {
        cout << "LEV School\n";
        cout << "1. Enroll Student\n";
        cout << "2. Add Student\n";
        cout << "3. View Students\n";
        cout << "4. Add Course\n";
        cout << "5. View Courses\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enrollStudent();
                break;
            case 2:
                addStudent();
                break;
            case 3:
                viewStudents();
                break;
            case 4:
                addCourse();
                break;
            case 5:
                viewCourses();
                break;
            case 6:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
}

int main() {
    mainMenu();
    return 0;
}