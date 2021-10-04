#include <iostream>

using namespace std;

int main(){

    string n,a;
    cin>>n>>a;
    
    for(int i=0;a[i]!='\0';i++){
        if(n[i]==a[i]){
            cout<<0;
        }else{
            cout<<1;
        }
    }
    



    return 0;
}

