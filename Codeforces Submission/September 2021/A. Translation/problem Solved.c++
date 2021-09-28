#include <iostream>

using namespace std;

int main(){
    string s,a;
    cin>>s>>a;
    bool istrue=false;
    int a_len=a.length()-1;
    for(int i=0;i<s.length();i++){
        if(s[i]==a[a_len]){
            istrue=true;
        }else{
            istrue=false;
            break;
        }
        a_len--;
    }
    istrue ? cout<<"YES":cout<<"NO";


    return 0;
}