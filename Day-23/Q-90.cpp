#include <iostream>
using namespace std;
int main(){
    string str;
    int j,i,temp;
    cout << "Enter a string: ";
    cin >> str;
    for(i=0;i<str.length();i++) {
        temp= 0;
        for(j=0;j<str.length();j++) {
            if (str[i]==str[j]) {
                temp++;}
            }
        if(temp>1) {
            cout << "First repeating character: " << str[i];
        }}
    cout<< "No repeating character found.";
    return 0;
}