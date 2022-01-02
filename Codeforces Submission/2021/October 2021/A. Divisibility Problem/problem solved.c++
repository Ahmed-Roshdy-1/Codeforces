#include <iostream>

using namespace std;

int main(){
    int n;
    long long t=0;
    long long a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        
        if(a%b==0){
            cout<<"0"<<endl;
        }else{
            t=a%b;
            t=b-t;
            cout<<t<<endl;
        }
       
        
        
    }

    return 0;
}