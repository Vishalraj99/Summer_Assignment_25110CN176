    #include <iostream>
    #include <string>
    using namespace std;
    int main() {
        string name[10],temp;
        int n,i,j;
        cout<<"Enter number of names: ";
        cin>>n;
        cout<<"Enter names:\n";
        for(i=0;i<n;i++)
            cin>>name[i];
        for(i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++){
                if(name[i] > name[j]){
                    temp = name[i];
                    name[i] = name[j];
                    name[j] = temp;
                }}
        }
        cout<<"Names in alphabetical order are:\n";
        for(i=0;i<n;i++)
            cout << name[i] << endl;
        return 0;
    }