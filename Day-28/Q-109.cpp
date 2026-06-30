#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Library Management System\n";
    cout<<"1. take Book\n";
    cout<<"2. Return Book\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice==1)
        cout<<"Book taken Successfully.";
    else if(choice==2)
        cout<<"Book Returned Successfully.";
    else
        cout<<"Invalid Choice.";
    return 0;
}