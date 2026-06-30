#include<iostream>
using namespace std;
int main(){
    int seats;
    cout<<"Enter number of tickets: ";
    cin>>seats;
    if(seats<=4)
        cout<<"Tickets Booked Successfully.";
    else
        cout<<"Only 4 tickets allowed.";
    return 0;
}