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

// For Enrolment menu:
//Enroll a Student - this part of your program must let the user select the student (by entering their ID Number or their name). After the student has been selected, the program will then show the list of available courses. The user will then select which courses the student will enrol. Make sure that a course must not be enrolled twice by the same student and a student can only enroll courses for his/her year level.
//View List of Enrolees - this part of the program will display all the students that are currectly enrolled together with the courses they are enrolled in.

void enrollStudent(){
    string studentID, courseID;
    cout << "Enter student ID: ";
    cin >> studentID;

}

void studentManagement(){
    
}

void scheduleManagement(){

}

void courseManagement(){

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
        cout << "1. Enrolment\n";
        cout << "2. Student Management\n";
        cout << "3. Schedule Management\n";
        cout << "4. Course Management\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enrollStudent();
                break;
            case 2:
                studentManagement();
                break;
            case 3:
                scheduleManagement();
                break;
            case 4:
                courseManagement();
                break;
            case 5:
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