 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
  string str;
  int count,i;
  cout<<"Enter string: ";
  cin>>str;
  for(i=0;i<str.length();i++)
  {
    count=1;
   while(str[i]==str[i+1])
   {
    count++;
    i++;
   }
   cout<<str[i]<<count;
  }
  return 0;
 }