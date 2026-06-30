#include <iostream>
using namespace std;
int main(){
    int roll,age;
    char name[50],course[50];
    cout << "Enter student roll number: ";
    cin >> roll;
    cout << "Enter student name: ";
    cin >> name; // only first name
    cout << "Enter student age: ";
    cin >> age;
    cout << "Enter student course: ";
    cin >> course;
    cout << "Student Record";
    cout << "Roll Number: " << roll<<endl;
    cout << "Name: " << name<<endl;
    cout << "Age: " << age << endl;
    cout << "Course: " << course <<endl;
    return 0;
}