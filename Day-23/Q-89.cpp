#include <iostream>
using namespace std;
int main() {
    string str;
    int j;
    cout << "Enter a string: ";
    cin >> str;
    for (int i=0;i<str.length();i++) // str.length returns no. of characters
    {
        int temp=0;
        for (j=0;j<str.length();j++) {
            if (str[i]==str[j]) {
                temp++;}
            }
        if(temp==1){
            cout<< "First non-repeating character: " << str[i];
        }}
    cout<<"No non-repeating character found.";
    return 0;
}