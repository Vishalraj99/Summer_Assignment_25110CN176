 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
  string str;
  int i,j;
  cout<<"Enter string: ";
  cin>>str;
  for(i=0;i<str.length();i++)
  {
   bool duplicate=false;
   for(j=0;j<i;j++)
   {
    if(str[i]==str[j])
    {
     duplicate=true;
     break;
    }
   }
   if(!duplicate)
    cout<<str[i];
  }
  return 0;
 }