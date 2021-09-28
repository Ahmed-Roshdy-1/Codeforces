#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a[10]={4,7,44,47,74,77,477,474,444,447};
    bool istrue=false;
    
    for(int i=0;i<10;i++){
        if(n%a[i]==0){
            istrue=true;
            break;
        } 

    }
    if(istrue){
        
        cout<<"YES";
        
    }else{
        cout<<"NO";
    }
    return 0;
}