#include <iostream>
using namespace std;
int main(){
    char name[50];
    int roll,m1,m2,m3,total;
    float percent;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter marks of subject 1: ";
    cin >> m1;
    cout << "Enter marks of subject 2: ";
    cin >> m2;
    cout << "Enter marks of subject 3: ";
    cin >> m3;
    total = m1 + m2 + m3;
    percent = (float)total / 3;
    cout << "\nMarksheet";
    cout << "\nName: " << name;
    cout << "\nRoll Number: " << roll;
    cout << "\nSubject 1 Marks: " << m1;
    cout << "\nSubject 2 Marks: " << m2;
    cout << "\nSubject 3 Marks: " << m3;
    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << percent<< "%";
    if (percent>=33)
    {
        cout << "\nResult: Passed";
    }
    else{
        cout << "\nResult: Failed";
    }
    return 0;
}