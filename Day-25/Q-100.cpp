    #include <iostream>
    #include <string>
    using namespace std;
    int main() {
        string word[10], temp;
        int n,i,j;
        cout<<"Enter number of words: ";
        cin>>n;
        cout<<"Enter words:\n";
        for(int i=0;i<n;i++)
            cin>>word[i];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(word[i].length() > word[j].length()) {
                    temp = word[i];
                    word[i] = word[j];
                    word[j] = temp;}
                }
        }
        cout <<"Words sorted by length:\n";
        for(i=0;i<n;i++)
            cout<<word[i] << endl;
        return 0;
    }