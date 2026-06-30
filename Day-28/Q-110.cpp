#include<iostream>
using namespace std;
int main(){
    float balance=40000,amount;
    int choice;
    cout<<"1. Deposit\n";
    cout<<"2. Withdraw\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice==1){
        cout<<"Enter amount: ";
        cin>>amount;
        balance=balance+amount;
        cout<<"New Balance = "<<balance;
    }
    else if(choice==2)
    {
        cout<<"Enter amount: ";
        cin>>amount;
        if(amount<=balance)
        {
            balance=balance-amount;
            cout<<"New Balance = "<<balance;}
        else
            cout<<"Insufficient Balance";}
    else
        cout<<"Invalid Choice";
    return 0;
}