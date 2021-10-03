#include <iostream>
#include <string>

using namespace std;

int main(){
    string p;
    getline(cin,p);
    for(int i=0;i<p.length();i++){
        if(p[i] =='H' || p[i]=='Q' || p[i]=='9'){
            cout<<"YES";
            break;

        }else{
            if(i==p.length()-1){
                cout<<"NO";
            }
        }
    }





    return 0;
}