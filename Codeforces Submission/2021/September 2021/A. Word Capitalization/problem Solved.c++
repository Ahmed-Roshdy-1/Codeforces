#include <iostream>

using namespace std;

int main(){

    string S;
    cin>>S;
    if(S[0]>92){
         S[0]-=32;
    }

    cout<<S;

    return 0;
}