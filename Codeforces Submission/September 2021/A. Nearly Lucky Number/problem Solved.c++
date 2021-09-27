#include <iostream>

using namespace std;

int main(){

    long long n;
    cin>>n;
    int count=0,temp=0;
    
    for(int i=0;n;i++){
        temp=n%10;
        n=n/10;
        if(temp==7 || temp==4){
            count++;
        }

    }
    if(count==7 || count==4){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}