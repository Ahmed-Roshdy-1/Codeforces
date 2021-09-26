#include <iostream>

using namespace std;

int main(){

    string S;
    cin>>S;
    string S1="hello";
    int count=0;
    int j=0;
    for(int i=0;i<S.length();i++){
        if(S[i]==S[j]){
            j++;
            count++;
            if(count==5){
               
                break;
            }
        }

    }
    if(count == 5){
        cout<<"YES";

    }else{
        cout<<"NO";
    }
    return 0;
}