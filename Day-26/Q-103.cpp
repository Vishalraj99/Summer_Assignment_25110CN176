#include <iostream>
using namespace std;
int main() {
    int pin = 6688,choice,enteredPin;
    double balance=7000, amount;
    cout << "Enter PIN: ";
    cin >> enteredPin;
    if(enteredPin==pin) {
        do {
            cout<<"\n\n1. Check Balance";
            cout<<"\n2. Deposit Money";
            cout<<"\n3. Withdraw Money";
            cout<<"\n4. Exit";
            cout<<"\nEnter your choice: ";
            cin >> choice;
            if (choice == 1) {
                cout << "Your balance is: " << balance;
            } else if (choice == 2) {
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance=balance+amount;
                cout<< "Amount deposited successfully.";
            } else if(choice==3) {
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                if(amount<=balance) {
                    balance=balance-amount;
                    cout<<"Please collect your cash.";
                } else{
                    cout << "Insufficient balance.";
                }
            } else if(choice==4) {
                cout << "Thank you for using ATM.";
            } else {
                cout << "Invalid choice.";
            }
        } while (choice != 4);
    } else {
        cout << "Incorrect PIN.";
    }
    return 0;
}