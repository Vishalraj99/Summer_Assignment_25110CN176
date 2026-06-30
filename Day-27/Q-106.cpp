#include <iostream>
using namespace std;
int main(){
    int Id;
    char name[50];
    char department[50];
    float salary;
    cout<< "Enter employee ID: ";
    cin>> Id;
    cout<< "Enter employee name: "; //only first name
    cin>> name;
    cout<< "Enter department: ";
    cin>> department;
    cout<< "Enter salary: ";
    cin>> salary;
    cout<< "Employee Record"<<endl;
    cout<< "Employee ID: " <<Id<<endl;
    cout<< "Name: " << name<<endl;
    cout<< "Department: " << department<<endl;
    cout<< "Salary: " << salary<<endl;
    return 0;
}