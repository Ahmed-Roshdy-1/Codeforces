#include <iostream>

using namespace std;

int main(){

    string s;
    cin>>s;
    int flage=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            
            i+=2;
            if(flage){
                cout<<" ";

            }
            flage=0;
        }else{
            flage=1;
            cout<<s[i];
            }
    }

    return 0;
}