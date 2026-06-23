#include <iostream>
using namespace std;
int main(){
    int i,j,temp,max;
    string str;
    cin>>str;
    char chrac;
    for (i=0;i<str.length();i++) // str.length returns no. of characters
    {
        temp=0;
        for(j=0;j<str.length();j++){
            if(str[i]==str[j]){
                temp++;
            }}
        if(temp> max){
            max=temp;
            chrac=str[i];}
        }
    cout<<chrac;
    return 0;
}