#include <iostream> // anagram is word through by which another word can be formed or string
#include <algorithm>// a headerfile to use begin() and end()
using namespace std;
int main() {
    string str1,str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    sort(str1.begin(),str1.end());// str1.begin() points to first character of string
    sort(str2.begin(),str2.end());// str2.end() points to last charcater of string
    if(str1==str2){
        cout << "Anagram";}
    else{
        cout << "Not Anagram";}
    return 0;
}