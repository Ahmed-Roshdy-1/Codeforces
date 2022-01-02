#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int count=0; // to count the number of the stone than we need to take
    for(int i=0;i<str.length()-1;i++){
        if(str[i]==str[i+1]){
                count++;
        }

    }
    cout<<count;


    return 0;
}